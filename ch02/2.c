//講解整數

#include <stdio.h>

int main(){
    /*
    int: -2147483648 ~ 2147483647
    short: 	-32768 ~ 32767
    long: -2147483648 ~ 2147483647
    */
    
    int i = 0; //32bit or 64bit, 占用4個bytes; 16bit則是2個bytes
    printf("%zu \n", sizeof(i)); //sizeof() 計算該變數的記憶體
    
    short j = 0; //占用2個bytes
    printf("%zu \n", sizeof(j)); 

    long k = 0; //占用4個bytes
    printf("%zu \n", sizeof(k)); 


    /*
    unsigned int: 0 ~ 4294967295
    unsigned short: 0 ~ 65535
    unsigned long: 0 ~ 4294967295
    */

    unsigned int l = 0;
    printf("%zu \n", sizeof(l));

    unsigned short m = 0;
    printf("%zu \n", sizeof(m));

    unsigned long n = 0;
    printf("%zu \n", sizeof(n));

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