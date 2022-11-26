# AlgoMalgo
algorithms , coding test practices

## 시간복잡도 

* 시간복잡도를 이용하면 작성한 코드가 시간이 얼마나 걸렸는지 알수있다
* 표기법으로는 대문자 O를 사용한다.
* 입력의크기 N에 대해서 시간이 얼마나 걸릴지 나타내는 방법
* 최악의경우 시간이 얼마나 걸릴지 알수있다.


예시 )

총 N명의 사람이 식당에 방문했다 식당에는 메노ㅠ가 M개 있고 , 메뉴판이1개 있다 사람1명이 메뉴판을 읽는데 걸리는 시간은 O(M)이다.
주문한 모든메뉸는 동시에 나왔고 각사람i가 식사를 하는 시간은 A이다. 각사람이 계싼을 하는 시간은 O(P)이다. 각사람이 메뉴판에 있는 모든메뉴를 읽는 시간복잡도 O(NM) 모든사람이 식사를 마치는데 걸리는 시간  o(max(A))

시간복잡도는 소스를 보고 계산 할수도 있고 먼저 계산해볼 수도 있다. 



<pre><code>
//예시1//
0부터 N까지 합을 구해라
int sum = 0;
for(int i=1; i<=N; i++){
    sum += i;
}

//예시 2//
int sum =0;
for(int i= 1; i<=N; i++>){
    for(int j=1; j<=N; j++>){
        if(i==j){
            sum +=j;
        }
    }
}

//예제3//
int sum = 0;
sum = N*(N+1)/2;
</code></pre>

## 사용한 메모리
보통가장 많은공간을 차지하는 것은 보통배열이다

- 배열이 사용한공간: 배열의크기 x자료형의 크기

int a[100][100]  = 100x 100x4b 

## c++ 입출력
* c++ 의경우에는 scanf/printf, cin ,cout을 사용할수있다

* cin/cout은 scanf/printf보다 느리기때문에 , 입/출력이 많은 문제의 경우에는 scanf/printf를 사용하는 것이 좋다.
* cin/cout의경우 아래 세줄을 추가하면 scanf/printf만큼 빨라진다
* c++ 빈줄을출력해야하면 \n이 훨씬빠르다.
<pre><code>
ios_base::Sync_with_stdio(false);
cin.tie(NULL;
cout.tie(NULL);
</code></pre>
