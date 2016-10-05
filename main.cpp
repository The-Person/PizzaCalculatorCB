#include <iostream>
#include <string>
#include <cmath>
using namespace std;
int main() {
    float Slices;
    float People;
    float SlicesPerson;
    float TotalSlices;
    float Boxes;
    float BoxCost;
    float TotalCost;
    float PersonalCost;

    std::cout << "How many slices per pizza?" << std::endl;
        std::cin >> Slices;

    std::cout << "How many people?" << std::endl;
        std::cin >> People;

    std::cout << "How many slices per person?" << std::endl;
        std::cin >> SlicesPerson;

        TotalSlices = SlicesPerson * People;
        Boxes = TotalSlices / Slices;

    std::cout << "What is the cost per box?" << std::endl;
        std::cin >> BoxCost;

        std::cout << "If there are " << Slices << " slices per pizza, and I am feeding " << People << " people, then I will need " << Boxes << " boxes." << std::endl;

        TotalCost = BoxCost * Boxes;

    std::cout << "The total cost of all the pizza is $" << TotalCost << " ." << std::endl;

        PersonalCost = TotalCost / People;

    std::cout << "If there are " << People << " people and all the pizza costs $" << TotalCost << ", then the cost per person is $" << PersonalCost << "." << std::endl;
    std::cout << "Than you for using Pizza Calculator!" << std::endl;
}
