/*
超級製作人:
你是一個電視台的主管, 你將設定周一至周日的電視節目, 清單如下:
週一: 鬼滅之刃 (Demon Slayer Blade)
週二: 航海王
週三: 咒術迴戰 (Jujutsu Kaisen)
週四: 七龍珠超
週五: 我的英雄學院 (My Hero Academia)
週六: 新聞
週日: 新聞

請設計一個查詢平台, 讓使用者輸入 1 - 7 來代表週一至週日, 來查詢節目
*/

#include <iostream>   //for c++
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> show = {"Demon Slayer Blade", \
                            "One Piece", \
                            "Jujutsu Kaisen", \
                            "Dragon ball supper", \
                            "My Hero Academia", "news"};

    char day;
    printf("week = (1-7): \n");
    scanf("%c", &day);

    if(day == '1'){
        cout << show[0] << endl;
    }else if(day == '2'){
        cout << show[1] << endl;
    }else if(day == '3'){
        cout << show[2] << endl;
    }else if(day == '4'){
        cout << show[3] << endl;
    }else if(day == '5'){
        cout << show[4] << endl;
    }else if(day == '6' || day == '7'){
        cout << show[5] << endl;
    }else{
        cout << "error" << endl;
    }

    return 0;
}