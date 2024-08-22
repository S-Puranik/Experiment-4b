#include <iostream>
using namespace std;

int main(){
    
    int n;
    int i = 1;
    int sum = 0;
    
    cout<< "Enter a number: ";
    cin>> n;
    
    do{
        sum = sum + i;
        i++;
    }
    while (i<=n);
    
    cout<< "The sum of all numbers till " << n << " is " << sum;
    
    return 0;
}
