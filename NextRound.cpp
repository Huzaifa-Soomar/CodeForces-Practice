#include<iostream>
using namespace std;
int main()
{
    int n , k;
    cin >> n  >> k;
    int qualifying_score = 0;
    int score[n] ;
    for (int i = 0; i < n; i++)
    {
        cin >> score[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (score[i] >= score[k-1] && score[i] > 0)
       {
         qualifying_score++;
       }
               
    }
    
    cout<< qualifying_score;
    
    return 0;
}