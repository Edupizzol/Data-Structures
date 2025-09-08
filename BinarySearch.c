#include <stdio.h>

int binarysearch(int array[],int target, int low, int high){

    int middle = (high+low)/2;
    if(low>high){
        return low;
    }
    else{
        if(array[middle]==target){
            return middle;
        }
        else if(array[middle]>target){
            binarysearch(array,target,low,middle-1);
        }
        else if(array[middle]<target){
            binarysearch(array,target,middle+1,high);
        }
    }

}

int main(){

    int M,N,target;
    scanf("%d %d", &M, &N);
    int array[M];
    for(int i=0;i<M;i++){
        scanf("%d", &array[i]);
        getchar();
    }
    for(int i=0;i<N;i++){
        scanf("%d", &target);
        getchar();
        printf("%d\n", binarysearch(array,target,0,M-1));
    }

    return 0;

}

//              7,8,09,10
//0,1,2,3,4,5,6,8,9,11,13=>6