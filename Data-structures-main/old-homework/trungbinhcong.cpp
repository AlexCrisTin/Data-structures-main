#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n;
    cin>>n;

    int m;
    int count;

    for(int i = 0; i < n; i++)  {
        cin>>m;
        count += m;
    }
    double trungbinh = static_cast<double> (count) / n;
    cout<<fixed<<setprecision(3);
    cout<<trungbinh;
    
    return 0;
    }