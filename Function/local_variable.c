#include<stdio.h>
#include<string.h>
void albert(char* name){
    int i = strlen(name);
    printf("%s contains of %d chars!\n",name,i);
}
int einstein(char* name){
    int i = strlen(name);
    albert(name);
    return(1);
}

int main(int argc,char* argv[]){
    int y = einstein("brainfood");
    printf("einstein has IQ=%d\n",y);
}