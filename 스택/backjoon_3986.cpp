#include <bits/stdc++.h>
using namespace std;

/**
    3
    ABAB
    AABB
    ABBA

    출력 : 2
    스택 사용하는 문제
**/
int n, ret;
string s;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cin >> n;

    for(int i = 0; i < n; i++){
        //문자를 받을때마다 스택을 빈 스택 정의해야 된다.
        cin >> s;
        stack<char> stk;
        for(char a : s){
        // 스택 탑에 있는 데이터를 확인한다. 필수로 스택 사이즈를 체크해야 참조 에러 발생하지 않는다.
            if(stk.size() && stk.top() == a) stk.pop();
            else stk.push(a);
        }
        if(stk.size() == 0 ) ret++;  // 좋은 단어라 판단하여 값을 증가시킨다.
    }
    cout << ret << "\n";
}


