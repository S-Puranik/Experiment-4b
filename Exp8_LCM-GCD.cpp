#include <iostream>
using namespace std;

int main() {

    int num1, num2;
    
    cout << "Enter two numbers to get their LCM and GCD: ";
    cout << "\n a: ";
    cin >> num1;
    cout << " b: ";
    cin >> num2;

    int small_number, gcd;

    if(num1> num2){

        small_number = num2;

    }

    else {

        small_number = num1;

    }

    //Finding the Greatest Common Divisor using this loop:

    int i = 1;
    while (i <= small_number) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i; 
        }
        i++;
    }

    // LCM can be found by the Formula: 
    int lcm = (num1 * num2) / gcd;

    cout << "\nThe Greatest Common Divisor (GCD) of " << num1 << " and " << num2 << " is " << gcd;
    cout << "\n\nThe Least Common Multiple (LCM) of " << num1 << " and " << num2 << " is " << lcm;

    return 0;
}
