//計算園面積
#include <math.h> //for c 三角函數
#include <stdio.h>    //for c
#include <iostream>   //for c++
using namespace std;

int main(){    
    double radius;
    double pi = 3.1415926;
    double pi_c = acos(-1.0);
    double pi_cplus = acos(-1.0);

    // use c code
    printf("Input radius: \n");
    scanf("%lf", &radius);
    printf("circle area: %lf \n", radius*radius*pi);
    printf("circle area: %lf \n", radius*radius*pi_c);

    //use c++ code
    cout << "Input radius" << endl;
    cin >> radius;
    cout << "circle area: " << radius*radius*pi << endl;
    cout << "circle area: " << radius*radius*pi_c << endl;

    return 0;
}