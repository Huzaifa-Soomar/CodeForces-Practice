#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n;
    cin >> n;
    int arr[n] ;
    for(int i = 0; i < n ; i++){
      cin >> arr[i];
    }
    // for(int i = 0 ; i < n -1; i++){
    //     for(int j = 0 ; j < n-i-1; j++){
    //         if(arr[j] > arr[j+1]){
    //             swap(arr[j],arr[j+1]);
    //         }
    //     }
    // }

    // is ki behn ka maze : ) ab hogi sorting pharo 
    sort(arr, arr + n);


    for(int i = 0; i < n ; i++){
        cout << arr [i] << " ";
    }



}
