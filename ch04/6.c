/*
電費計算
依照用電類別來計費, 規則如下

家庭用電: 
    100度以下, 每度2元
    101-300度, 每度3元
    301度以上, 每度4元
工業用電: 
    每一契約馬力200元
    實際用電每度2元
營業用電:
    0-300度, 每度5元
    301度以上, 每度6元
*/

#include <stdio.h>
//家庭用電
#define TYPEA1 2.
#define TYPEA2 3.
#define TYPEA3 4.
//工業用電
#define TYPEB1 200.
#define TYPEB2 2.
//營業用電
#define TYPEC1 5.
#define TYPEC2 6.

int main(){
    int t; //用電類別
    float deg; //用電度數
    float c; //契約馬力
    float fee = 0.0; //電費

    printf("1: household electricity \n");
    printf("2: Industrial electricity \n");
    printf("3: business electricity \n");
    printf("Enter your electricity type: (1, 2 or 3) \n");
    scanf("%d", &t);

    if(t >= 1 && t <=3){
        printf("Enter degree of electricity: \n");
        scanf("%f", &deg);
        switch(t){
        case 1:
            if(deg <= 100){
                fee = deg*TYPEA1;
            }else if(deg > 100 && deg <= 300){
                fee = 100.0*TYPEA1;
                fee = fee + (deg-100.0)*TYPEA2;
            }else{
                fee = 100.0*TYPEA1;
                fee = fee + 200.0*TYPEA2;
                fee = fee + (deg-300.0)*TYPEA3;
            }
            break;
        case 2:
            printf("Enter contract power \n");
            scanf("%f", &c);
            fee = c*TYPEB1 + deg*TYPEB2;
            break;
        case 3:
            if(deg <= 300){
                fee = deg*TYPEC1;
            }else{
                fee = 300.0*TYPEC1;
                fee = fee + (deg-300.0)*TYPEC2;
            }
            break;
        }
        printf("total fee: %f \n", fee);
    }else{
        printf("type error \n");
    }
    
    return 0;
}