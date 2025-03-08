#include <bits/stdc++.h>

using namespace std;

int find_pattern(int a, int b){
    vector<vector<int>> pattern = { // 듣기로는 제곱의 1자리 수의 경우가 4개 이하라네요
        {0},           // 0^b % 10 = 0
        {1},           // 1^b % 10 = 1 (모든 거듭제곱 결과 1)
        {2, 4, 8, 6},  // 2^b % 10 = [2, 4, 8, 6]
        {3, 9, 7, 1},  // 3^b % 10 = [3, 9, 7, 1]
        {4, 6},        // 4^b % 10 = [4, 6]
        {5},           // 5^b % 10 = 5 (모든 거듭제곱 결과 5)
        {6},           // 6^b % 10 = 6 (모든 거듭제곱 결과 6)
        {7, 9, 3, 1},  // 7^b % 10 = [7, 9, 3, 1]
        {8, 4, 2, 6},  // 8^b % 10 = [8, 4, 2, 6]
        {9, 1}         // 9^b % 10 = [9, 1]
    };

    int remainder = a % 10;
    int pattern_len 
        = (remainder == 0 || remainder == 1 || remainder == 5 || remainder == 6) ? 1 :
        (remainder == 4 || remainder == 9) ? 2 : 4;

    if (remainder == 0) return 10;

    return pattern[remainder][(b-1) % pattern_len];
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n, a, b;

    cin >> n;

    while(n--){
        cin >> a >> b;
        cout << find_pattern(a, b) << endl;
    }
}