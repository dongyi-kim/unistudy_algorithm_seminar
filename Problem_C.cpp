/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX3NERlVFXzE0OTMxNDEyOTIwMzE=
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 100000;

using namespace std;


//arr[0]~arr[n-1]에 대하여 
//번호 i가 등장한 횟수를 table[i]에 기록해주는 함수
void make_table(int arr[], int n, int table[])
{
    //계산하기 전 모든 칸을 0으로 초기화한다.
    for(int number = 0 ; number <= 9999; number++)
    {
        table[number] = 0;
    }

    for(int i = 0 ; i < n ; i ++)
    {   //모든 i와 모든 번호 arr[i]에 대하여 
        int number = arr[i];

        //해당 number 인덱스에 해당하는 table 배열의 원소를 증가시킨다 
        table[number] ++;

        // !! number에는 등장했던 모든 번호가 차례대로 한번 씩 수행된다
    }
}


//n개의 정수가 있는 배열 arr에서 가장 여러 번 등장한 숫자를 반환하는 함수 
int get_frequent_number(int arr[], int n)
{ 
    int answer = arr[0];
    int frequency = 0;
    //0000~9999사이의 모든 번호 number에 대하여
    for(int number = 0 ; number <=9999; number ++)
    {
        //배열 arr에서 number가 등장한 횟수를 반환하는 함수라 하자 
        int count = get_count(arr, n, number); 
        //count가 가장 큰 number가 이 함수의 정답이 된다 
        if(count > frequency)
        {
            answer = number;
            frequency = count;
        }
    }
    return answer;
}


int main()
{   // 숫자의 개수 n과 
    // n개의 정수를 입력받아서 그 합을 출력하는 프로그램
    
    int n;
    int data[MAX_N];
    
    scanf("%d", &n);
    for(int i = 0 ; i < n ; i++){
        scafn("%d", &data[i]);
    }

    //배열에서 가장 빈도수가 높은 정수를 반환하는 함수가 있다고 가정하자
    int answer = get_frequent_number(data, n);

    //그렇다면 우리가 할 일은 출력 뿐이다 
    printf("%04d\n", answer);

    return 0;
}