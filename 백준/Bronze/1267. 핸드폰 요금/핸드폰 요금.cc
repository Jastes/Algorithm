#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, sum=0, x, M = 0, Y = 0;

    cin >> n;

    while(n--){
        cin >> sum;
        Y += (sum/30 + 1) * 10;
        M += (sum/60 + 1) * 15;
    }

    // cout << M << ' ' << Y << '\n';

    // M = (sum/30 + (sum%30 != 0)) * 10;
    // Y = (sum/60 + (sum%60 != 0)) * 15;

    if (M < Y) cout << 'M' << ' ' << M;
    else if (Y < M) cout << 'Y' << ' ' << Y;
    else cout << "Y M" << ' ' << Y;
}