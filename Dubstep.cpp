#include <iostream>
using namespace std;

int main(){
    string s;
    cin >>s;
    while(s.find("WUB") != string::npos){
        s.replace(s.find("WUB") , 3 , " ");
    }
    cout << s <<endl;


}
