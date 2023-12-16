// Purpose: Source file for Marketing_departement class
#include "Marketing_departement.h"
#include <iostream>
#include <string>

using namespace std;


Marketing_departement::Marketing_departement(Marketing_departement &obj)
{
    Current_budget = obj.Current_budget;
    Budget_spent = obj.Budget_spent;
    Start_Budget = obj.Start_Budget;
    Marketing_departement_city = obj.Marketing_departement_city;
    Marketing_departement_region = obj.Marketing_departement_region;
    total_number_of_households = obj.total_number_of_households;
}

Marketing_departement::Marketing_departement(double budget , string region,string city)
{
    Current_budget = budget;
    Budget_spent = 0;
    Start_Budget = budget;
    Marketing_departement_city = city;
    Marketing_departement_region = region;
    total_number_of_households = 0;
}

void Marketing_departement::Set_Current_budget(double budget)
{
    Current_budget = budget;
}

void Marketing_departement::Set_Start_Budget(double budget)
{
    Start_Budget = budget;
}

void Marketing_departement::Set_total_number_of_households(int number)
{
    total_number_of_households = number;
}

double Marketing_departement::Get_Current_budget()
{
    return Current_budget;
}

double Marketing_departement::Get_Start_Budget()
{
    return Start_Budget;
}

string Marketing_departement::Get_Marketing_departement_city()
{
    return Marketing_departement_city;
}

string Marketing_departement::Get_Marketing_departement_region()
{
    return Marketing_departement_region;
}

int Marketing_departement::Get_total_number_of_households()
{
    return total_number_of_households;
}

Marketing_departement::~Marketing_departement()
{
    cout << "Marketing_departement for the city : " << Marketing_departement_city<<" is being deleted" << endl;
}
void Marketing_departement::print()
{
    cout << "Marketing_departement for the city : " << Marketing_departement_city << endl;
    cout << "Marketing_departement for the region : " << Marketing_departement_region << endl;
    cout << "Current budget : " << Current_budget << endl;
    cout << "Budget spent : " << Budget_spent << endl;
    cout << "Start budget : " << Start_Budget << endl;
    cout << "Total number of households : " << total_number_of_households << endl;
}
