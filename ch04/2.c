/*
if (條件式) {
    程式區塊 1
} else{
    程式區塊 2
}
//若條件成立, 則執行程式區塊1
// 反之, 執行程式區塊2
*/

#include <stdio.h>

int main(){    
    int a = 50;

    if(a%2 == 0){
        printf("a is even \n");
    }eles{
        printf("a is odd \n");
    }

    /*請寫出一個程式, 
      由使用者輸入今天是否下雨, 
      若下雨, 則由程式提醒帶雨傘; 反之則不帶傘
    */

    char rain;
    printf("It's a rainny day ? (Y/N): \n");
    scanf("%c", &rain);

    if(rain == 'Y'){
        printf("You should take umbrella \n");   
    }else{
        printf("You don't need to take umbrella \n");
    }

    return 0;
}