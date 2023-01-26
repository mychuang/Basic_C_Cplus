/*c & c++ 輸入*/
#include <stdio.h>    //for c
#include <iostream>   //for c++
using namespace std;

int main(){    
    int i;
    char ch;
    float j;

    printf("Input an integer, character & a float \n");

    scanf("%d %c %f", &i, &ch, &j);

    printf("The integer: %d \n", i);
    printf("The character: %c \n", ch);
    printf("The float: %f \n", j);

    system("pause");

    cout << "Input an integer, character & a float" << endl;

    cin >> i >> ch >> j;

    cout << "The integer: " << i << endl;
    cout << "The character: " << ch << endl;
    cout << "The float: " << j << endl;
    
    
    return 0;
}