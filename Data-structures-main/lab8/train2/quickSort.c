#include<stdio.h>
void quick(int array[], int lb, int up){
    int p = array[(lb+up)/2];
    int i = lb, j = up;
    while(i <j){
        while(array[i]<p){
            i++;
        }
        while(array[j]>p){
            j--;
        }
        if(i <= j){
            int temp = array[j];
            array[j]=array[i];
            array[i]= temp;
            i++;
            j--;
        }
    }
    if(i<up){
        quick(array, i,up);
    }
    if(j>lb){
        quick(array, lb,j);
    }
}
int main(){
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i = 0 ; i < n ;i++){
        scanf("%d", &array[i]);
    }
    quick(array, 0 ,n-1);
    for(int i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
}