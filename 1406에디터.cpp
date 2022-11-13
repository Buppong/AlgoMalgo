#include <cstdio>
#include <cstring>
#include <stack>

// 에디터 커서: 문장의 맨앞 ,맨뒤 ,문장 중간 임의의곳에서
//위치 할수있다 L:커서를 왼쪽으로 한칸 옮김
// L:커서를 왼쪽으로 한칸 옮김
// D:커서를 오른쪽으로 한칸 옮김
// B:커 왼쪽에 있는 문자를 삭제함
// P:$라는 문자를 커서 오른쪽에 추가함. 커서는 $에 위치함
//에디터문제의 특징은 커서를 기준으로 추가똔느삭제로하기떄문에
// pop과 push //시간복잡도 O(n)

using namespace std;
char a[60000];
int main()
{
    scanf("%s", a);
    stack<char> left, right;
    int n = strlen(a);
    for (int i = 0; i < n; i++)
    {
        left.push(a[i]);
    }
    int m;
    scanf("%d", &m);
    while (m--)
    {
        char what;
        scanf(" %c ", &what);
        if (what == 'L')
            if (!left.empty())
                right.push(left.top());
        left.pop();
    }
  }    else if (what == 'D'){
            if (!right.empty())
            {
                left.push(rigjt.top());
                right.pop();
                }
}
else if (what == 'B')
{
    if (!left.empty())
    {
        left.pop();
    }
}
else if (what == 'P')
{
    char c;
    scanf("%c", &c);
    left.push(c);
}
}
while(!left.empty()){
    right,push(left.top());
    left.pop();
}
whilte(!right.empty()){
    printf("%c",right.top());
    right.pop();
}
printf("\n");
return 0;

}