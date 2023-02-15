/*
費式數列 - 遞迴函式
1, 1, 2, 3, 5, 8, 13 ...

f(0) = 1
f(1) = 1
f(2) = f(2-1) + f(2-2)
f(3) = f(3-1) + f(3-2)
f(n) = f(n-1) + f(n-2)
*/

#include <stdio.h>

int feb(int num){

    if(num < 0){
        printf("error \n");
    }
    
    if(num == 0 || num == 1){
        return 1;
    }else{
        return feb(num-1) + feb(num-2);
    }

}

int main(){    

    for(int i=0; i<10; i++){
        printf("%d \n", feb(i));
    }

    return 0;
}