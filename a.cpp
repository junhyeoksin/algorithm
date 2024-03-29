#include <bits/stdc++.h>
using namespace std;
//typedef
// typedef int i;
// int main(){
//     i a = 1;
//     cout << a << '\n';
//     return 0;
// }

//define :  #define <이름> <값>
// #define PI 3.14159
// #define loop(x,n) for(int x =0; x<n ; x++)
// typedef int i;
// int main(){
//     cout << PI << '\n';
//     i sum = 0;
//     loop(i, 10){
//         sum += i;
//     }
//     cout << sum << '\n';
//     return 0;
// }

// 입력: cin, scanf
// cin : 개행문자 직전까지 입력을 받음,  cin은 개행문자(띄어쓰기, 엔터)직전 까지 입력을 받습니다.  scanf : 형식지정해서 입력
// string a;
// int main(){
//     cin >> a;
//     cout << a << '\n';
//     return 0;
// }

//scanf : 첫번째 매개 변수로 받는 형식을 지정해서 입력을 받습니다.
// int scanf (const char * format, ....);
// %d는 int 타입.
// %lf는 double 타입.
// %c는 char 타입을 받습니다.
// int a;
// double b;
// char c;
// int main(){
//     scanf("%d %lf %c", &a, &b, &c);
//     printf("%d\n", a);
//
//     scanf("%d.%d", &a, &b);
//     printf("\n%d  %d\n", a, b);
//
//      return 0;
// }

//getline : getline()은 기본적으로 개행 문자 ('\n')를 줄의 끝으로 인식하고 그 개행 문자직전까지 입력을 받습니다. || 다른 종결 문자를 사용하고 싶다면, 이를 세 번째 인자로 전달
//cin : 개행문자 직전까지 받지만 한번에 받는 방법이 있다.
// string s;
// string e;
// int main(){
//     getline(cin, s);
//     getline(cin , e, '.');
//     cout << s << '\n';
//     cout << e <<  '\n';
//     return 0;
// }
// int T;
// string s;
// int main(){
//     cin >> T;
//     string bufferflush;
//     getline(cin, bufferflush);
//     for(int i =0; i<T; i++){
//         getline(cin, s);
//         cout << s << "\n";
//     }
//     return 0;
// }

string title = "제목을 지정해주세요";
string context = "네용을 확인해주세요.";
int main(){
    cout << title << '\n';
    cout << title << " " << context << '\n';
    return 0;
}







