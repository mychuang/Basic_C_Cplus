//字元與編碼

#include <stdio.h>

int main(){    
    char i = 'A'; //占用1個bytes;
    printf("%zu \n", sizeof(i)); //sizeof() 計算該變數的記憶體
    printf("%c \n", i);

    char j = 65; //ASCII 編碼: https://www.ascii-code.com/
    printf("%c \n", j);

    //使用字串: 字元陣列
    char text[] = {'h', 'e', 'l', 'l', 'o', '\0'};
    printf("%s \n", text);

    char text2[] = "hello";
    printf("%s \n", text2);

    return 0;
}