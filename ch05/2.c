/*
跳出本次迴圈：continue
  while (判斷式):
      # 執行程式
      continue
*/

#include <stdio.h>

int main(){    
    
    int a = 0;

    //顯示 1 - 10, 但不顯示7

    while(a < 10){
        a = a + 1;
        if(a == 7){
            continue;
        }
        printf("a = %d \n", a);
    }

    return 0;
}