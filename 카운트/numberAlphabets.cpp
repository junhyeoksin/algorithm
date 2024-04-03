//알파벳 개수
//알파벳 소문자로만 이루어진 단어 S가 주어진다. 각 알파벳이 단어에 몇 개가 포함되어 있는지 구하는 프로그램을 작성하시오.
// 아스키코드 사용 : A - 65 , a - 97
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
string str;
int cnt[26]; // a~z 25개
int main(){
    ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
    cin >> str;
    for(char a : str){
    cout << a;
        cnt[a - 'a']++;  // 좌표 이동  // 'a' : 97
    }
    for(int i = 0; i < 26; i++){
        cout << cnt[i] << " ";
    }
    return 0;
}

/* 예를 들어, 문자열 "baekjoon"이 주어졌을 때를 생각해봅시다.

"b"를 처리할 때:

'b' - 'a' = 98 - 97 = 1
따라서 cnt[1]을 1 증가시킵니다.
"a"를 처리할 때:

'a' - 'a' = 97 - 97 = 0
따라서 cnt[0]을 1 증가시킵니다.
"e"를 처리할 때:

'e' - 'a' = 101 - 97 = 4
따라서 cnt[4]을 1 증가시킵니다.
"k"를 처리할 때:

'k' - 'a' = 107 - 97 = 10
따라서 cnt[10]을 1 증가시킵니다. */


