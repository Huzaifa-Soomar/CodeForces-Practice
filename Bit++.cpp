#include <iostream>
using namespace std;
int main(){
    int x=0 , n;
    cin >> n;
    for(int i = 0; i< n ; i++){
        string operate;
        cin >> operate;
     if(operate == "X++" ||operate == "++X"){
        x++;
    }else if(operate == "X--" ||operate == "--X"){
        x--;
    }
    }
    cout << x;

}
