#include <iostream>

using namespace std;

int main(){
    int score;

    cin >> score;

    (score >= 90) ? cout << "A" : (score >= 80) ? cout << "B" : (score >= 70) ? cout << "C" : (score >= 60) ? cout << "D" : cout << "F";
}