#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){
    int tuna = 19;
    int *pTuna = &tuna; //讓pTuna 指向 tuna的位址
    printf("Address \t Name \t Value \n");
    printf("%p \t %s \t %d \n", pTuna, "tuna", tuna);
    printf("%p \t %s \t %d \n", &pTuna, "pTuna", pTuna);


    return 0;
}



/** Output

Address          Name    Value
0060FF0C         tuna    19
0060FF08         pTuna   6356748

**/
