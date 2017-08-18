/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX0ZubmdkXzE0OTQ2Mzk2MTc5MDM=
 */
#include<cstdio>
#include<iostream>
#include<algorithm>

const int MAX_N = 100000;

using namespace std;

int main()
{  
    int n, m;
    int data[MAX_N];

    scanf("%d %d", &n, &m);
    for(int i = 0 ; i < n ; i ++)
    {
        scanf("%d", &data[i]);
    }


    for(int i = 0 ; i < m ; i ++)
    {   //당첨 가능 여부를 확인할 m개의 번호 target에 대하여
        int target;
        scanf("%d", &target);

        //가능한가?


    }
    
    return 0;
}