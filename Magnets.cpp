#include <iostream>
using namespace std;
int main ( ) {
    int n ,count  =1 ;
    string prev_group , group;
    cin >> n;
    cin >>prev_group;
    for(int  i = 1 ; i < n ; i++){
      cin >> group;
      if(group != prev_group){
        count++;
      }

      prev_group = group;
    }
    cout  << count;





}
