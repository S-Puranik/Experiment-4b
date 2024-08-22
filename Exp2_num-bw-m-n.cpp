#include <iostream>
using namespace std;

int main(){
    
    int m, n;
    int sum = 0;
    
    cout<< "Finding sum of all numbers between M and N, such as N > M.\n\n";
    
    cout<< "Enter the value of M: ";
    cin>> m;
    cout<< "Enter the value of N: ";
    cin >> n;
    
    if(n>m){
        
        for(int i=m; i<=n; i++){
            sum = sum + i;
            cout << i << " +";
        }
    cout << "= " << sum;
    }
    else{
        cout<< m << " should not be greater than " << n;
    }
    
    
    return 0;
}
