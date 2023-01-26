// #include: 前置處理器, 用此指令可將別人寫好的程式碼引入
/*使用 C++ lib*/
#include <iostream>
using namespace std;

//main() 又稱主函式, C Code 一律從main()開始
int main(){ // { 代表函式的開始

    //cout()為輸出函式, 能將括弧內的東西顯示在螢幕上, 該函式功能定義在iostream
    cout << "Hello World" << endl;

    // main()定義回傳值為整數, 因此必須回傳整數
    return 0;
} // } 代表函式的結束