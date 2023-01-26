/*
創建一個商品動態清單，它接受使用者的輸入購買數量，最後顯示總金額
價目表如下:
可樂 30 元
綠茶 25 元
義大利麵 80 元
啤酒 50 元
果汁 45 元
泡麵 55 元
*/

#include <iostream>   //for c++
using namespace std;

int main(){    
    int cola_num, green_tea_num, pasta_num, bear_num, juice_num, instant_noodle_num;

    //use c++ code
    cout << "input cola" << endl;
    cin >> cola_num;

    cout << "input green tea" << endl;
    cin >> green_tea_num;

    cout << "input pasta" << endl;
    cin >> pasta_num;

    cout << "input bear" << endl;
    cin >> bear_num;

    cout << "input juice" << endl;
    cin >> juice_num;

    cout << "input instant noodle" << endl;
    cin >> instant_noodle_num;

    int cola = 30;
    int green_tea = 25;
    int pasta = 80;
    int bear = 50;
    int juice = 45;
    int instant_noodle = 55;
    int pay = cola*cola_num + green_tea*green_tea_num + \
              pasta*pasta_num + bear*bear_num + juice*juice_num + \
              instant_noodle*instant_noodle_num;

    cout << "Total count: " << pay << endl;


    

    return 0;
}