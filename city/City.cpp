#include "City.h"

City::City(const City& other) {
        this->CityName = other.CityName;
        this->CityDistricts = other.CityDistricts;
}

bool City::operator== (const City& other) const {
   
    return (CityName == other.CityName);

}

bool City::operator!= (const City& other) const {
   
    return !(CityName == other.CityName);

}

bool City::operator< (const City& other) const{
    
    return (CityName < other.CityName);

}

bool City::operator> (const City& other) const {

    return (CityName > other.CityName);

}


ostream& operator<< (const City& C, ostream& output) {
    output << C.CityName;
    return output;
}

istream& operator>> (City& C, istream& input) {
    input >> C.CityName;
    return input;
}


string City::getCityName () const {
    return CityName;
}
        
        
        
void City::setCityName (const string& name) {
    CityName = name;
}

void City::displayDistricts (const City& city) const {
    CityDistricts.inorderTraversal (CityDistricts.getRoot ());
}