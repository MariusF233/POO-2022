#include <stdio.h>
#include <iostream>
//#include "Templates.h"
using namespace std;

int operator""_Kelvin(unsigned long long  int x) {

    int value = 273.15;
    x = x-value;
    return x;

};

int operator""_Fahrenheit(unsigned long long int x) {
    x = (x - 32) / 1.8;
    return x;
};

 int main() {

  float a = 300_Kelvin;

  float b = 120_Fahrenheit;

  return 0;

}