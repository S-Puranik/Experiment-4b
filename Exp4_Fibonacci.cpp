#include <iostream>
using namespace std;

int main() {
    
    int sum = 0;
    int n;
    

    cout << "Enter the nth term of the Fibonacci Series: ";
    cin >>  n;

    //Pre-defining the values of the first two terms of the Fibonacci series.

    if (n == 0) {
        cout << "\n\nThe 0th term of the Fibonacci series is 0.";
        return 0;
    }
    if (n == 1) {
        cout << "\n\nThe 1st term of the Fibonacci series is 1.";
        return 0;
    }

    // Now assuming that the user input is 2 or more than 2.
    // Also, putting the values of the first two numbers in a variable and 
    // then adding them as the series progresses: 

    cout << "\n\n\nThe fibonacci series for " << n << " terms is: \n0, 1, ";

    int a = 0, b = 1, c;


    for (int i = 2; i<=n; i++){

        c = a + b; //c acts as a temporary variable to replace the value of a and b.
        cout << c << ", ";
        a = b; 
        b = c;
    }

    return 0;

}
