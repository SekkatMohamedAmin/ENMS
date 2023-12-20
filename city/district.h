#ifndef DISTRICT_H
#define DISTRICT_H


#include <iostream>

using namespace std;


class district {

    friend ostream& operator<< (const district &D, ostream &output);
    friend istream& operator>> (district &D, istream &input);

    public:
        // Consturctor:
        district (string Name) : districtName(Name) {}
        // Overloading some operators: 
        bool operator== (const district& other) const;
        bool operator!= (const district& other) const;
        bool operator< (const district& other) const;
        bool operator> (const district& other) const;
        // Setter & Getter functions of district name
        string getdistrictName () const;
        void setdistrictName (const string& name);

    private:
        string districtName;
};






#endif