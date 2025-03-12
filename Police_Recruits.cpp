#include <iostream>
using namespace std;

int main (){
    int n , officers = 0 , untreated = 0 , x;
    cin >> n;
    for(int i = 0 ; i < n; i++){
        cin >> x;
        if(x >  0){
            officers+=x ;
        }else if(x == -1){
            if(officers >  0){
                officers--;
            }else{
                untreated++;
            }
        }
    }
    cout << untreated << endl;

}
