// Copyright (c) 2019 St. Mother Teresa HS All rights reserved.
//
// Created by: Wenda Zhao
// Created on: Nov 2020
// This program guessing random number

#include <iostream>
#include <random>


int main() {
    // this fuction is random number guessing

    int someRandomNumber;
    int your_number;
    std::random_device rseed;
    std::mt19937 rgen(rseed());  // mersenne_twister
    std::uniform_int_distribution<int> idist(0, 9);  // [0, 9]
    someRandomNumber = idist(rgen);

    // input
    std::cout << "Enter your number: ";
    std::cin >> your_number;

    // process
    if (your_number == someRandomNumber) {
        // output
        std::cout << "Correct!";
    } else {
        std::cout << "Wrong! someRandomNumber = "
        << someRandomNumber << std::endl;;
    }
}
