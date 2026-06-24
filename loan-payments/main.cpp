#include <iostream>

int main(){

    // reads - loan ammount, payment amount, interest rate
    double loan_ammount,payment_ammount, interest_rate;
    int payments_required = 0;

    std::cin >> loan_ammount >> payment_ammount >> interest_rate;

    // interest is added to balance before a payment is applied
    while (loan_ammount > 0){

        // add interest
        loan_ammount += loan_ammount * interest_rate; 
        // subtract payment
        loan_ammount -= payment_ammount;
        //cout++
        payments_required++;
    }

    // outputs the numbe of payments needed until the loan is paid
    if(payments_required > 1){std::cout << payments_required << " payments" << std::endl;}
    
    else{std::cout << payments_required << " payment" << std::endl;}
}
