#include <iostream>
using namespace std;
int main (){
    string str1,str2,str3="";
    cin >> str1;
    cin >> str2;
    for(int i = 0; i < str1.length(); i++){
        if(str1[i]==str2[i]){
            str3 += '0';

        }else {
            str3 += '1';
        }
    }
    cout << str3;

}
