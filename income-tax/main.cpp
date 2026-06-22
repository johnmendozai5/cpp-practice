#include <iostream>
#include <cmath>

int main(){
    int wages, interest, unemployment, status, withheld, deduction;

    // read the five integers
    std::cin >> wages >> interest >> unemployment >> status >> withheld;

    // compute AGI
    int gross_income = (wages + interest + unemployment);

    // print AGI
    std::cout << "AGI: $" << gross_income << std::endl;


    // if AGI > 120k, print the error line

    if(gross_income > 120000){
        std::cout << "Error: Income too high to use this form" << std::endl;
    }else{
        if(status != 2){ status = 1; }
    // output deduction and taxable income
    if(status == 1){
        deduction = 12000;
    } else{
        deduction = 24000;
    }

    // clamp to zero if negative
    int taxable_income = gross_income - deduction;

    if(taxable_income < 0){
        taxable_income = 0;
    }

    // print deduction
    std::cout << "Deduction: $" << deduction << std::endl;
    // print taxable income
    std::cout << "Taxable income: $" << taxable_income << std::endl;
}

}
