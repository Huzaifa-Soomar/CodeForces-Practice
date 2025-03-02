#include <iostream>
using namespace std;

int main (){
   int n , even_count = 0,odd_count = 0 ;
   int even_index , odd_index;
   cin >> n ;
   int num[n];
   for(int i = 0 ; i < n ; i++){
    cin >> num[i];
    if(num[i] % 2 == 0){
        even_count++;
        even_index = i +1;
    }else{
        odd_count++;
        odd_index = i +1;
    }
   }
   if(even_count == 1){
    cout << even_index;
   }else{
       cout << odd_index;
   }



  return 0;
}
