/*
C 語言中沒有字串型態, 
採用陣列方式存放字串
*/

#include <stdio.h>

int main(){    
    char name[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    //字元'\0'代表一個字串結束

    //陣列長度: 元素個數
    printf("length: %ld\n", sizeof(name) / sizeof(name[0]));

    for(int i=0; i<(sizeof(name) / sizeof(name[0])); i++){
        printf("%c \n", name[i]);
    }

    printf("%s \n", name);

    return 0;
}