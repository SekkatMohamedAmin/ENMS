#pragma once 

#include <chrono>
#include <iostream>


class Counter  {
public:
    Counter();
    // Get the current time point before running the function
    auto start = high_resolution_clock::now();

    // Run the function
    

private:
    // Get the current time point after running the function
    auto stop = high_resolution_clock::now();

    // Calculate the duration (execution time)
    auto duration = duration_cast<microseconds>(stop - start);

};

