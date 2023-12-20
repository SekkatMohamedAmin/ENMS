#include<iostream>
#include "include/crow.h"

using namespace std ;

int main(){
    crow::SimpleApp app;
    //end point application
    CROW_ROUTE(app, "/")([](){
        auto page = crow::mustache::load_text("index.html");
        return page;

        });
            CROW_ROUTE(app, "/chart")
        ([](){
            // Read the chart image file
            std::ifstream ifs("path/to/your/chart.png", std::ios::binary);
            std::vector<char> buffer((std::istreambuf_iterator<char>(ifs)), std::istreambuf_iterator<char>());

            // Set the response content type
            crow::response res(200, crow::response::body{buffer});
            res.add_header("Content-Type", "image/png");

            return res;
        });
    app.port(7770).multithreaded().run();
    
    
}
