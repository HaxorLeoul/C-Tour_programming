#include<stdio.h>
void add_to(int s,int inc_val,int vals[]){
    int i;
    for (i =0; i<s; i++)
    vals[i] += inc_val;
}

int main(void){
    int some_ints ={1,2,3,4,6,2,3};
    int i;
     add_to(4,2,some_ints);

}