#include <iostream>
#include <cmath>

int main(){
    int wages, interest, unemployment, status, withheld;

    // read the five integers
    std::cin >> wages >> interest >> unemployment >> status >> withheld;

    // compute AGI
    int gross_income = (wages + interest + unemployment);

    // print AGI
    std::cout << "AGI: $" << gross_income << std::endl;

    // if AGI > 120k, print the error line

    if(gross_income > 120000){
        std::cout << "Error: Income too high to use this form" << std::endl;
    }

}