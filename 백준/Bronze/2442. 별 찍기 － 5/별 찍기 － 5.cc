#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    int N;
    cin >> N;

    for(int i=0; i<N; i++){
        for(int j=N-i-1; j>0; j--) cout << ' ';
        for(int k=0; k<i*2+1; k++) cout << '*';

        cout << '\n';
    }
}