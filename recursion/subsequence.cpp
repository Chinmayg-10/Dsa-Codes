#include<iostream>
using namespace std;

void Subsequence(string str, int i, string ans) {
    // base case
    if (i == str.length()) {
        cout << ans << endl;
        return;
    }
    char ch = str[i];
    // include the current character
    Subsequence(str, i + 1, ans + ch);
    // exclude the current character
    Subsequence(str, i + 1, ans);
}

int main() {
    string str = "abc";
    string ans = "";
    int index = 0;
    Subsequence(str, index, ans);
    return 0;
}

