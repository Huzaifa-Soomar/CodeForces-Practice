#include <iostream>
#include <cctype>
using namespace std;
int main()
{
    int n;
    string s;
    cin >> n >> s;
    string letter = "";
    for (int i = 0; i < n; i++)
    {
        char ch = tolower(s[i]);
        if (letter.find(ch) == string::npos)
        {
            letter += ch;
        }
    }
    if (letter.length() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}