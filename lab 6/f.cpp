#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstdio>
using namespace std;

double points(string m) {
    if (m == "A+") return 4.00;
    if (m == "A")  return 3.75;
    if (m == "B+") return 3.50;
    if (m == "B")  return 3.00;
    if (m == "C+") return 2.50;
    if (m == "C")  return 2.00;
    if (m == "D+") return 1.50;
    if (m == "D")  return 1.00;
    return 0;                                
}

int main() {
    int n;
    cin >> n;

    
    vector<pair<double, pair<string, string>>> v;

    for (int i = 0; i < n; i++) {
        string last, first;
        int k;
        cin >> last >> first >> k;

        double sum = 0;
        int credits = 0;
        for (int j = 0; j < k; j++) {
            string mark;
            int c;
            cin >> mark >> c;
            sum += points(mark) * c;
            credits += c;
        }
        v.push_back({sum / credits, {last, first}});
    }

    sort(v.begin(), v.end());

    for (auto &p : v)
        printf("%s %s %.3f\n", p.second.first.c_str(), p.second.second.c_str(), p.first);
    return 0;
}
