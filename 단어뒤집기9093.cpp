#include <iostream>
#include <stack>
#include <string>

using namespace std;
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
        string str;
        getline(cin, str);
        str += '\n';
        stack <char> s;
        for (char ch : str){
            if(ch == ' ' || ch == '\n'){
                while (!s.empty()){
                    cout<< s.top();
                    s.pop();
                }
                cout <<ch;
            } else {
                s.push(ch);
            }
        }
        
        }
    return 0;
}



//12345 => 54321
//N개의 수를 스택에 넣었다가 빼면 순서가 역순이된다
// 알파벳을 스택에넣고 공백이나 문자열이 끝이면 스택에서
//모두빼내서 역순을만든다.