#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b;

    cin >> a >> b;

    if(a > b){
        a = a^b;
        b = a^b;
        a = a^b;
    }

    cout << ((a == b) ? 0 : b - a - 1) << '\n';
    for(int i=a+1; i<b; i++){
        cout << i << ' ';
    }
}