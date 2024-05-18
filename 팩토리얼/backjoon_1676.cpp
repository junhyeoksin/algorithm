/**
    N!에서 뒤에서부터 처음 0이 아닌 숫자가 나올 때까지 0의 개수를 구하는 프로그램을 작성하시오.
    10
    10 * 9 * 8 * 7 * 6 * 5 * 4 * 3 * 2 * 1
**/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int count = n / 5 + n /25 + n/ 125;
    cout << count << "\n";
    return 0;
}


