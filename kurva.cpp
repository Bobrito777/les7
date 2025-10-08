#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "";
    cin >> n;

    switch (n){
        case 1:
        case 3:
            n *= 5;
            break;
        case 2:
        case 4:
            n += 10;
    }
 
