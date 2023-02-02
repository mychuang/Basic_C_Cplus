/*
跳出本次迴圈：continue
  while (判斷式){
    # 執行程式
    continue;
  }
*/

#include <stdio.h>

int main(){    

    /*
    設計一個程式, 可讓使用者輸入一個區間
    程式必須顯示出在此區間內的所有3的倍數
    */

    int a, b;
    printf("input a & b \n");
    scanf("%d %d", &a, &b);

    while(a <= b){
        a = a + 1;
        if(a%3 != 0){
            continue;
        }
        printf("%d \n", a);
    }

    return 0;
}