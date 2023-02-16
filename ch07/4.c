#include <stdio.h>

int main(){    
    int a[] = {3, 29, 17};
    int max = 0;

    for(int i=0; i<3; i++){
        if(max < a[i]){
            max = a[i];
        }
    }

    printf("max: %d \n", max);


    return 0;
}