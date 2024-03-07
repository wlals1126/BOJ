#include <iostream>
#include <algorithm>

using namespace std;

string bigNum_Add(string a, string b) {
    
    long long res=0, al=a.length(), bl=b.length();
    string c;

	for(long long i=0; i<al || i<bl; i++) {
        if(i < al)
            res += a[al-i-1]-'0';
        if(i < bl)
            res += b[bl-i-1]-'0';
            
        c += (res%10)+'0';
        res /= 10;
    }
     
    if(res) c += res+'0';

    reverse(c.begin(), c.end());
    
    return c;
}

int main(int argc, char const *argv[]){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long N;
    string answer = "0";
    cin >> N;

    for(int i = 1; i < N; ++i)
        answer = bigNum_Add(answer, to_string(i * N + i));

    cout << answer << "\n";
    return 0;
}