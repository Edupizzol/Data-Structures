#include <stdio.h>

void swap(int*a, int*b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

void While(int* v, int i){

    if(i<=0){
        return;
    }
    if(*(v)>*(v+1)){
        swap(v,v+1);
    }
    While(v+1,i-1);

}

void ordena(int *v, int n){

    int i=n-1;
    if(n<=1){
        return;
    }
    While(v,n-1);
    ordena(v,n-1);

}

/*int main(){

    int array[9]={8,2,4,7,1,3,2,6,5};
    int n=9;

    ordena(array,n);

    for(int i=0;i<n;i++){
        printf("%d ", array[i]);
    }

    return 0;

}*/