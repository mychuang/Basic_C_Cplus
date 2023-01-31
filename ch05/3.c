/*
跳出整個迴圈: break

  while (判斷式):
      # 執行程式
      break
*/

#include <stdio.h>

int main(){    
    
    int a = 0;

    //顯示 1 - 10, 顯示6即停止

    while(a < 10){
        a = a + 1;
        if(a == 7){
            break;
        }
        printf("a = %d \n", a);
    }

    return 0;
}