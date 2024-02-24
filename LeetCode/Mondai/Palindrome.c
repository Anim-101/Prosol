// Leetcode URL - https://leetcode.com/problems/palindrome-number/
// Problem number - 9

#include<stdio.h>
#include<stdbool.h>

bool isPalindrome(int x) {
    long int reversed = 0;
    long int mod = 0;
    int original = x;

    if (x < 0) {
       return 0;
    }

    while (x != 0) {
        mod = x % 10;
        reversed = reversed * 10 + mod;
        x /= 10;
    }

    if (reversed == original) {
        return 1;
    } else {
        return 0;
    }
}

int main() {

    if(isPalindrome(-121)) {
        printf("Is Palindrome");
    } else {
        printf("Is not Palindrome");
    }

    return 0;
}
