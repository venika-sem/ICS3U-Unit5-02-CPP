// Copyright(c) 2022 Venika Sem All rights reserved.
//
// Created by : Venika Sem
// Created on : Nov 2022
// This program finds are of triangle

#include <iostream>

void CalculateArea(float base, float height) {
    // calculate area
    float area;

    // process
    area = (base * height) / 2;

    // output
    std::cout << "The area of the triangle is " << area << "cm^2" << std::endl;
}


main() {
    // this function gets base and height

    int baseFromUser;
    int heightFromUser;

    // input
    try {
       std::cout << "Enter the base of a rectangle (cm): ";
       std::cin >> baseFromUser;
       std::cout << "Enter the height of a rectangle (cm): ";
       std::cin >> heightFromUser;
    CalculateArea(baseFromUser, heightFromUser);
    }
}
