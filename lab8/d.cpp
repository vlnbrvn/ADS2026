#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  long long prev = 0;
  string s;
  for(int i=0; i<n; i++){
    long long h;
    cin >> h;
    long long c = (h - prev) / (1LL << i);
    s += char('a' + c);
    prev = h;
  }
  cout << s << endl;
    return 0;
}
