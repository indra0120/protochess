#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Binary to Decimal Converter
int main(){
    int n, i, buff=8;
    int* bin = malloc(buff * sizeof(int));

    printf("Give me a number: ");
    scanf("%d", &n);
    clock_t start=clock();

    if(n == 0){
        printf("Your number is: 0");
        return 0;
    }

    if(bin == NULL || n<0){
        printf("Errolf!!\nPlease retry, and check that you wrote a positive integer.");
        return 0;
    }
    
    for(; n>0;){
        if(i==buff){
            buff+=8;
            bin = realloc(bin, buff * sizeof(int));
        }
        bin[i++]=n%2;
        n=n/2;
    }

    printf("Your number is: ");
    for(i--; i>-1; i--){
        printf("%d", bin[i]);
    }
    free(bin);

    printf("\n\nTime taken: %f", ((double)clock()-start)/CLOCKS_PER_SEC);

    return 0;
}

int main1(){
    //Metodo noioso
    int n, i=0, bin[8];
    printf("Give me a number (Max 255): ");
    scanf("%d", &n);
    printf("Your number is: ");
    for(i=7; i>=8; i--){
        bin[i]=n%2;
        n=n/2;
    }

    for(i=0; i<8; i++){
        printf("%d", bin[i]);
    }

    return 0;
}