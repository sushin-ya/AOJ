#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
    vector<int> N(3);
    for(int i=0;i<3;i++){
        cin >> N.at(i);
    }
    
    sort(N.begin(),N.end());
    for(int i=0;i<3;i++){
        cout << N.at(i);
        if(i<2){
          cout << " ";
        }else{
          cout << endl;
        }
    }
}