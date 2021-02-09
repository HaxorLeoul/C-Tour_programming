#include<stdio.h>

int main(){
    int i=0,j;
    while(i<5){
        //implementing nested
        j=0; //initiate and declare
        while (j<3)
        {
            printf("2 ");
            j++;
        }
        
        printf("\n");
        i++;
    }
    return 0;
}