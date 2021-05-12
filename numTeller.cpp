// Copyright (c) 2021 Liam Csiffary All rights reserved.
//
// Created by: Liam Csiffary
// Date: May 10, 2021
// This program tells the user if their number is +, - or = 0


#include <iostream>

// declares variables
int user_num;

// main function
int main() {
    // ask for number
    std::cout << "\nWhat is your number: ";
    std::cin >> user_num;

    // if num less than 0 it is negative
    if (user_num < 0) {
        std::cout << "Your number is negative\n";
        main();

    // if num less more 0 it is positive
    } else if (user_num > 0) {
        std::cout << "Your number is positive\n";
        main();

    // if num is 0 it is 0
    } else if (user_num == 0) {
        std::cout << "Your number is 0\n";
        main();
    }
}
