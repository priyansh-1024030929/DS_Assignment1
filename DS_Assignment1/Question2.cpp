#include <iostream>
using namespace std;

int main() {
	int array[] = { 5,5,6,7,8,3,5,4,8,5,3,13,12,17,17,18,53,52,51,47,35 };
	int size = sizeof(array) / sizeof(array[0]);
	for (int i = 0; i < size - 1 ; i++) {
		for (int j = 0; j < i - size - 1; j++) {
			if (array[j] > array[j + 1]) {
				int temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < size; i++) {
		cout << array[i] << " ";
	}
	return 0;
}