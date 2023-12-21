#include"district.h"


bool district::operator== (const district& other) const {
   
    return (districtName == other.districtName);

}

bool district::operator!= (const district& other) const {
   
    return !(districtName == other.districtName);

}

bool district::operator< (const district& other) const{
    
    return (districtName < other.districtName);

}

bool district::operator> (const district& other) const {

    return (districtName > other.districtName);

}


ostream& operator<< (const district& C, ostream& output) {
    output << C.districtName;
    return output;
}

istream& operator>> (district& C, istream& input) {
    input >> C.districtName;
    return input;
}


string district::getdistrictName () const {
    return districtName;
}
        
        
        
void district::setdistrictName (const string& name) {
    districtName = name;
}