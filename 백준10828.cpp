
//https://www.acmicpc.net/problem/10828

#include <iostream>
#include <stack>
#include <string>

using namespace std;
struct Stack {
    int data[10000];
    int size;
    Stack(){
        size = 0;
    }
    void push(int num){ //push로 한칸씩 밀린다는것
        data[size] =num;
        size += 1; /
    }
    bool empty(){ //empty연산은 스택이 비어있는지 없는지 여부를 체크하는것입니다.
        if(size == 0){
            return true;
        }
        else {
            return false;
        }
    }
    int pop() {
        if (empty()){
            return -1;           
        }
        else {
            size -=1;
            return data[size];
        }
    }
    int top(){
        if(empty()){
            return -1;
        }
        else {
            return data[size-1];
        }

    }
};

int main(){
    int n;
    cin >> n; 

    Stack s;

    while (n--){
        string cmd;
        cin >> cmd;
        if (cmd == "push"){
            int num;
            cin >> num;
            s.push(num);
        }else if(cmd == "top"){
            cout << (s.empty() ? -1: s.top()) << '\n';
        }else if(cmd == "size"){
            cout << s.size <<'\n';
        }else if(cmd == "empty"){
            cout << s.empty() <<'\n';
        }else if(cmd == "pop"){
            cout << (s.empty()? -1: s.top()) <<'\n';
            if (!s.empty()){
                s.pop();
            }
        }
    }
    return 0;
}


// 스택은위에서 푸시하고 팝하기떄문에 이안에서 뭐가있는지 알수가없습니다.