#include <bits/stdc++.h>
using namespace std;

string num;
int main(){
    while(true){
        cin >> num;
        if(num == "0") break;

        string tmp  = num;
        reverse(tmp.begin(), tmp.end());
        if(num == tmp ) cout << "yes"<< "\n";
        else  cout << "no"<< "\n";
    }
    return 0;
}