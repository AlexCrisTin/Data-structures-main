#include <stdio.h>

void selectSort(int array[], int n){
    for(int i = 0 ; i < n - 1; i++){
        int pivot = i;
        for(int j = i + 1; j < n;j++){
            if(array[j]<array[pivot]){
                pivot = j;
            }
        }
        int temp = array[pivot];
        array[pivot]= array[i];
        array[i]= temp;
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int array[n];
    for(int i =0;i<n;i++){
        scanf("%d", &array[i]);
    }
    selectSort(array, n);
    for(int i= 0 ;i < n;i++){
        printf("%d ", array[i]);
    }
}