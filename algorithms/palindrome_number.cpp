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


int main(int argc, char* argv[]){
    if(argc != 2){
        cerr << "Usage: palindrome_number <test_number>" << endl;
        return 1;
    }
    try{
        int test_number = stoi(argv[1]);
        bool is_palindrome = number_is_palindrome(test_number);
        cout << "Provided number: " << test_number << endl;
        if(is_palindrome) cout << "This number is a palindrome." << endl;
        else cout << "This number is not a palindrome." << endl;
        return 0;
    }catch (const exception& e) {
        cerr << "Error: Invalid integer format for '" << argv[1] << "'\n";
        return 1;
    }
}