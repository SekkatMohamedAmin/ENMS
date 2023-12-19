#pragma once

#include <iostream>
#include <functional> // we need this to use std::function
#include <chrono>
#include <utility> // we need this to use std::forward

class FunctionRunner {
public:
    template <typename Func, typename... Args> //this allow me to pass any function with any number of arguments
    double runAndMeasureTime(Func func, Args&&... args){//
        auto start = std::chrono::high_resolution_clock::now();//start the clock

        // Run the provided function with its arguments
        func(std::forward<Args>(args)...);//parsing the arguments using forward 

        auto end = std::chrono::high_resolution_clock::now();//stop the clock after running the function
        std::chrono::duration<double> duration = end - start;//calculate the time it took to run the function

        return duration.count(); // Return the time taken in seconds
    };



};//end of class definition
