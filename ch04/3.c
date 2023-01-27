/*
if (條件式 1) {
    程式區塊 1
} else if (條件式 2){
    程式區塊 2
...
}else{
    程式區塊 N
}
//若條件1成立, 則執行程式區塊1
//若條件2成立, 則執行程式區塊2
//若條件都不成立, 執行程式區塊N
*/

#include <stdio.h>

int main(){    
    int a = 50;

    if(a > 0){
        printf("a is positive \n");
    }else if (a == 0) {
        printf("a is zero \n");
    }else{
        printf("a is negative \n");
    }

    /*請依據使用者書熱的成績, 判定成績等第
      90以上: A
      80 - 89: B
      70 - 78: C
      60 - 69: D
      未滿60: E
    */

    int score;
    printf("Input the score: \n");
    scanf("%d", &score);

    if(score >= 90){
        printf("A \n");   
    }else if (score >= 80 && score < 90){
        printf("B \n");
    }else if (score >= 70 && score < 80){
        printf("C \n");
    }else if (score >= 60 && score < 70){
        printf("D \n");
    }else{
        printf("E \n");
    }

    return 0;
}