#include<iostream>
using namespace std;
int main()
{
    int n;
    int count = 0;
    int arr[1000][3] = {{0}};
    cin >> n;
    for(int i =0; i < n; i++){
        for(int j = 0; j<3; j++){
            cin >> arr[i][j];
        }
         if(arr[i][0] + arr[i][1] + arr[i][2] >= 2){
                count ++;
        }
    }
    cout << count;
    return 0;
}
