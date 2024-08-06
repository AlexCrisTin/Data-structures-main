#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    long long x;
    cin >> x;
    for (long long i = 2; i <= sqrt(x); i++)
        if (x % i == 0) {
            cout << "khong";
            return 0;
        }
    if(x < 2){
        cout<<"khong";
    }
    else{
        cout<<"co";
    }
    return 0;
}