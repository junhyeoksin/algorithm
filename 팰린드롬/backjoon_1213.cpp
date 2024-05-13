// 불가능한 경우 : 홀수가 2개 이상
// ASIC|| 코드 상으로 가장 위에 있는 것 ( 오름차순) 으로 붙힌다.

#include <bits/stdc++.h>
using namespace std;

string s, ret;
int cnt[200], flag;
char mid;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    cin >> s;
    //ex ) AAABB
    // 카운팅 배열
    for(char a : s) cnt[a - 'A']++;  // 문자의 출현 빈도를 계산한다.
    // Z -> A  까지 진행하는데 , 홀수이면
    for(int i = 'Z'; i >= 'A'; i--){
        if(cnt[i - 'A']){
            // 홀수
            if(cnt[i - 'A'] & 1){
                mid = char(i); flag++;
                cnt[i - 'A']--;
            }
            if(flag == 2) break;  // 홀수가 2개 이상일 경우
            for(int j = 0; j < cnt[i - 'A']; j += 2){
                ret = char(i) + ret;
                ret += char(i);
            }
        }
    }
    if(mid != '\0') ret.insert(ret.begin() + ret.size() / 2, mid);
    if(flag == 2) cout << "I'm Sorry Hansoo\n";
    else cout << ret << "\n";

}
