#include<stdio.h>
int factorial(int n){
    int retval = 1;
    while(n != 1){
        retval *= n--;
    }
    return retval;
}
int main (void){
    int val = factorial(5);
    printf("%d!= %d \n",6,factorial(6));

    printf("%d!= %d \n",5,val);
    printf("%d!= %d \n",4,factorial(4));
    printf("%d!= %d \n",2,factorial(2));
    printf("%d!= %d \n",3,factorial(3));




}