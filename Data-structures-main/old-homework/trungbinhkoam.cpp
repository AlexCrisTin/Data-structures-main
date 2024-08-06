#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin>>n;

    int x[n], y[n];

    int tich;

    for(int i = 0; i < n; i++){
        cin>>x[i];
    }
    for(int i = 0; i < n; i++){
        cin>>y[i];
    }
    for(int i = 0; i < n; i++){
        tich += x[i]*y[i];
    }
    cout<<tich;
    return 0;
}
