/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 100000;

using namespace std;



//arr[0] ~ arr[n-1]사이에 k와 일치하는 값의 개수를 반환하는 함수 
int get_count(int arr[], int n, int k)
{
    int cnt = 0;
    //begin of algorithm



    //end of algorithm
    return cnt;
}

int main()
{   // 숫자의 개수 n과 찾을 숫자 k를 입력받고  
    // n개의 정수를 입력받아서 그 중 k와 일치하는 값의 개수를 반환하는 함수
    int n, k;
    int data[MAX_N];
    
    scanf("%d %d", &n, &k);
    for(int i = 0 ; i < n ; i++){
        scafn("%d", &data[i]);
    }
 
    //이 함수를 호출하면 배열에서 k의 갯수가 반환된다고 가정하자
    int answer = get_count(data, n, k);
  
    //그렇다면 우리가 할 일은 출력밖에 없다
    printf("%d\n", answer);

    return 0;
 }