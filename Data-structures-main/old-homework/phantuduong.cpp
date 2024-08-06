#include <iostream>

using namespace std;

int main(){
    int n;
    cin>>n;

    int array[n];
    int count;

    for(int i = 0; i < n; i++){
        cin>>array[i];
        if(array[i]>0){
            count++;
        }
    }

    
    if(count == 0){
        cout<<"Day so khong co phan tu duong";}
    else {
        cout<<count<<endl;
        for(int i = 0; i < n;i++){
        if(array[i] > 0){
        cout<<array[i]<<" ";
        }
    }
    
    } 

    return 0;
}