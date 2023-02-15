/*
main(int argc, char *argv[]){}
1. argc 代表引數的總個數
2. *argv[] 代表可儲存的所有引數
*/

#include <stdio.h>

int main(int argc, char *argv[]){    

    int i;
    printf("argc = %d \n", argc);

    for(i=0; i<argc; i++){
        printf("%s \n", argv[i]);
    }

    return 0;
}