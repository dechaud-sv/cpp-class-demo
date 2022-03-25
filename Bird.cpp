// Sophia DeChaud
// CSCE306, Spring 2022
// Lab 10, Bird class file Bird.cpp

// Bird class file for lab 10 GitHub demo

#include "Bird.h"
using namespace std;
#include <string>
#include <iostream>

    Bird::Bird(string species)
    : bird_type{species}
    {}
    int Bird::get_seeds() {
        return this->seeds;
    }
