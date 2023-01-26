#include <stdio.h>

int main(){    
    int chinese, english, math, science, social;

    printf("Input chinese, english, math, science, social: \n");
    scanf("%d %d %d %d %d", &chinese, &english, &math, &science, &social);

    printf("total score: %d \n", chinese+english+math+science+social);

    //強制轉型
    printf("average score: %f \n", (float)(chinese+english+math+science+social)/5.);

    return 0;
}