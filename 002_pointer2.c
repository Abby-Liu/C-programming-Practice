#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>

int main(){
    int i;
    int meatBalls[5] = {7,9,43,21,3};

    //Show the address of the arrays
    for(i=0; i<5; i++){
        printf("meatBalls[%d] \t %p \t %d \n", i, &meatBalls[i], meatBalls[i]);
    }

    //Array names are just pointers to the first element
    printf("\nmeatBalls \t\t %p \n", meatBalls);
    printf("\n&meatBalls \t\t %p \n", &meatBalls);
    //Dereference
    printf("\n*meatBalls \t\t %d \n", *meatBalls);
    printf("\n*(meatBalls+2) \t\t %d \n", *(meatBalls+2));


    return 0;
}



/** Output
meatBalls[0]     0060FEF8        7
meatBalls[1]     0060FEFC        9
meatBalls[2]     0060FF00        43
meatBalls[3]     0060FF04        21
meatBalls[4]     0060FF08        3

meatBalls                0060FEF8

&meatBalls               0060FEF8

*meatBalls               7

*(meatBalls+2)           43
**/
