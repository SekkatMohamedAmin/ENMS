#include "functionrunner.h"
#include <iostream>


using namespace std;


// Example usage:
void sampleFunction(int x, int y) {
    cout << "x + y = " << x + y << endl;

}

int main() {

    FunctionRunner functionRunner;

    // Call runAndMeasureTime with the function and its arguments

    double elapsedTime = functionRunner.runAndMeasureTime(sampleFunction, 1000, 1000);

    std::cout << "Elapsed time: " << elapsedTime << " seconds" << std::endl;

    return 0;
}