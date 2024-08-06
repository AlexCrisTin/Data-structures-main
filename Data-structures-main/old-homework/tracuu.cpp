#include <iostream>
using namespace std;

int main() {
    int n,x;
    cin >> n >> x;

    int slot[n], num[x];
    for(int i = 0; i < n; i++){
        cin>>slot[i]>>num[i];
    }
if(x == num[x]){
    cout<<slot[n];
}


    return 0;
}