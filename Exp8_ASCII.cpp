#include <iostream>
using namespace std;

int main(){

    for(int i = 65; i <= 122; i++){

        char character = (char)i;

        if (i>= 91 && i<= 96){
            continue;
        }
        cout << character << " ";

    }
    return 0;
}
