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

    /*試寫出一個程式, 計算 1 + 2 + ... + 10 的結果*/
    int total = 0;
    for(int i=1; i<11; i++){
        total = total + i;
    }
    printf("total = %d \n", total);

    return 0;
}