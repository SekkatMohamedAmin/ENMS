#ifndef MARKETING_DEPARTEMENT_H
#define MARKETING_DEPARTEMENT_H

#include <iostream>
#include <string>

using std::string;

class Marketing_departement
{
    
    private:
        double Current_budget;
        double Budget_spent;
        double Start_Budget;
        string Marketing_departement_city;
        string Marketing_departement_region;
        int total_number_of_households;

        //string Marketing_departement_country; // FOR FURTHER USE


    public:
        Marketing_departement(double budget , string region,string city);
        void Set_Current_budget(double);
        void Set_Start_Budget(double);
        void Set_total_number_of_households(int);
        

        double Get_Current_budget();
        double Get_Start_Budget();
        string Get_Marketing_departement_city();
        string Get_Marketing_departement_region();
        int Get_total_number_of_households();
        
        void print();



        ~Marketing_departement();
        void print();

};
#endif
