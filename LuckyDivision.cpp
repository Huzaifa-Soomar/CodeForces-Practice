#include <iostream>
using namespace std;
int main (){
    int n ;
    cin >> n;
    int lucky_num [] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    int size = sizeof(lucky_num)/sizeof(lucky_num[0]);
    for(int i = 0; i < size; i ++){
        if( n ==lucky_num[i] || n % lucky_num[i] == 0 ){
        cout << "YES";
        return 0;
    }
    }
    cout << "NO";



}
