/**
    모튤러 연산
    ( a + b ) % n =  ( a % n + b % n ) % n
    ( a x b ) % n = ( a % n  x b % n )  % n

    2와 5로 나누어 떨어지지 않는 정수 n(1 ≤ n ≤ 10000)가 주어졌을 때, 각 자릿수가 모두 1로만 이루어진 n의 배수를 찾는 프로그램을 작성하시오.
**/
#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int n;
int main(){
    while(scanf("%d", &n) != EOF){  //"d" : 정수형(int) 입력을 읽어들이는 형식 지정자입니다 ,  &n : 읽어들인 정수 값을 저장할 변수의 주소를 전달합니다
        ll cnt = 1; //모두 1로 이루어진 숫자를 저장합니다
        ll ret = 1; //현재 자리수를 저장합니다. 초기값은 1
        while(true){
            if(cnt % n == 0){ // cnt 가 n 으로 나눠지면
                printf("%lld\n", ret);  //현재 자리수 출력 ,  "%lld" :  long long 타입의 정수 값을 출력하기 위한 형식 지정자입니다
                break;
            }else{
                cnt = (cnt * 10) + 1 ; // 10배 하고 1을 더해 새로운 숫자를 만듭니다.
                cout <<  "test:::" << ret;
                ret++;
            }
        }
    }
    return 0;
}
