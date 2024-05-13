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

    //cin >> s;
    string s = "ABBCCDD";

    // 카운팅 배열
    /**
     문자열 's'를 순회하면서 출현 빈도를 계산한다.
     만약 'a' 가 'A' 라면 cnt[0] 에 접근을 하게 된다. cnt[0]++; 을 해서 카운트를 한다.
     'a'가 'B' 라면 cnt[1] 에 접근한다. 아스키코드로 66-54 가 되기 때문이다.
    **/
    for(char a : s) cnt[a - 'A']++;  // 문자의 출현 빈도를 계산한다.

 //test
//    for(int i = 0; i < s.size(); i++){
//         cout << cnt[i] << "\n";
//    }

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
