//常數與前置處理器
#include <stdio.h>

/*
C 語言提供以"#"開頭的前置處理器指令
用來自定義識別名稱
*/
#define pi_define 3.14
/*
經過前置處理器定義後, 
程式會在編譯前, 先進行前置處理作業
*/

int main(){    
    //宣告常數的基本用法
    /*
    常數: 程式執行期間, 其值不會改變 
    變數: 程式執行期間, 其值可以改變
    */
    const float pi_const = 3.14;

    printf("pi = %f \n", pi_const);
    printf("pi = %f \n", pi_define);

    //below is error
    //pi_const = pi_const + 16;
    //printf("pi = %f \n", pi_const);
    //pi_define = pi_define + 16;
    //printf("pi = %f \n", define);

    return 0;
}

/*
使用時機:
當某些數值在程式中要保持一致性, 
但有時因程式需求需要更動時, 就可以使用;
例如: 
銀行利率或匯率, 一段時間後就需要更動
此時使用常數與前置處理器, 僅需要更動一處地方即可
*/