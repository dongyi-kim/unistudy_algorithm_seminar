/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 */
 #include<cstdio>
 #include<iostream>
 
 const int MAX_N = 100000;
 
 using namespace std;
 
 
 
//arr[0] ~ arr[n-1]사이에 k라는 값이 존재하는지 검사
// 존재한다면 그 인덱스를 반환하고
// 존재하지 않으면 -1을 반환한다
int find_index(int arr[], int n, int k)
{
    int index = -1;
    //begin of algorithm


    //end of algorithm
    return index;
}
 
 int main()
 {   // 숫자의 개수 n과 찾을 숫자 k를 입력받고  
     // n개의 정수를 입력받아서 그 중 k가 존재하는 지 검사하고 그 위치를 출력하는 프로그램
     int n, k;
     int data[MAX_N];
     
     scanf("%d %d", &n, &k);
     for(int i = 0 ; i < n ; i++){
         scanf("%d", &data[i]);
     }
 
    //이 함수를 호출하면 배열에서 k의 위치가 반환된다고 가정하자
    int answer = find_index(data, n, k);
  
    //그렇다면 우리가 할 일은 출력밖에 없다
    printf("%d\n", answer);
    return 0;
 }