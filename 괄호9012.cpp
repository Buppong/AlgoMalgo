//올바른 괄호문자열의 예시
//()(())((()))
//1 닫의 앞에있는여
//2 다른여와 짝 x
//3 가장가까운 여
// 각각의 닫는괄화마다 앞에있는 문자열해서 시간복잡도는
// O(N2)
// 앞에서들어간게 젤마지막에나온다
//가장가깝다는 것은 가장마지막에여는 괄호이다
//스택 앞 짝 x  
#include <iostream>
#include <string>


using namespace std;
string valid (string s){
    int cnt =0; //스택의크기
    for(int i = 0; i<s.size(); i++){
        if (s[i] == '('){ //여는괄호의의미가나왔으면
            cnt += 1; // 푸쉬의의미를
        }else {  //닫는괄호에 대해서는 
            cnt -=1; //-1값을 출력합니다
        }
        if(cnt <0){ //여는괄호가 부족한경우에대해서의미합니다
            return"NO";
        }
    }//////////////////////////스택이 비어있다 
        if (cnt ==0){
            return "YES"; ///올바른괄호문자이다
        }else{
            return "NO";//닫는괄호가 부족하다.
        }       
}

int main(){
    int t;
    cin >> t;
    while (t--){
        string s;
        cin >> s;
        cout << valid(s) <<'\n';
    }
    return 0;
}