#ifndef CITY_H
#define CITY_H

#include <iostream>

#include <string>

#include "BST.h"

#include "district.h"

using namespace std;

class City {

    friend ostream& operator<< (const City& C, ostream &output);
    friend istream& operator>> (City& C, istream &input);

    public:
        // Consturctor:
        City (string Name) : CityName(Name) {}
        // Copy constructor:
        City (const City& other);
        // Overloading some operators: 
        bool operator== (const City& other) const;
        bool operator!= (const City& other) const;
        bool operator< (const City& other) const;
        bool operator> (const City& other) const;
        // Setter & Getter functions of City name
        string getCityName () const;
        void setCityName (const string& name);
        // Display the list of districts of the city
        void displayDistricts (const City& city) const;
    private:
        string CityName;
        
        BST<district> CityDistricts;
};

#endif