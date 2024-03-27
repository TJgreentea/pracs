#ifndef MUSICIAN_H
#define MUSICIAN_H

#include <string>

class Musician {
private:
    std::string instrument; // Corrected: Now correctly defined as a member variable
    int yearsofexp;         // Corrected: Now correctly defined as a member variable

public:
    Musician(); // Default constructor
    Musician(std::string instrument, int experience); // Parameterized constructor
    std::string get_instrument(); // Getter for the instrument
    int get_yearsofexp(); // Getter for the years of experience
};

#endif // MUSICIAN_H
