#include <iostream>
using namespace std;

int main(){
    int prob , k , count   = 0;
    cin >> prob >> k;
    int time  = 240 - k;
    for(int i =  1; i <= prob; i++){
        int time_req =  5 * i;
        if(time_req <= time){
            count++;
            time -=time_req;
        }else{
            break;
        }
    }
    cout << count << endl;
}
