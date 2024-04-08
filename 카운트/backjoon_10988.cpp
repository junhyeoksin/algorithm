/*
알파벳 소문자로만 이루어진 단어가 주어진다. 이때, 이 단어가 팰린드롬인지 아닌지 확인하는 프로그램을 작성하시오.

팰린드롬이란 앞으로 읽을 때와 거꾸로 읽을 때 똑같은 단어를 말한다.

level, noon은 팰린드롬이고, baekjoon, online, judge는 팰린드롬이 아니다.
*/

#include <bits/stdc++.h>
using namespace std;


void is_palindrome(string str){
    string reverseStr = str;
    reverse(reverseStr.begin(), reverseStr.end());
    if(str == reverseStr){
        cout << 1;
    }else{
        cout << 0;
    }
}
int main(){
    string str;
    cin >> str;
    is_palindrome(str);
    return 0;
}