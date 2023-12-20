#ifndef REGION_H
#define REGION_H

#include "City.h"

class Region {
    
    friend ostream& operator<< (const Region& R, ostream &output);
    friend istream& operator>> (Region& R, istream &intput);
    
    public:
        //Constructor:
        Region (string Name) : RegionName(Name) {}
        //Copy constructor:
        Region(const Region& other);
        //Destructor:
        ~Region ();
        //Set and get region name
        void setRegionName (const string &name);
        string getRegionName () const;
        //Display the cities of the region
        void displayCities (const Region& R) const;
    private:
        string RegionName;
        BST<City> Cities;

};

#endif