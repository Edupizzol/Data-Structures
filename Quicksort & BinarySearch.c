#include <stdio.h>

void swap(int* a, int *b){

    int temp = *a;
    *a=*b;
    *b=temp;

}

void quicksort(int array[], int low, int high, int posicoes[]){

    if(low>=high){
        return;
    }

    int pivot = array[high],j=low;

    for(int i=low;i<=high;i++){
        if(array[i]<pivot){
            swap(&array[i],&array[j]);
            swap(&posicoes[i],&posicoes[j]);
            j++;
        }
    }
    swap(&array[high],&array[j]);
    swap(&posicoes[high],&posicoes[j]);

    int middle=j;

    quicksort(array,low,middle-1,posicoes);
    quicksort(array,middle+1,high,posicoes);

}

int binarysearch(int array[], int low, int high, int target){

    int middle = (low+high)/2;

    if(low>high){
        return -1;
    }
    else{
        if(array[middle]==target){
            return middle;
        }
        else if(array[middle]<target){
            binarysearch(array,middle+1,high,target);
        }
        else if(array[middle]>target){
            binarysearch(array,low,middle-1,target);
        }
    }

}

int main(){

    int M,N,target;

    scanf("%d %d",&N, &M);
    getchar();

    int array[N],posicoes[N];

    for(int i=0;i<N;i++){
        scanf("%d", &array[i]);
        posicoes[i]=i;
    }

    quicksort(array,0,N-1,posicoes);

    /*for(int i=0;i<N;i++){
        printf("%d ", array[i]);
    }*/

    for(int i=0;i<M;i++){

        scanf("%d", &target);
        getchar();
        if(binarysearch(array,0,N-1,target)!=-1){
            printf("%d\n", posicoes[binarysearch(array,0,N-1,target)]);
        }
        else{
            printf("-1\n");
        }
        
    }
    
    return 0;

}

//8,7,6,9,5,4,2,1,3