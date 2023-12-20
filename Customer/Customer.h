#ifndef CUSTOMER_H
#define CUSTOMER_H


#include <iostream>
#include <string>
#include "BST.h"
//#include "Country.h"
#include "../city/Region.h"
#include "../city/City.h"
#include "../city/district.h"
#include "Hashtable.h"
#include "Consumption_Injection.h"

using namespace std;

class Customer {

    friend ostream& operator<< (const Customer& Cust, ostream& out);
    friend istream& operator>> (Customer &Cust, istream& in);

    public:
    //Constructor:
    Customer (string name, unsigned id, int members , string addr, Country country, Region region, City city, district dist, double consumption_amount, double injection_amount, double custoemr_needs);
    //Destructor:
    ~Customer ();    
    // Setters
    void setCustomerName(const string& name);
    void setID(unsigned id);
    void setAddress(const string& addr);
    void setCustomerDistrict(const district& dist);
    void setCustomerCity(const City& city);
    void setCustomerRegion(const Region& region);
    void setCustomerCountry(const Country& country);
    void setFamilyMembers(int members);
    void setFamilyMembersAges(int* ages);
    void setMonthlyConsumptionAmount(double amount);
    void setMonthlyInjectionAmount(double amount);
    void setMonthlyCustomerNeeds(double needs);

    // Getters
    string getCustomerName() const;
    unsigned getID() const;
    string getAddress() const;
    district getCustomerDistrict() const;
    City getCustomerCity() const;
    Region getCustomerRegion() const;
    Country getCustomerCountry() const;
    int getFamilyMembers() const;
    int* getFamilyMembersAges() const;
    double getMonthlyConsumptionAmount() const;
    double getMonthlyInjectionAmount() const;
    double getMonthlyCustomerNeeds() const;

    private:
        string CustomerName;
        unsigned ID;
        string address;
        district customer_district;
        City customer_city;
        Region customer_region;
        //Country Customer_country;
        int family_members;
        int* familyMembers_ages;
        double monthly_consumption_amount;
        double monthly_injection_amount;
        double monthly_customer_needs;
        HashTable<Day> daily_consumption_injection ();
};

#endif


















/*
u will need the following later :
#include <iostream>
#include <fstream>
#include <nlohmann/json.hpp>

using json = nlohmann::json;

int main() {
    // Read data from the JSON file
    std::ifstream file("algerian_customer_data.json");
    json data;

    if (file.is_open()) {
        file >> data;
        file.close();

        // Access the retrieved data
        for (const auto& customer : data) {
            std::cout << "Customer Name: " << customer["Customer_Name"] << std::endl;
            std::cout << "Address: " << customer["Address"] << std::endl;
            // Access other fields as needed
        }
    } else {
        std::cout << "Unable to open file!" << std::endl;
    }

    return 0;
}
*/