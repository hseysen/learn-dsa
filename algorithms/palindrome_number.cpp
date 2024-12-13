#include<bits/stdc++.h>

using namespace std;


bool number_is_palindrome(int x){
    if(x == 0) return true;                     // Consider 0 as palindrome
    if(x < 0 || x % 10 == 0) return false;      // Negative numbers are not palindromes due to "-" sign.
                                                // Numbers ending in 0 except 0 are not palindromes either.

    int reversed_half = 0;
    while(x > reversed_half){
        reversed_half = reversed_half * 10 + x % 10;
        x /= 10;
    }

    return x == reversed_half || x == reversed_half / 10;             // Divide by 10 because of odd-number of digits case.
}


int main(){
    int test_number = 356848653;
    bool is_palindrome = number_is_palindrome(test_number);
    cout << "Provided number: " << test_number << endl;
    if(is_palindrome) cout << "This number is a palindrome" << endl;
    else cout << "This number is not a palindrome." << endl;
    return 0;
}