#include <stdio.h>

int main(){    

    /*
    顯示費氏數列前10個

    pesudo code:

    前兩個數字 = 0
    前一個數字 = 1

    for (10次)
      當前數字 = 前兩個數字 + 前一個數字
    
      更新: 前兩個數字
      更新: 前一個數字
    */
   
    int num_pre0 = 0;
    int num_pre1 = 1;
    int num_current = 0; //give it a initial value

    printf("%d \n", num_pre0);
    printf("%d \n", num_pre1);

    for(int i=1; i<=10; i++){
        num_current = num_pre0 + num_pre1;
        printf("%d : %d \n", i, num_current);

        num_pre0 = num_pre1;
        num_pre1 = num_current;
    };

    return 0;
}