#include <iostream>
using namespace std;

int main(){
    string game;
    int n , anton = 0 , danik = 0;
    cin >> n >> game;
    for(int  i = 0 ; i < n ; i++){
        if(game[i]=='A'){
            anton++;
        }else if (game[i]=='D') {
           danik++;
        }
    }
    if(anton == danik){
        cout << "Friendship" << endl;
    }else if (anton > danik){
        cout << "Anton" << endl;
    }else{
        cout  << "Danik" << endl;
    }
}
