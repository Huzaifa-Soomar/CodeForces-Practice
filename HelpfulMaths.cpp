#include <iostream>
#include <algorithm>
using namespace std;

int main (){
    string a;
    cin >> a;
    int arr[100];
    int size = 0 ;
    for(int  i = 0; i < a.length(); i++){
        if(a[i] >= '1' && a[i] <= '3' ){
            arr[size++] = a[i] - '0'; //converts char into num
        }
    }
    sort(arr , arr + size);
    for(int i = 0 ; i < size; i++){
        cout << arr[i];
        if(i < size -1){
            cout << "+";
        }
    }
    return 0;

}
