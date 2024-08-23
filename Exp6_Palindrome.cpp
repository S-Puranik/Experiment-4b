#include <iostream>
using namespace std;

int main() {

    int number;

    cout << "Enter a number to check if it is a palindrome or not: ";
    cin >> number;

    // Reversing the number: 
    // Getting the last digit and then reversing the number using it.
    
    int original = number; 
    int reverse = 0;
    
    while (number > 0) {

        int last_digit;
        last_digit = number % 10; 
        reverse = reverse * 10 + last_digit; 
        number = number / 10; 

    }

    // If the reversed number is equal to the entered number,
    // Then the given number was a palindrome.

    if (reverse == original) {
        
        cout << original << " is a palindrome.";

    } 
    
    else {

        cout << original << " is not a palindrome.";

    }

    return 0;
}
