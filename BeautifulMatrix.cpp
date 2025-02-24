#include<iostream>
using namespace std;
int main()
{
    int arr[5][5] ;
    int moves = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 1)
            {
                 moves = abs(i-2) + abs(j-2);
                
            }
            
        }
        
    }
    cout << moves;
    
    return 0;
}