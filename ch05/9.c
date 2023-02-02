/*
輸入一個數字N，依照規律印出星星們。
input :
1
output :
*

input :
5
output :
*
**
***
****
*****

pesudo code:

while(var <= N):

    當var = 1: print("*") 1次
    當var = 2: print("*") 2次
    當var = 3: print("*") 3次
    ... 
    ||
    while(畫*次數 <= var):
        print("*") 
    
    var += 1
*/

#include <stdio.h>

int main(){

    int N;
    printf("input N : \n");
    scanf("%d", &N);

    int var = 0;
    int plt;
    while(var <= N){
        plt = 1;
        while(plt <= var){
            printf("*");
            plt = plt + 1;
        }
        printf("\n");
        var = var + 1;
    }

    return 0;
}