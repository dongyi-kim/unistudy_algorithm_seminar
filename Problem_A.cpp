/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX0VwbUJjXzE0ODk0OTE0MTE4NDY=
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 100000;

using namespace std;


//arr[0] ~ arr[n-1]에서 p이하인 값들의 합을 반환하는 함수
int get_sum(int arr[], int n, int p){

}

//arr[0] ~ arr[n-1]에서 p이하인 값들의 갯수를 반환하는 함수
int get_cnt(int arr[], int n, int q){


}

//문제의 정답을 출력하는 함수
void print_answer(int arr[], int n, int p, int q)
{
    int s, c;
    s = get_sum(arr, n, p); //arr에서 p이하인 값들의 합 
    c = get_cnt(arr, n, p); //arr에서 p이하인 값들의 수
    printf("%d %d\n", c, s);
    if( s <= q ){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}


int main()
{   
    int n, p, q;
    int data[MAX_N];

    //데이터를 입력받는다 
    scanf("%d %d %d", &n, &p, &q);
    for(int i = 0 ; i < n ; i ++){
        scanf("%d", &data[i]);
    }

    //이 함수를 호출하면 답이 출력된다고 가정하자
    print_answer(arr, n, p, q);
    return 0;
}