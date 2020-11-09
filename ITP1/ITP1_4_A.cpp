#include<iostream>
#include <iomanip> // setprecisionを使用するのに必要
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;
    
    cout << a / b << " " <<  a % b << " " <<  fixed << setprecision(10) << 1.0 * a / b << endl; //1.0をかけることで型変換
}