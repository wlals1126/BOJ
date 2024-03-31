#include <iostream>
#include <deque>
#include <cmath>
#include <algorithm>

using namespace std;
int main(){
    deque<int> cases;
    int rep;
    cin >> rep;
    for(int i = 0; i < rep; i++){
        int tmp;
        cin >> tmp;
        cases.push_back(tmp);
    }
    
    sort(cases.begin(),cases.end());

    int removeN = round(rep *0.15);

    for(int i = 0; i < removeN; i++){
        cases.pop_front();
        cases.pop_back();
    }

    int avg = 0;
    for(int i : cases){
        avg += i;
    }

    if(rep == 0){
        cout << 0;
    } else {
        cout << round((double) avg/cases.size());
    }
}