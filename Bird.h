// Sophia DeChaud
// CSCE306, Spring 2022
// Lab 10, Bird class file Bird.h

// Bird class file for lab 10 GitHub demo

#ifndef GIT_DEMO_BIRD_H
#define GIT_DEMO_BIRD_H
using namespace std;
#include <string>

class Bird {
public:
    Bird(string);
    int get_seeds();

private:
    int seeds = 10;
    int nuts = 2;
    string bird_type;
};


#endif //GIT_DEMO_BIRD_H
