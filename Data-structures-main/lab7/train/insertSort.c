#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i = 0 ; i <n;i++){
        scanf("%d", &array[i]);
    }

    for(int i = 1; i< n; i++){
        int pivot = array[i];
        int j = i - 1;
        while(j >= 0 && array[j] > pivot){
            array[j+1]=array[j];
            j = j - 1;
        }
        array[j + 1] = pivot;
    }
    for(int i = 0 ;i<n;i++){
        printf("%d ", array[i]);
    }
}