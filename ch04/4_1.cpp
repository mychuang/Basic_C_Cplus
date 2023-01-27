/*
超級製作人2:
你是一個電視台的主管, 你將根據年齡層，設定周一至周日的電視節目, 清單如下:

週一: 
 18歲以下: 關於我轉生變成史萊姆這檔事 (That Time I Got Reincarnated as a Slime)
 18歲以上(含): 鬼滅之刃 (Demon Slayer Blade)
週二: 航海王
週三: 
 18歲以下: 咒術迴戰 (Jujutsu Kaisen)
 18歲以上(含): 從零開始的異世界生活 (Re: Life in a Different World from Zero)
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
    vector<string> show  = {"That Time I Got Reincarnated as a Slime",\
                            "One Piece", "Jujutsu Kaisen", "Dragon ball supper", \
                            "My Hero Academia", "news" };
    vector<string> show18 = {"Demon Slayer Blade", \
                             "Re: Life in a Different World from Zero"};

    int day;
    printf("week = (1-7): \n");
    scanf("%d", &day);

    int age;
    printf("age: \n");
    scanf("%d", &age);

    if(day == 1){
        if(age >= 18){
            cout << show18[0] << endl;
        }else{
            cout << show[0] << endl;
        }
    }else if(day == 2){
        cout << show[1] << endl;
    }else if(day == 3){
        if(age >= 18){
            cout << show18[1] << endl;
        }else{
            cout << show[2] << endl;
        }
    }else if(day == 4){
        cout << show[3] << endl;
    }else if(day == 5){
        cout << show[4] << endl;
    }else if(day == 6 || day == 7){
        cout << show[5] << endl;
    }else{
        cout << "error" << endl;
    };

    return 0;
}