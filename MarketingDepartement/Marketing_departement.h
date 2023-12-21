#ifndef MARKETING_DEPARTEMENT_H
#define MARKETING_DEPARTEMENT_H

#include <iostream>
#include <string>
#include "../Customer/Customer.h"
#include "../City/City.h"


using std::string;

class Marketing_departement
{
    
    private:
        double Current_budget;
        double Budget_spent;
        double Start_Budget; // by default start with 10.10^6 da
        string Marketing_departement_city;
        string Marketing_departement_region;
        int total_number_of_households;
        Customer *winningCustomer;
        Customer *losingCustomer;
        string currentCity;
        string currentRegion;
        

        

        //string Marketing_departement_country; // FOR FURTHER USE


    public:
        Marketing_departement(double budget , string region,string city);
        void Set_Winning_Customer(Customer *customer);
        void Set_Losing_Customer(Customer *customer);
        void Set_Current_budget(double);
        void Set_Start_Budget(double);
        void Set_total_number_of_households(int);
        

        double Get_Current_budget();
        double Get_Start_Budget();
        string Get_Marketing_departement_city();
        string Get_Marketing_departement_region();
        int Get_total_number_of_households();
        Customer *Get_Winning_Customer();
        Customer *Get_Losing_Customer();
        
        void Reduce_Budgetby(double percentage);
        void Increase_Budgetby(double percentage);
        
        
        void print();



        ~Marketing_departement();
        void print();

};
#endif
