#include <iostream>
using namespace std;

int main () {
    int y ;
    cin >> y;
    while(true){
        y++;
        int a = y/1000;    //1st digit
        int b = (y/100)%10;// 2nd digit
        int c = (y/10)%10;// 3rd digit
        int d = y % 10;// 4th digit
        if(a != b && a != c && a != d && b != c && b != d && c != d){
            cout << y;
            break;
        }
    }
}
