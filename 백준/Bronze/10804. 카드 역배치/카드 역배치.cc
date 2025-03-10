#include <bits/stdc++.h>

using namespace std;

void reverse(int a, int b, int arr[]){
    while (a < b) {
        swap(arr[a], arr[b]);
        a++;
        b--;
    }       
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int arr[21];

    for(int i=1; i<=20; i++) arr[i] = i;

    for(int i=0; i<10; i++){
        int a, b;
        cin >> a >> b;
        reverse(a, b, arr);
    }

    for(int i=1; i<=20; i++) cout << arr[i] << ' ';
}