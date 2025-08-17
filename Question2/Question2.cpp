#include <iostream>
using namespace std;

int main() {
	int arr[] = { 5,5,6,7,8,3,5,4,8,5,3,13,12,17,17,18,53,52,51,47,35 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	int j = 0;
	for (int i = 1; i < n; i++) {
		if (arr[i] != arr[j]) {
			j++;
			arr[j] = arr[i];
		}
	}
	for (int i = 0; i <=j ; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}
