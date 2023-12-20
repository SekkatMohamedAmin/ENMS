#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <vector>
#include <string>
#include "Helper.h"


template <class Object>
class Hashtable {
public:
    Hashtable(int startingYear = 2023); // Constructor
    void insert(const string& date, const Object& obj);
    int hashingfunc2(const string& date);
    void print();

private:
    vector<vector<Object>> table;
    int starting_year;

    int extractMonth(const string& date); 
    int extractDay(const string& date);  
    int extractYear(const string& date);
    int daysInMonth(int year, int month);
    bool isLeapYear(int year);
};

template <class Object>
Hashtable<Object>::Hashtable(int startingYear) {
    if (startingYear > 1990 && startingYear < 2025) {
        starting_year = startingYear;
    } else {
        starting_year = 2023;
    }
    if (typeid(Object) == typeid(Day)) {
        table.resize(1, { Day(0, 0, 0, Day::sunny) });
    } else {
        table.resize(1, { Object(0.0) });
    }
}

template <class Object>
void Hashtable<Object>::insert(const string& date, const Object& obj) {
    int year = extractYear (date) ;
    
    //if the year isn't in the table we add a new row
    if ((year - starting_year ) >= table.size() ) {
        
        //add a new year row with a dummy data
        if (typeid(object) == typeid(Day)) {
            table.push_back({Day(0, 0, 0, Day::sunny)});
        }
        else{
            table.push_back();
        }//the first cell of the new row
        //cout<<"table size"<<table.size()<<endl;
        
        int nb_day_year =365;
        //if the year is leap we increment the nb of days
        if (isLeapYear(year)) nb_day_year++;
        
        //create all the cells in the given year with a dummydata
        if (typeid(object) == typeid(Day)) {
            table[year - starting_year].resize(nb_day_year, {Day(0, 0, 0, Day::sunny)});
        }
        else {
            table[year - starting_year].resize(nb_day_year, {});
        }
        
    }
   
    int index = hashingfunc2(date);
    
    table[ year - starting_year][index] = ob;
}

template <class Object>
int Hashtable<Object>::hashingfunc2(const string& date) {
    int total_days=0;
    
    int month = extractMonth(date);
    int day =extractDay(date);
    int year =extractYear(date);
    
    //get the days of the previous months
    for (int i=0; i < month-1; i++) {
        total_days+= daysInMonth(year, i);
    }
    //add the days of the current month
    total_days+= day;
    return total_days;
}

template <class Object>
void Hashtable<Object>::print() {
    for (int i = 0; i < table.size(); i++) {
        for (int j = 0; j < table[i].size(); j++) {
            if (table[i][j].get_sunny_hours() == 0) {
                continue;
            }
            cout << this->table[i][j];
        }
    }
}
#endif 