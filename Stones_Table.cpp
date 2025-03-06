#include <iostream>
using namespace std;

int main(){
    int n , count  = 0;
    cin >> n;
    for(int i = 0  ; i <  n ; i++){
        string color;
        cin >> color;
        if(color[i]!=color[i]){
            count ++;
        }else{
            count  = 0;
        }
    }
    cout << count;


}

