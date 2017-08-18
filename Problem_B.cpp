/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX1lYa2FLXzE0OTA5NzMzMjk2OTE=
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 100000;

using namespace std;

//자기 왼쪽 값보다 큰 값을 가지는 수의 갯수를 반환하는 함수
int get_rev(int arr[], int n)
{
    int cnt = 0;
    //begin of algorithm

    //end of algorithm
    return cnt;
}

//문제의 정답을 출력하는 함수
void print_answer(int arr[], int n)
{
    int revcnt = 0;
    //자기 오른쪽 원소보다 큰 값을 가지는 원소의 수를 계산하는 함수
    revcnt = get_rev(arr, n); 

    if( revcnt == 0 )
    {
        printf("YES\n");
    }else
    {
        printf("NO\n");
    }
}

int main()
{   
    int n;
    int data[MAX_N];

    //데이터를 입력받는다 
    scanf("%d %d %d", &n);
    for(int i = 0 ; i < n ; i ++){
        scanf("%d", &data[i]);
    }

    //이 함수를 호출하면 답이 출력된다고 가정하자
    print_answer(arr, n, p, q);
    return 0;
}