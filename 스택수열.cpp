#include <iostream>
#include <stack>
#include <string>

//스택수열
//스택에 push 되는 순서는 오름차순이다



using namespace std;

int main() {
    stack<int> s;
    int n;
    string ans;

    cin >> n;


    int m = 0; //스택이들어간마지막

    while( n--){
        int x; // m에서 x까지 해서
        cin >> x;
        if (x > m){
            while (x> m){
                s.push(++m);
                ans += '+';
            }
            s.pop();
            ans += '-';
        }else {
            bool found = false;
            if( !s.empty()){
                int top = s.top();
                s.pop();
                ans += '-';
                if (x == top){
                    found = true;
                }
            }
            if (!found){
                cout << "NO" <<'\n';
                return 0;
            }
        }

    }
    for (auto x: ans){
        cout << x << '\n';
    }
    return 0;
}


