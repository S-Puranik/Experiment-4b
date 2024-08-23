#include <iostream>
#include <cmath>
using namespace std;

int main(){
    
    int n;
    
    cout<< "Enter a number to check if its Armstrong or not: ";
    cin>> n;

    //First we have to convert the number to string to
    // get the length of the string using
    // length() function.

    string num;
    num = to_string(n);

    int power = num.length();

    //Now we can add each number in the string with their power being the length of the string.

    int a;
    int sum = 0;

    for(int i = 0; i<power; i++){
        
        a = num[i]-'0';
        sum += pow(a, power);
        
    }

    if (sum == n){

        cout << n << " is an Armstrong number.";

    }
    else {

        cout << n << " is not an Armstrong number.";

    }

    return 0;
}
