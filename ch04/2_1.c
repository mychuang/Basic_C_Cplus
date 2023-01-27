/*
if (條件式) {
    程式區塊 1
} else{
    程式區塊 2
}

三元運算子: 
(條件式) ? 條件式為true時執行的陳述句 : 條件式為false時執行的陳述句
*/

#include <stdio.h>

int main(){    
    int a = 50;

    //if(a%2 == 0){
    //    printf("a is even \n");
    //}eles{
    //    printf("a is odd \n");
    //}

    a%2 == 0 ? printf("a is even \n") : printf("a is odd \n");


    /*請寫出一個程式, 
      由使用者輸入今天是否下雨, 
      若下雨, 則由程式提醒帶雨傘; 反之則不帶傘
    */

    char rain;
    printf("It's a rainny day ? (Y/N): \n");
    scanf("%c", &rain);

    //if(rain == 'Y'){
    //    printf("You should take umbrella \n");   
    //}else{
    //    printf("You don't need to take umbrella \n");
    //}

    rain == 'Y' ? printf("You should take umbrella \n") : printf("You don't need to take umbrella \n");

    return 0;
}