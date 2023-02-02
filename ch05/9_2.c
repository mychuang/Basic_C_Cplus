/*
印出金字塔
    *
   ***
  *****
 *******
*********

pesudo code:

while(var <= 5):
    當var = 1: print(" ") 4次
    當var = 2: print(" ") 3次 
    當var = 3: print(" ") 2次
    ...
    ||
    while(畫*次數 <= 5-var):
        print(" ")
    
    while(畫*次數 <= (var*2-1) ):
        print("*") 
    
    var += 1
*/

#include <stdio.h>

int main(){

    int N = 5;
    int var = 0;

    int plt;
    int spc;

    while(var <= N){
        spc = 1;
        while(spc <= N-var){
            printf(" ");
            spc = spc + 1;
        }

        plt = 1;
        while(plt <= var*2-1){
            printf("*");
            plt = plt + 1;
        }
        
        printf("\n");
        var = var + 1;
    }

    return 0;
}