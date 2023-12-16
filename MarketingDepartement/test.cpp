// puprose: test the Marketing_departement class to help debuging when the project gets bigger

#include "Marketing_departement.h"
#include <iostream>

using namespace std;

int main(){
    Marketing_departement m1(1000,"algiers","zeralda");
    Marketing_departement m2(m1);
    m1.print();
    m2.print();
    m1.Set_Current_budget(10000000);
    m1.Set_Start_Budget(10000000);
    m1.Set_total_number_of_households(100);
    m1.print();
    m2.print();
    return 0;
}