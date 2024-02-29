//simple C++ calculator
//coded by arn
#include <iostream>
using namespace std;
int main() {
    //declaring variables
    int input;
    double res;
    double x, y;
    double sum, sub, prod, quot;
    
    //input the first and second value
    cout << "<-- Simple Calculator --> \n";
    cout << "Input the first value: ";
    cin >> x;
    cout << "Input the second value: ";
    cin >> y;
    
    //select the operators
    cout << "<-- Select the operators --> \n";
    cout << "[1] Addition \n";
    cout << "[2] Subtraction \n";
    cout << "[3] Multiplication \n";
    cout << "[4] Division \n";
    
    //conditions:
    //addition
    cout << "Input: ";
    cin >> input;
    if (input == 1) {
        res = (sum = x + y);
    }
    //subtraction
    else if (input == 2) {
        res = (sub = x - y);
    }
    //multiplication
    else if (input == 3) {
        res = (prod = x * y);
    }
    //division
    else if (input == 4) {
        res = (quot = x / y);
    }
    //final result
    cout << "Equal: " << res;
    return 0;
}
