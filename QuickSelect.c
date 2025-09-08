#include <stdio.h>

void swap(int* a, int *b){

    int temp = *a;
    *a = *b;
    *b = temp;

}

int partition(int array[], int low, int high){

    int j=low-1,pivot=array[high];

    for(int i=low;i<=high;i++){
        if(array[i]<pivot){
            j++;
            swap(&array[j],&array[i]);
        }
    }
    swap(&array[j+1],&array[high]);

    return j+1;

}

int quickselect(int array[], int low, int high, int order){

    int j = partition(array,low,high);

    if(low>high){
        return -1;
    }
    else{
        if(j==order-1){
            return array[j];
        }
        else if(j<order-1){
            quickselect(array,j+1,high,order);
        }
        else if(j>order-1){
            quickselect(array,low,j-1,order);
        }
    }
}

int main(){

    int array[9] = {6,4,2,3,8,1,7,9,5};
    printf("%d", quickselect(array,0,8,9));

    return 0;

}