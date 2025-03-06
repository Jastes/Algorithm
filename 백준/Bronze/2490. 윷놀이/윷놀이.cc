#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int idx, input;
    string str = "DCBAE";

    for(int i=0; i<3; i++){
        idx = 0;

        for(int j=0; j<4; j++){
            cin >> input;
            if(input)   idx++;
        }cout << str[idx] << "\n";
    }
}