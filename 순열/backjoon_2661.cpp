#include <bits/stdc++.h>
using namespace std;

/**
    좋은수열
숫자 1, 2, 3으로만 이루어지는 수열이 있다. 임의의 길이의 인접한 두 개의 부분 수열이 동일한 것이 있으면, 그 수열을 나쁜 수열이라고 부른다. 그렇지 않은 수열은 좋은 수열이다.
길이가 N인 좋은 수열들을 N자리의 정수로 보아 그중 가장 작은 수를 나타내는 수열을 구하는 프로그램을 작성하라. 예를 들면, 1213121과 2123212는 모두 좋은 수열이지만 그 중에서 작은 수를 나타내는 수열은 1213121이다.
**/



bool isGoodSeq(const string& seq) {
    int length = seq.length();
    for (int i = 1; i <= length / 2; ++i) {
        if (seq.substr(length - i, i) == seq.substr(length - 2 * i, i)) {
            return false;  // 나쁜 수열
        }
    }
    return true;  // 좋은 수열
}

void solve(int N, string seq) {
    // 기저 사례: 길이가 N인 좋은 수열을 찾으면 출력하고 종료
    if (seq.length() == N) {
        cout << seq << "\n";
        exit(0);
    }
    // 다음 숫자를 선택하여 수열을 만듭니다.
    for (char c = '1'; c <= '3'; c++) {
        string newSeq = seq + c;
        // 만들어진 수열이 좋은 수열인지 확인합니다.
        if (isGoodSeq(newSeq)) {
            solve(N, newSeq);  // 재귀적으로 다음 단계를 진행합니다.
        }
    }
}

int main() {
    int N;
    cin >> N;
    solve(N, "");  // 초기 수열은 빈 문자열로 시작합니다.
    return 0;
}