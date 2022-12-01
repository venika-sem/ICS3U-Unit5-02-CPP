// Copyright(c) 2022 Venika Sem All rights reserved.
//
// Created by : Venika Sem
// Created on : Nov 2022
// This program finds are of triangle

#include <iostream>

void CalculationOfArea(int base, int height) {
    // This function calculates the area of the triangle
    int area;

    // Process
    area = (base * height) / 2;

    // Output
    std::cout << "The area  is " << area << " cm²." << std::endl;
}

int main() {
    // This function gets user input and call functions
    std::string base_from_user;
    std::string height_from_user;
    int base;
    int height;

    // Input
    std::cout << "Enter the base length of a triangle (cm): ";
    std::cin >> base_from_user;
    std::cout << "Enter the height of a triangle (cm): ";
    std::cin >> height_from_user;
    std::cout << std::endl;
    // try and catch
    try {
        base = std::stoi(base_from_user);
        height = std::stoi(height_from_user);
        CalculationOfArea(base, height);
    } catch (std::invalid_argument) {
        std::cout << "Invalid Input." << std::endl;
    }
    std::cout << "\nDone." << std::endl;
}
