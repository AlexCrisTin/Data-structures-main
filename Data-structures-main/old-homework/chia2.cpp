#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

   long long count = 0;

    for(int  i = 0; i <= n; i++){
        count += i;
    }
        cout<<count;
    
    return 0;
}