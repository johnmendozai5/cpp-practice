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
    } else{
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

    double tax;

    if(status == 1){
        if(taxable_income<= 10000){
            tax = taxable_income * 0.10;
        } else if(taxable_income <= 40000){
            tax = 1000 + (taxable_income - 10000) * 0.12;
        } else if(taxable_income <= 85000){
            tax = 4600 + (taxable_income - 40000) * 0.22;
        } else {
            tax = 14500 + (taxable_income - 85000) * 0.24;
        }
    } else {
        if(taxable_income <= 20000){
            tax = taxable_income * 0.10;
        } else if(taxable_income <= 80000){
            tax = 2000 + (taxable_income - 20000) * 0.12;
        } else {
            tax = 9200 + (taxable_income - 80000) * 0.22;
        }

}
tax = round(tax);
    std::cout << "Federal tax: $" << tax << std::endl;

double tax_due = tax - withheld;
if(tax_due >= 0){
    std::cout << "Tax due: $" << tax_due << std::endl;
} else {
    std::cout << "Tax refund: $" << -tax_due << std::endl;
}
        
    
}

}