/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX0ZubmdkXzE0OTQ2Mzk2MTc5MDM=
 */
#include<cstdio>
#include<iostream>
#include<algorithm>

const int MAX_N = 100000;

using namespace std;

//arr[0] ~ arr[n-1]에서 두 숫자 x, y 를 선택해 
// s == x + y 를 만들 수 있다면 true를 반환하는 함수
bool canMake(int arr[], int n, int s)
{
    
}

int main()
{  
    int n, m;
    int data[MAX_N];

    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &data[i]);
    }


    int answer = 0;
    for(int i = 0 ; i < m ; i ++)
    {   //당첨 가능 여부를 확인할 m개의 번호 target에 대하여
        int target;
        scanf("%d", &target);

        //data[0] ~ data[n-1]에서 두 숫자의 합으로 
        //target을 만들 수 있는지 여부를 반환하는 함수가 있다고 가정하자 
        bool ok = canMake(data, n, target);

        if(ok)
        {   //ok가 true다? target을 두 수의 합으로 만들 수 있다.
            answer ++;
        }
    }

    printf("%d\n", answer);    
    return 0;
}