#include <iostream>
//// Arthur: Edward Lam
//// Date: Jan 12 2021
//// Version: 1.0
//// Description:  for calculating number of base number with exponentiation
///                 and rounded down log of provided base and expected number.


// Function:      power
// Purpose:       computes num to the exp power
// Parameters:  The number – num, and the exponent – exp
// Returns:       0 if exp is negative; 1 if exp is 0; raise num to the exp
//                      power otherwise.
int power(int num, int exp){
    if(exp < 0) return 0;           //0 if exp is negative
    else if(exp == 0) return 1;     //1 if exp is 0
    else{
        int result = 1;
        //raise num to the exp
        for(int i = 0; i < exp; i++){
            result *= num;
        }
        return result;
    }
}

// Function:      myLog
// Purpose:       computes the logarithm of a number with a given base
// Parameters:    The base number – base, and the given number - num
// Returns:       int of exponent, exponent will be rounded down if pwr of base is not a match to given num
int myLog(int base, int num){
    int pwr = 0;
    while(power(base,pwr) <= num){
        pwr++;
    }
    //round down
    pwr -= 1;
    return pwr;
}

// Function:    printResult
// Purpose:     print power and myLog methods in formatted output
// Returns:     0 if printResult runs properly
int printResult(){
    //instantiate necessary variables
    int exp, base, result;

    // gather base and exponent for power base
    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter an exponent: ";
    std::cin >> exp;
    std::cout << base << " to the " << exp << " is " << power(base,exp) << "\n" << std::endl;

    // gather base and number to calculate power
    std::cout << "Enter a base: ";
    std::cin >> base;
    std::cout << "Enter a number: ";
    std::cin >> result;
    std::cout << "Log of " << result << " in base " << base << " is " << myLog(base,result) << std::endl;
    return 0;
}

int main() {
    printResult();
    return 0;
}
