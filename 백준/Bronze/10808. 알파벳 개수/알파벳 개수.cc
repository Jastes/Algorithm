#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string str;
    cin >> str;

    // int alphabet_cnt[26];
    // fill(alphabet_cnt, alphabet_cnt+26, 0);
    // memset(alphabet_cnt, 0, sizeof alphabet_cnt);
    vector<int> alphabet_cnt(26, 0);

    for(size_t i=0; i<str.size(); i++)
        alphabet_cnt[str[i] - 'a']++;

    for(int i=0; i<26; i++)
        cout << alphabet_cnt[i] << " ";
}