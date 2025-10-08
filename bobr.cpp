#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double A, B, C, Bobik;
    cout << "Ведіть А: ";
    cin >> A;
    cout << "Ведіть В: ";
    cin >> B;

    if (A > B) 
        {
       Bobik = A - B;
       cout << "А - В = ";
        }
    else
        {
        Bobik = A + B;
        cout << "А + В = ";
        }
    cout << Bobik << endl;
return 0;
}
