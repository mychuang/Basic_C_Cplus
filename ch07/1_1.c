/*
設計一個程式, 可以輸入5個學生成績, 
並儲存至陣列中
最後輸出五個學生成績的平均
*/

#include <stdio.h>

int main(){    
    int array[5]; //宣告5個元素的整數陣列

    for(int i=0; i<5; i++){
        printf("Input score %d: \n", i+1);
        scanf("%d", &array[i]);
    }

    int avg = 0;
    for(int i=0; i<5; i++){
        avg = avg + array[i];
    }

    avg = avg / 5;
    printf("average score: %d \n", avg);

    return 0;
}