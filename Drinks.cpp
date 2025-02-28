#include <iostream>
using namespace std;

int main(){
    int n;
    double sum = 0.00;
    cin >> n ;
    for(int  i = 0; i< n ; i++){
        cin >> i;
        sum +=i;
    }

    double result = sum/n;
    cout << result;
}
