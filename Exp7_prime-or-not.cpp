#include <iostream>
using namespace std;

int main(){

    int num;

    cout << "Enter a number to check if its prime or not: ";
    cin >> num;

    //Numbers less than 2 are not prime numbers.

    if(num<2){

        cout << "The number " << num << " is not a prime number.";

    }
    else {

        for(int i=2; i<num; i++){

            if (num % i == 0){
                cout << "The number "<< num << " is not a prime number";
                break;
            }
            if (num % i != 0){
                cout << "The number "<< num << " is a prime number";
                break;
            }
        }

    }

    return 0;
}
