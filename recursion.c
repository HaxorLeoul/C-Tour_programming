#include<stdio.h>
int factorial(int s){
    int retval = 1;
    if(s != 1){
        //retval *=s--; replace this with recursion by calling/invoking self function
        retval = s * factorial(s-1);
    }
    return retval;
}
int main (){
    int val = factorial(5);
    printf("%d!=%d\n",5,val);
    printf("%d!=%d\n",7,factorial(7));


}