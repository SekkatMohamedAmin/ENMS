//
//  day.hpp
//  Triciti
//
//  Created by boussekine moussa  on 5/12/2023.
//

#ifndef day_hpp
#define day_hpp

#include <stdio.h>
#include <iostream>
using namespace std;

/*on each day of the year, whether the day is rainy/sunny/cloudy/snowy, the day maximum and
 minimum temperatures, and the number of sunny hours; and*/

class Day {
    
public:
    
    enum weatherType {rainy,sunny,cloudy,snowy};
    
    //overloading operators
    Day& operator=(const Day& other);
    friend ostream& operator<<(ostream& os, const Day& day);
    friend istream& operator>>(istream& is, Day& day);
    
    //constructor
    Day(float =0,  float =0,  float =0, weatherType =sunny);
    //copy constructor
    Day(const Day &other);
    //move constructor
    Day(const Day&&);
    
    //setters
    void setSunnyHours(float );
    void setMax_temp(float );
    void setMin_temp(float );
    void setWeather(weatherType);
    void setPrivateData(float  ,float  ,float  ,weatherType );
    
    //getters
    float get_sunny_hours();
    float get_max_temp();
    float get_min_temp();
    weatherType get_wheather();
    
private:
    
    float sunny_hours;
    float max_temp;
    float min_temp;
    weatherType weather;
    
};

#endif /* day_hpp */
