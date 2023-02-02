/*
for (起始式; 判斷式; 運算式) {
    程式區塊
} 
起始式: 可以初始化一個或多個變數值
判斷式: 運用此變數的值, 來判斷是否進入程式區塊
運算式: 對此變數的運算
*/

#include <stdio.h>
int main(){    
    
    //顯示 1 - 10
    int a = 0;

    while(a < 10){
        a = a + 1;
        printf("a = %d \n", a);
    }
    
    for(int i=1; i<=10; i++){
        printf("i = %d \n", i);
    }

    /*連續印出字串*/
    for(int i=0; i<5; i++){
        printf("Loop is fun! \n", i);
    };

    return 0;
}