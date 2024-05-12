#include <iostream>
using namespace std;

int main(){
   int num, cnt,min = 1000001, max = -1000001;
   cin>>cnt;
   
    while(cin>>num){
        max = num > max ? num : max;
        min = num < min ? num : min;
    }
    cout << min << " " << max;
}