#include <stdio.h>

void imprime(int array[], unsigned long long num){

    for(unsigned long long j=0;j<num;j++){
        printf(".");
            for(int k=0; k<array[j];k++){
                printf("-");
            }
        printf("\n");
    }

}


int main(){
    int N;
    scanf("%d", &N);

    //descobri que n precisa da math.h, tu pode so usar esse operador que move um bit para a esquerda,
    //é a msm coisa da funcao pow da math.h mas nao requer um double
    unsigned long long num = (1ULL << N)-1;
    int array[num]; 

    for(unsigned long long i=0;i<num;i++){
        unsigned long long x=i+1;
        int count=0;
        while((x%2)==0){
            count++;
            x/=2;
        }
        array[i]=count+1;
    }

    imprime(array,num);

    return 0;
}
