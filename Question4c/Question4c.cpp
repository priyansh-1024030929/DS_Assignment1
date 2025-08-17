#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = {{1,2},{3,4},{5,6}};
    int tr[2][3];
    for (int i = 0; i < 3 ; i++ ) {
        for (int j = 0; j < 2; j++) {
            tr[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            cout << tr[i][j] << " ";
        }
        cout << endl;
    }
}
