#include<iostream>
#include "include/crow.h"

using namespace std ;

int main(){
    crow::SimpleApp app;
    //end point application
    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("fancypage.html");
        return page;

        });
    app.port(7770).multithreaded().run();
    
    
}
