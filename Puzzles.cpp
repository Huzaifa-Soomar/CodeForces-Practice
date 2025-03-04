#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int n , m ;
    cin >> n >> m;
    int puzzles[m];
    for(int i = 0 ; i < m ; i++){
        cin >> puzzles[i];
    }

    sort(puzzles, puzzles + m);
    int min_diff= 10000;
    for(int i = 0 ; i<= m-n; i++){
        int small = puzzles[i];
        int largest = puzzles[i + n -1];
        int diff = largest - small;

        if(diff < min_diff){
            min_diff = diff;
        }
    }
    cout << min_diff << endl;

}
