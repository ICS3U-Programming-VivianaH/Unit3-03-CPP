// Copyright 2025 Viviana Hurtado
// Created by Viviana Hurtado
// March 25, 2025
// This program asks the user to guess a number between 0 and 9.
#include <cstdlib>
#include <ctime>
#include <iostream>

int main() {
    // declare integer
    int someRandomNumber;

    // random seed
    srand((unsigned)time(NULL));

    // Get random number between 0 and 9
    unsigned int seed = time(NULL);  // Added seed
    someRandomNumber = rand_r(&seed) % 10;

    int userGuess;
    std::cout << "Enter a number between 0 and 9: ";
    std::cin >> userGuess;

    if (userGuess == someRandomNumber) {
        std::cout << "You guessed correctly!" << std::endl;
    } else {
        std::cout << "You guessed wrong." << std::endl;
        std::cout << "The correct one was: " << someRandomNumber << std::endl;
    }

    return 0;
}
