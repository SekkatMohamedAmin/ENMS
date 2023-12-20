#include <iostream>

#include <string>

#include "Region.h"

using namespace std;

 Region::Region(const Region& other) {
        this->RegionName = other.RegionName;
        this->Cities = other.Cities;
    }

ostream& operator<< (const Region& R, ostream& output) {
    output << R.RegionName;
    return output;
}

istream& operator>> (Region& R, istream& input) {
    input >> R.RegionName;
    return input;
}

string Region::getRegionName () const {
    return RegionName;
}

void Region::setRegionName (const string &name) {
    RegionName = name;
}

void Region::displayCities (const Region& R) const {
    Cities.inorderTraversal (Cities.getRoot ());
}
