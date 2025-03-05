// #include <iostream>
// #include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;

    int min_val, middle_val, max_val;
    min_val = min(a, min(b, c));
    max_val = max(a, max(b, c));
    middle_val = a+b+c-min_val-max_val;

    cout << min_val << ' ' << middle_val << ' ' << max_val;
}