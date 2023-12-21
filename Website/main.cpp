#include<iostream>
#include<string>
#include "include/crow_all.h"
using namespace std;

int main(){
    crow::SimpleApp app;
    CROW_ROUTE(app, "/")([](){
        return "Hello world";
    });


    app.route_dynamic("/submit")
    .methods("POST"_method)
    ([&](const crow::request& req, crow::response& res) {
        crow::mustache::context ctx;
        
        // Access multiple form data parameters
        auto formData1 = req.url_params.get("param1");
        auto formData2 = req.url_params.get("param2");
        
        // Call function in Customer class
        Customer customer;
        std::string result = "test" );

        // Add the result to the Mustache context
        ctx["result"] = result;

        // Render Mustache template
        auto page = crow::mustache::load("path/to/template.html");
        res.write(page.render(ctx));
        res.end();
    });


    app.port(18080).multithreaded().run();
    return 0;

}