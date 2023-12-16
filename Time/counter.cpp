#include <iostream>
#include "counter.h"

using namespace std;

Counter::Counter() {
}

Counter::~Counter() {
}
//create a function that runs the function inside it and returns the time it took to run the function
void Counter::Start() {
    // Get the current time point before running the function
    start = high_resolution_clock::now();
}

double Counter::End() {
    // Get the current time point after running the function
    stop = high_resolution_clock::now();

    // Calculate the duration (execution time)
    auto duration = duration_cast<microseconds>(stop - start);

    // Print the duration (execution time)
     return duration.count() 
}
