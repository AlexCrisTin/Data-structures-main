#include <stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int array[n];
    for(int i = 0; i<n; i++){
        scanf("%d", &array[i]);
    }
    int temp;
    for(int i = 0; i < n - 1;i++){
        for(int j = 0; j < n - 1 - i;j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    for(int i =0; i < n;i++){
        printf("%d ", array[i]);
    }
}