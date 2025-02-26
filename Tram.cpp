#include <iostream>
using namespace std;
int main (){
    int n , current_passengers = 0 , max_cap = 0;
    cin >> n;
    for(int i =0; i < n; i++){
        int a ,b;
        cin >> a >> b;
        current_passengers = current_passengers -a + b;
        if(current_passengers > max_cap){
            max_cap = current_passengers;
        }

    }
    cout << max_cap;


  return 0;
}
