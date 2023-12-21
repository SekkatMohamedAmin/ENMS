#include<iostream>
#include<string>
#include "include/crow_all.h"
using namespace std;

int main(){
    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });
    app.port(18080).multithreaded().run();
    return 0;

}