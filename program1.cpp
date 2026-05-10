#include <iostream>

using namespace std;
int main() {
setlocale(LC_ALL, "Russian");  
    int n; 
    cout << "¬ведите пор€док матрицы n: ";
    cin >> n;
    int matrica[10][10];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            matrica[i][j] = 0;
        }
    }
    
    
    for (int i = 0; i < n; i++) {
        matrica[i][i] = i + 1;          
        matrica[i][n - 1 - i] = n - i; 
    }

    cout << "\n—формированна€ матрица:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrica[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

