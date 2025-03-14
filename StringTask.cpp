#include <iostream>
#include <cctype>
using namespace std;

int main (){
    string str , result = "";
    //string vowels = "aoyeui";
    cin >> str;
    for(int i = 0; i < str.length();  i ++){
        char ch = tolower(str[i]);
        if(ch!= 'a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' && ch!='y'){
            result += ".";
            result += ch;
        }
    }
    cout << result;

}
