// Sophia DeChaud
// CSCE306, Spring 2022
// Lab 10, main.cpp

// Main driver for demo for lab 10

#include <string>
#include <iostream>
using namespace std;
#include "Bird.h"


int main() {
    cout << "Tweet Tweet, chirp" << endl;

    Bird robin("Robin");
    cout << robin.get_seeds() << endl;

    return 0;
}

