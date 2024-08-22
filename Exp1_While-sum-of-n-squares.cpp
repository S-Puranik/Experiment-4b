#include <iostream>
using namespace std;

int main() {
    
    int n;
    int sum = 0;
    int i = 1;
    
    cout << "Enter a number N: ";
    cin >> n;
    cout << "The sum of ";
    while(i<=n){
        sum = sum + (i*i);
        cout<< " "<< i << "² + ";
        i++;
    }
    cout<< "= " << sum;
    

    return 0;
}
