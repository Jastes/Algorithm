#include <bits/stdc++.h>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[5], sum = 0;

    for(int i=0; i<5; i++){
        cin >> arr[i];
        sum += arr[i];
    }sort(arr, arr+5);

    cout << (float)sum/5 << '\n' << arr[2];
}