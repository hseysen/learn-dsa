#include<bits/stdc++.h>

using namespace std;


bool string_is_palindrome(string s){
    int n = s.length();
    if(n <= 1) return true;         // Consider zero-length and single-character strings as palindromes.

    int i = 0, j = n - 1;           // Two-pointer approach
    while(i < j){
        if(s[i++] != s[j--]) return false;
    }
    return true;
}


int main(){
    string test_word = "racecar";
    bool is_palindrome = string_is_palindrome(test_word);
    cout << "Provided string: " << test_word << endl;
    if(is_palindrome) cout << "This string is a palindrome" << endl;
    else cout << "This string is not a palindrome." << endl;
    return 0;
}