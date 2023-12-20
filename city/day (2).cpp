//
//  day.cpp
//  Triciti
//
//  Created by boussekine moussa  on 5/12/2023.
//

#include "day.hpp"
#include <iostream>
using namespace std;


//constructor
Day::Day(float sunny_hours,  float minTemp,  float maxTemp, weatherType weatherD){
    setPrivateData(sunny_hours,maxTemp,minTemp,weatherD);
}


//copy constructor
Day::Day(const Day& other)
        : sunny_hours(other.sunny_hours),
          max_temp(other.max_temp),
          min_temp(other.min_temp),
          weather(other.weather){}


//move constructor
Day::Day(const Day&& other)
: sunny_hours(std::move(other.sunny_hours)),
max_temp(std::move(other.max_temp)),
min_temp(std::move(other.min_temp)),
weather(std::move(other.weather)) {}


//setters
void Day::setSunnyHours(float sunnyH){
    if (sunnyH >= 0 &&  sunnyH <=19)sunny_hours = sunnyH;
    else{
        sunny_hours=0;
    }
}
void Day::setMax_temp(float temp){
    if (temp >= -20 &&  temp <=60)max_temp = temp;
    else
    max_temp =0;
}
void Day::setMin_temp(float temp){
    if (temp >= -20 &&  temp <=60)min_temp = temp;
    else
    min_temp=0;
}
void Day::setWeather(weatherType weatherD){
    if (weatherD == rainy ||  weatherD == sunny ||  weatherD == cloudy ||  weatherD == snowy) weather=weatherD ;
    else{
        weather=sunny;
    }
}
void Day::setPrivateData(float sunnyH ,float maxT ,float minT ,weatherType weatherD){
    setSunnyHours(sunnyH);
    setMax_temp(maxT);
    setMin_temp(minT);
    setWeather(weatherD);
}


//getters
float Day::get_sunny_hours(){ return sunny_hours;}
float Day::get_max_temp(){ return max_temp;}
float Day::get_min_temp(){ return min_temp;}
Day::weatherType Day::get_wheather(){return weather;}


//overloading operators
Day& Day::operator=(const Day& other) {
    if (this != &other) {
        sunny_hours = other.sunny_hours;
        max_temp = other.max_temp;
        min_temp = other.min_temp;
        weather = other.weather;
    }
    return *this;
}


ostream& operator<<(ostream& os, const Day& day) {
    os << "\nSunny Hours: " << day.sunny_hours << endl;
    os << "Max Temperature: " << day.max_temp << endl;
    os << "Min Temperature: " << day.min_temp << endl;
    
    switch (day.weather) {
        case 0:
            os << "Weather: rainy\n"<< endl;
            break;
        case 1:
            os << "Weather: sunny\n"<< endl;
            break;
        case 2:
            os << "Weather: cloudy\n"<< endl;
            break;
        case 3:
            os << "Weather: snowy\n"<< endl;
            break;
    }
    return os;
}

/*
istream& operator>>(istream& is, Day& day) {
    float sunny_hours, max_temp, min_temp;
    int weather;

    cout << "Enter Sunny Hours (0-19): ";
    is >> sunny_hours;
    while (sunny_hours < 0 || sunny_hours > 19) {
        cout << "Invalid input. Enter Sunny Hours between 0 and 19: ";
        is >> sunny_hours;
    }

    cout << "Enter Max Temperature (-20 -> 60): ";
    is >> max_temp;
    while (max_temp < -20 || max_temp > 60) {
        cout << "Invalid input. Enter Max Temperature between -20 and 60: ";
        is >> max_temp;
    }

    cout << "Enter Min Temperature (-20 -> 60): ";
    is >> min_temp;
    while (min_temp < -20 || min_temp > 60) {
        cout << "Invalid input. Enter Min Temperature between -20 and 60: ";
        is >> min_temp;
    }

    cout << "Enter Weather (0: rainy, 1: sunny, 2: cloudy, 3: snowy): ";
    is >> weather;
    while (weather < 0 || weather > 3) {
        cout << "Invalid input. Enter a valid weather type (0-3): ";
        is >> weather;
    }

    // Set the private data using the provided values
    day.setPrivateData(sunny_hours, max_temp, min_temp, static_cast<Day::weatherType>(weather));

    return is;
}
*/
