#include <iostream>
using namespace std;

int main () {
    int count = 0;
   string n ;
   cin >> n;
   for(int i =  0 ; i < n.length(); i++){
    if(n[i] == '4' || n[i]== '7'){
        count ++;
    }
   }
   string countStr = to_string(count);
   for(int  i = 0; i <countStr.length(); i++ ){
    if(countStr[i]!= '4' && countStr[i]!= '7'){
        cout  << "NO";
        return 0;
    }
   }
   cout << "YES";


}
