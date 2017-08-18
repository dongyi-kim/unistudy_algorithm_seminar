/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim 
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 200000;

using namespace std;

//arr[0] ~ arr[n-1]에 중복이 존재한다면 true 그렇지 않으면 false를 반환하는 함수
bool isDuplicated(int arr[], int n)
{


    //if( ~~ ){
        return true;
    //}else{
        return false;
    }
}

int main()
{   
    //데이터의 수와 데이터를 입력받는다
    int n;
    int data[MAX_N];

    scanf("%d", &n);
    for(int i = 0; i<n; i++){
        scanf("%d", &data[i]);
    }

    //배열에 중복 원소가 존재하는지 여부를 돌려주는 함수가 있다고 가정하자 
    bool duplicated = isDuplicated(data, n);


    //그렇다면 그 반환값에 따라 다르게 출력해주면 된다.
    if(duplicated)
    {
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    
    return 0;
}