#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, odd = 0, sum = 0, min = 100;

    for(int i=0; i<7; i++){
        cin >> n;

        if(n & 1){
            odd++;
            sum += n;
            if(min > n) min = n;
        }
    }

    if(odd) cout << sum << '\n' << min;
    else cout << -1; 
}