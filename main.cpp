#include <iostream>
#include "Musician.h" // Include the corrected Musician class definition

int main() {
    // Creating a Musician object with the default constructor
    Musician musician1;
    std::cout << "Musician 1 plays the " << musician1.get_instrument()
              << " with " << musician1.get_yearsofexp() << " years of experience." << std::endl;

    // Creating a Musician object with the parameterized constructor
    Musician musician2("Guitar", 5);
    std::cout << "Musician 2 plays the " << musician2.get_instrument()
              << " with " << musician2.get_yearsofexp() << " years of experience." << std::endl;

    return 0;
}
