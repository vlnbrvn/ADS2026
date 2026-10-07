#include <iostream>
using namespace std;

int a[1000][1000];

int main() {
    int n, m;
    cin >> n >> m;

    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    for (int j = 0; j < m; j++)              
        for (int i = 0; i < n; i++)
            for (int k = i + 1; k < n; k++)
                if (a[i][j] < a[k][j])       
                    swap(a[i][j], a[k][j]);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) cout << a[i][j] << " ";
        cout << "\n";
    }
    return 0;
}
