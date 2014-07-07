#include <iostream>
using namespace std;

char board[9][9];
int sign[9][9] = {0};
int times = 0;
void solution(int i,int j,int n,int k)
{

    if(k == 0)
    {
        times++;
        return;
    }
    
    if(i < n && j < n)
    {
        int sign1 = 0;
        for(int ii = 0;ii < n;ii++)
        {
            if(sign[ii][j] == 1)
            {
                sign1 = 1;
                solution(i,j + 1,n,k);
                break;
            }
        }
        if(sign1 == 0)
        {
            for(int jj = 0;jj < n;jj++)
            {
                if(sign[i][jj] == 1)
                {
                    sign1 = 1;
                    solution(i + 1,0,n,k);
                    break;
                }
            }
        }
        if(sign1 == 0)
        {
            if(board[i][j] == '.')
            {
                solution(i,j + 1,n,k);
            }
            else
            {
                sign[i][j] = 1;
                k--;
                solution(i + 1,0,n,k);
                sign[i][j] = 0;
                k++;
                solution(i,j + 1,n,k);
            }
        }
    }
    else
    {
        if(j == n)
        {
            solution(i + 1,0,n,k);
        }
        if(i == n)
        {
            return;
        }
    }


    return;
}
int main(void)
{
    int n,k;
    while(cin>>n>>k)
    {
        if(n == -1 && k == -1)
        {
            break;
        }
        else
        {
            for(int i = 0;i < n;i++)
            {
                for(int j = 0;j < n;j++)
                {
                    cin>>board[i][j];
                }
            }
        }
        solution(0,0,n,k);
        cout<<times<<endl;
        times = 0;
            
    }


    return 0;
}