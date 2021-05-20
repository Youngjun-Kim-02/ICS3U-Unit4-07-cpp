// Copyright (c) 2021 Youngjun Kim rights reserved
//
// Created by: Youngjun Kim
// Created on: May 2021
// This program uses a loop and an if statement

#include <iostream>

int main() {
    // this function uses a loop ans an if statement
    int counter;
    for (counter = 1000; counter < 2001; counter++) {
        if (counter % 5 != 4) {
            std::cout << counter << " ";
        } else {
            std::cout << counter << std::endl;
        }
    }
}
