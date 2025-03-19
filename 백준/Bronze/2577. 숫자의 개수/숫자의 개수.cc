#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const* argv[]) {
    int a, b, c;
    cin >> a >> b >> c;
    int result = a * b * c;

    string s1 = to_string(result);
    int ary[10] = {};

    for (int i = 0; i < s1.length(); i++)
        for (int j = 0; j < 10; j++) 
            if (s1[i] - '0' == j)
                ary[j]++;

    for (int k = 0; k < 10; k++) 
        cout << ary[k] << endl;    
}

