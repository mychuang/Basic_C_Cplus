/*二維陣列: 計算行列式

A00 A01 A02
A10 A11 A12
A20 A21 A22

A =  (A00*A11*A22 + A10*A21*A02 + A20*A01*A12) - (A02*A11*A20 + A12*A21*A00 + A22*A10*A01) 
*/

#include <stdio.h>

int main(){    
    int line[3][3]; //宣告3*3的二維整數陣列
    int ans = 0;

    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            printf("Input (%d, %d) element: \n", i+1, j+1);
            scanf("%d", &line[i][j]);
        }
    }

    ans = line[0][0] * line[1][1] * line[2][2];
    ans = ans + line[1][0] * line[2][1] * line[0][2];
    ans = ans + line[2][0] * line[0][1] * line[1][2];

    ans = ans - line[0][2] * line[1][1] * line[2][0];
    ans = ans - line[1][2] * line[2][1] * line[0][0];
    ans = ans - line[2][2] * line[1][0] * line[0][1];

    printf("Result: %d \n", ans);

    return 0;
}