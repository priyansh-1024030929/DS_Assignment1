#include <iostream>
using namespace std;

int main()
{
    int arr[3][2] = { {1,2},{3,4},{5,6} };
    int sum = 0;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 2; j++) {
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum += arr[j][i];
        }
        cout << sum << endl;
        sum = 0;
    }
}
