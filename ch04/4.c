/*
if (條件式 1.1) {
    //<若 condition 1.1 為真, 則執行此區塊>
    if(條件式 2){
        //<若 條件式 2 為真, 則執行此區塊>
    }else{
        //<若 條件式 2 為假, 則執行此區塊>
    }
} else if (條件式 1.2){
    #<若 condition 1.2 為真, 則執行此區塊>
    if(條件式 3){
        //<若 條件式 3 為真, 則執行此區塊>
    }else{
        //<若 條件式 3 為假, 則執行此區塊>
    }
}

*/

#include <stdio.h>

int main(){    
    /*請寫出一個程式, 讓使用者輸入西元年分,
      判斷該年是否為閏年
      判斷方式: 四年一閏, 逢百不閏, 逢四百又閏 
      ex: 
        輸入 2000 : 顯示 Leap Year
        輸入 2100 : 顯示 Not leap Year
    */

    int year;
    printf("Input year: \n");
    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("Leap Year \n");
            }else{
                printf("Not leap Year \n");
            }
        }else{
             printf("Not leap Year \n");
        }
    }else{
        printf("Not leap Year \n");
    }

    return 0;
}