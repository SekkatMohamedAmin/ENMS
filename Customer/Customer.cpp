#include "Customer.h"

//Constructor
Customer::Customer (string name, unsigned id, int members , string addr, Country country, Region region, City city, district dist, double consumption_amount, double injection_amount, double customer_needs) {
    setCustomerName (name);
    setID (id);
    setFamilyMembers (members);
    setAddress (addr);
    setCustomerCountry (country);
    setCustomerRegion (region);
    setCustomerCity (city);
    setCustomerDistrict (dist);
    setMonthlyConsumptionAmount (consumption_amount);
    setMonthlyInjectionAmount (injection_amount);
    setMonthlyCustomerNeeds (customer_needs);

    //Ages of family members:
    familyMembers_ages = new int [family_members];
}

// Setters
void Customer::setCustomerName(const string& name) {
    CustomerName = name;
}

void Customer::setID(unsigned id) {
    ID = id;
}

void Customer::setAddress(const string& addr) {
    address = addr;
}

void Customer::setCustomerDistrict(const district& dist) {
    customer_district = dist;
}

void Customer::setCustomerCity(const City& city) {
    customer_city = city;
}

void Customer::setCustomerRegion(const Region& region) {
    customer_region = region;
}

void Customer::setCustomerCountry(const Country& country) {
    Customer_country = country;
}

void Customer::setFamilyMembers(int members) {
    family_members = members;
}

void Customer::setFamilyMembersAges(int* ages) {
    for (int i = 0; i < family_members; ++i) {
        familyMembers_ages[i] = ages[i];
    }
}

void Customer::setMonthlyConsumptionAmount(double amount) {
    monthly_consumption_amount = amount;
}

void Customer::setMonthlyInjectionAmount(double amount) {
    monthly_injection_amount = amount;
}

void Customer::setMonthlyCustomerNeeds(double needs) {
    monthly_customer_needs = needs;
}

// Getters
string Customer::getCustomerName() const {
    return CustomerName;
}

unsigned Customer::getID() const {
    return ID;
}

string Customer::getAddress() const {
    return address;
}

district Customer::getCustomerDistrict() const {
    return customer_district;
}

City Customer::getCustomerCity() const {
    return customer_city;
}

Region Customer::getCustomerRegion() const {
    return customer_region;
}

Country Customer::getCustomerCountry() const {
    return Customer_country;
}

int Customer::getFamilyMembers() const {
    return family_members;
}

int* Customer::getFamilyMembersAges() const {
    return familyMembers_ages;
}

double Customer::getMonthlyConsumptionAmount() const {
    return monthly_consumption_amount;
}

double Customer::getMonthlyInjectionAmount() const {
    return monthly_injection_amount;
}

double Customer::getMonthlyCustomerNeeds() const {
    return monthly_customer_needs;
}