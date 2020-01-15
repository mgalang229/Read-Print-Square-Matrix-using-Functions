#include <iostream>
using namespace std;

void matread(int[10][10], int, int);
void matprint(int[10][10], int, int);

int main(){
    
    int n, m;
    int a[10][10];
    cout << "Enter the order of matrix: ";
    cin >> m >> n;
    cout << "Enter matrix: ";
    matread(a, m, n);
    cout << "\nThe given matrix is: \n";
    matprint(a, m, n);
    
    return 0;
}

void matread(int x[10][10], int m, int n){
    int i, j;
    for(i = 0;i < m; i++){
        for(j = 0;j < n; j++){
            cin >> x[i][j];
        }
    }
}

void matprint(int x[10][10], int m, int n){
    int i, j;
    for(i = 0;i < m; i++){
        for(j = 0;j < n; j++){
            cout << " " << x[i][j];
        }
        cout << "\n";
    }
}
