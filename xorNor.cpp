#include<iostream>
using namespace std;
int main()
{
    string a , b;
    cin >>a >>b;
    if (a.length()!=b.length())
    {
        cout << "NO"<< endl;
        return 0;
    }
    if ((a.find('1')!=string::npos) == (b.find('1')!=string::npos) )
    {
        cout << "YES"<< endl;
    }else{
        cout << "NO" << endl;
    }
    
    
    return 0;
}