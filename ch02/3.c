//講解浮點數

#include <stdio.h>

int main(){
    /*
    float: 10^-37 ~ 10^37
    double: 10^-307 ~ 10^307
    long double: 10^-4931 ~ 10^4932
    */
    
    float i = 123456.789; //占用4個bytes;
    printf("%zu \n", sizeof(i)); //sizeof() 計算該變數的記憶體
    
    double j = 123456.789; //占用8個bytes
    printf("%zu \n", sizeof(j)); 

    long double k = 123456.789; //占用8*個bytes
    printf("%zu \n", sizeof(k)); 

    /*精度的結果*/
    j = 777.777;
    printf("%f \n", j); 

    j = 7.77777e2;
    printf("%f \n", j); 

    /*不同寫法*/
    i = 777.777;
    printf("%f \n", i); 

    i = 7.77777e2;
    printf("%f \n", i); 


    return 0;
}

/* 1 byte = 8bit , 每一個bit 儲存一個 0 or 1 (二進位)
   ex: 
   2進位    =>  10進位
   011      =>  3
   010      =>  2
   111      => -1
   101      => -3 
*/