#include <stdio.h>

void swap(int* a, int*b){

    int temp=*a;
    *a=*b;
    *b=temp;

}

int main(){

    int k=0;
    int array[1000];
    while(1){
        scanf("%d", &array[k]);
        getchar();
        if(array[k]==0){
            break;
        }
        k++;
    }
    int j=0;

    for(int i=0;i<k;i++){
        j=i;
        while(j>0 && array[j]<array[j-1]){
            swap(&array[j],&array[j-1]);
            j--;
        }
    }

    for(int i=0;i<k;i++){
        printf("%d ", array[i]);
    }

}