// Copyright (C) 2020 St. Mother Teresa HS All rights reserved
//
// created by Ryan Nguyen
// Created on December 2020
// This program uses a function to convert
//     degrees celsius to fahrenheit


#include <iostream>
#include <string>
#include <iomanip>

void Fahrenheit() {
    // this function converts degrees celsius to fahrenheit
    float tempFahrenheit;


    std::string tempCelsiusAsString;
    float tempCelsiusAsNumber;

    // input
    std::cout << "Enter temperature in degrees celsius: ";
    std::cin >> tempCelsiusAsString;

    // process + output
    try {
        tempCelsiusAsNumber = std::stoi(tempCelsiusAsString);
        tempFahrenheit = (tempCelsiusAsNumber * 9) / 5 + 32;
    } catch (std::invalid_argument) {
        std::cout << "Invalid integer" << std::endl;
        }
    std::cout << tempCelsiusAsNumber << "°C = " << std::fixed
              << std::setprecision(1) << std::setfill('0')
              << tempFahrenheit << "°F" << std::endl;
}

main() {
    // this function calls the fahrenheit function
    Fahrenheit();
}
