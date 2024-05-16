/**
    시간 복잡도를 줄여서 계산

    * 모듈러 연산
    (a+b) % c
    a % c + b % c

    (a*b) % c
    a % c * b % c

    20억번을 곱하는 것이 아니라 곱할때 마다 모듈러 연산을 해줘야한다.
    곱한것은 변수에 넣고 기반으로 제귀합수로 구현한다.
    ex) 10 11 12 => 4
**/


#include <bits/stdc++.h>
using namespace std;
typedef long long ll;   // 한번 곱할때 20억 넘어가기 때문에 long long 지정
ll a, b, c;
//재귀함수
ll go( ll a, ll b){  //10 11
    // 기저사례    go(10, 1)
    if(b == 1) return a % c;   //  10 % 12

    ll ret = go(a, b/2);  // 반을 나눔   go(10, 5) , go(10, 2) , go(10, 1)
    ret = (ret * ret) % c;

    // 홀수
    if(b % 2) ret = (ret * a) % c;
    return ret;

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cin >> a >> b >> c;
    cout << go(a,b) << "\n";
    return 0;
}

