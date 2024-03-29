// split 함수 만들기
#include <bits/stdc++.h>
using namespace std;
vector<string> split(string input, string delimeter){
    vector<string> ret;
    long long pos = 0;
    string token = "";
    while((pos = input.find(delimeter)) != string::npos){
        token = input.substr(0,pos);
        ret.push_back(token);
        input.erase(0,pos + delimeter.length());
    }
    ret.push_back(token);
    return ret;

}
int main(){
    string s = "안녕하세요 반갑습니다. 스플래시 확인을 합니다.", d = " ";
    vector<string> a = split(s,d);
    for(string b:a) cout << b << "\n";
}