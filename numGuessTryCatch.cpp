// Copyright (c) 2026 Kamche All rights reserved.
// .
// Created by: Your Kamche
// Date: Oct 21, 2026
// This program ask the  a valid integer and
// casting the string into a integer
// by guessing the user guess is valid or not
#include <iostream>
#include <string>
#include <random>

int main() {
    // declare integer to hold random number
    int randomNumber;

    // set up the random number generator
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<int> dist(0, 9);
    randomNumber = dist(gen);

    // get the user guess number
    std::string userGuessStr;
    std::cout << "\n";
    std::cout << "Enter your guess number between (0 and 9) :";
    std::cin >> userGuessStr;

    // cast the string into an integer and check if it is right
    try {
    // cast the user guess to an integer
    int userGuessInt = std::stoi(userGuessStr);

    // check if user guess is correct
    if (userGuessInt == randomNumber) {
        std::cout << "you guessed correctly!!";
    } else {
        std::cout << "you guessed wrong!!" << std::endl;
        std::cout << "The correct answer is :"
    << randomNumber << std::endl;
    }
    } catch (std::invalid_argument) {
        std::cout << userGuessStr << "is not an integer";
        std::cout << "\n";
    }
    // Add the finally statement
    std::cout << "THANKS FOR PLAYING" << std::endl;
    std::cout << "\n";
}
