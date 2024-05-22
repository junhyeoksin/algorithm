/**
    모튤러 연산
    ( a + b ) % n =  ( a % n + b % n ) % n
    ( a x b ) % n = ( a % n  x b % n )  % n
.
    2와 5로 나누어 떨어지지 않는 정수 n(1 ≤ n ≤ 10000)가 주어졌을 때, 각 자릿수가 모두 1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    while(scanf("%d", &n) != EOF){
        ll cnt = 1;
        ll ret = 1;
        while(true){
            if(cnt % n == 0){
                printf("%lld\n", ret);
                break;
            }else{
                cnt = (cnt * 10) + 1 ;
                cnt %= n;
                 ret++;
            }
        }
    }
    return 0;
}
