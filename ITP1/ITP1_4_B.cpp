// #include<iostream>
// #include <iomanip> // setprecisionを使用するのに必要
#include <bits/stdc++.h>
using namespace std;

int main(){
    double r;
    float p;
    cin >> r >> p;

    cout << fixed << setprecision(6) << r << " " << M_PI * r * r << " " << M_PI * r * 2 << endl;
    cout << fixed << setprecision(6) << p << " " << M_PI * p * p << " " << M_PI * p * 2 << endl; 
}