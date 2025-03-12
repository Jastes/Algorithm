#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=N; i>0; i--){
        for(int k=N; i<k; k--) cout << ' ';
        for(int j=0; j<i; j++) cout << '*';

        cout << '\n';
    }
}