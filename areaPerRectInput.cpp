// Copyright (c) 2022 Chris Di Bert All rights reserved.
// .
// Created by: Chris Di Bert
// Date: Sep 22, 2022
// This program calculates the area and perimeter of a
// rectangle when given user input".

#include <iostream>

int main() {
    int length, width;
    int sum;
    std::cout << "Enter the length of the rectangle: " << std::endl;
    std::cin >> length;
    std::cout << "Enter the width of the rectangle: " << std::endl;
    std::cin >> width;
    std::cout << "The perimeter of the rectangle is equal to: "
    << 2 * (length + width) << "cm." << std::endl;
    std::cout << "The area of the rectangle is equal to: "
     << length * width << "cm^2" << std::endl;
}
