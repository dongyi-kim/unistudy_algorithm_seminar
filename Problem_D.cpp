/* 2017.08.18 유니스터디 알고리즘 현장 특강
 * Created By. Dongyi Kim
 * 문제 URL : http://edu.goorm.io/learn/lecture/bGVjX2tNelJlXzE0ODc1Nzk2OTk2OTk=/lesson/bGVzX2lzS2xYXzE0OTMzNTI4Njk3NTg=
 */
#include<cstdio>
#include<iostream>

const int MAX_N = 100000;

using namespace std;

//도화지를 덮고있는 색종이의 넓이를 계산하는 함수 
//board[x][y] := 격자 (x,y)를 덮고 있는 색종이의 수
int get_area(int board[][101])
{ 
    int area = 0; 
    //some algorithm



    return area;
}



//하나의 테스트케이스에 대한 데이터를 입력받고
//정답을 계산해 출력하는 함수
void test_case()
{   
    //색종이의 수를 입력받는다 
    int n; 
    scanf("%d", &n);


    int board[101][101]; //100x100 도화지의 각 격자를 원소로 하는 2차원 배열 

    //board배열을 처음에 모두 0으로 초기화한다.
    for(int r = 0 ; r<= 100; r++){
        for(int c = 0; c<= 100; c++){
            board[r][c] = 0;
        }
    }

    //n개의 도화지에 대한 위치를 입력받아서 board배열을 의미에 맞게 채우는 기능 
    //board[x][y] := 격자 (x,y)를 덮고 있는 색종이의 수
    for(int i = 0 ; i < n ; i++)
    {   
        int sr, sc;
        scanf("%d %d", &sc, &sr);
        for(int dr = 0 ; dr < 10 ; dr++){
            for(int dc = 0 ; dc < 10; dc++){
                board[sr+dr][sc+dc] ++;
            }
        }
    }


    //board배열을 넣고 함수를 호출하면 색종이가 겹친 넓이를 계산해주는
    //함수가 있다고 가정하자 
    int answer = get_area(board);

    //그렇다면 우리가 할 일은 출력 뿐!
    return answer;
}
int main()
{   // 숫자의 개수 n과 
    // n개의 정수를 입력받아서 그 합을 출력하는 프로그램
    
    //가장 먼저 테스트케이스의 수를 입력받는다 
    int tc; 
    scanf("%d", &tc);

    for(int i = 0 ; i <tc; i++)
    {   //tc개의 테스트케이스에 대하여 각각 입출력을 수행한다
        test_case();
    }
    
    return 0;
}