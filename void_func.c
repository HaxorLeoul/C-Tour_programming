#include<stdio.h>
void printHello(char* name){
    printf("Hello there %s\n",name);
    return;
}
printGoodbye(char* name){
    printf("GoodBye there %s\n",name);
    return (1);
}

int main(int argc, char* argv[]){
    printHello("bob");
    int i = printGoodbye("Alice");
    printf("printGoodBye returns %d\n",i);
}