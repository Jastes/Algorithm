#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int a, b, c;

    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 10000 + a * 1000;
    }else if (a == b || b == c || a == c) {
        cout << (a == b ? 1000 + a * 100 : (b == c ? 1000 + b * 100 : 1000 + c * 100));
    }else{
        cout << max(a, max(b, c)) * 100;
    }
}