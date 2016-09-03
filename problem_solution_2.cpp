//
//  problem_solution_2.cpp
//  AssignmentNo1
//
//  ******** problem_solution_2.cpp **********
//
//  Created by Asif Raza on 03/09/2016.
//  Copyright © 2016 Asif Raza. All rights reserved.
//
//  Note: uncomments the lines and commenect the auto generated random number lines if want to user INPUT;
//

#include "problemsolutions.hpp"

void problem2(){
    int const SIZE_OF_ARRAY = 20;       // size of array
    int const LIMIT_OF_RANDOM = 40;     // Limit of random value
    int randValue = 0;                  // random values
    int array[SIZE_OF_ARRAY];           // Array with length of 20
    
    // Loop is depends on the size of array
    for (int i = 0; i < SIZE_OF_ARRAY; i++) {
        randValue = rand() % LIMIT_OF_RANDOM;
        // std::cout << "Enter an number at index " << i;
        // std::cin >> array[i];
        std::cout << "Auto Generated Number at index " << i << " :" << randValue << std::endl;
        array[i] = randValue;
        
        // Tested while not legal entery found
        while (array[i] <= 1 || array[i] >= 20) {
            
            // std::cout << "Enter an number at index " << i;
            // std::cin >> array[i];
            randValue = rand() % LIMIT_OF_RANDOM;
            std::cout << "Auto Generated Number at index " << i << " :" << randValue << std::endl;
            array[i] = randValue;
        }
    }
    
    
    // Prints the OUTPUT_OF_THE_PROBLEM
    std::cout << std::endl << "The Result is :" << std::endl;
    
    for (int i = 0; i < SIZE_OF_ARRAY; i++) {
        std::cout << array[i] << " ,";
    }
    
    std::cout << std::endl;
}