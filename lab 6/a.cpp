#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    string s;
    cin >> n >> s;

    string order = "aeioubcdfghjklmnpqrstvwxyz"; 

    for (char c : order)        
        for (char x : s)        
            if (x == c) cout << x;

    cout << endl;
    return 0;
}
