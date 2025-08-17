#include <iostream>
using namespace std;
int num = 0, size[50];
int* creator[50];

void menu();

void create() {
	num++;
	int n1;
	cout << endl << "How big is the array: ";
	cin >> n1;
	::size[num - 1] = n1;
	creator[num - 1] = new int[n1];
	cout << "Enter the values: ";
	for (int i = 0; i < n1; i++) {
		cin >> creator[num - 1][i];
	}
	menu();
}

void display() {
	if (num != 0) {
		int dis;
		cout << "\nWhich array to display:-";
		for (int i = 0; i < num; i++) {
			cout << endl << "Array " << i+1;
		}
		cout << "\n";
		cin >> dis;
		for (int i = 0; i < ::size[dis-1]; i++) {
			cout << creator[dis-1][i] << " ";
		}
	}
	else {
		cout << "Create an array first!\n";
	}
	menu();
}

void insert() {

}

void del() {

}

void search() {

}

void menu() {
	int i;
	cout << endl << "---MENU---\n1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
	cin >> i;
	switch (i) {
	case 1:
		create();
		break;
	case 2:
		display();
		break;
	case 3:
		insert();
		break;
	case 4:
		del();
		break;
	case 5:
		search();
		break;
	case 6:
		break;
	default:
		cout << "Invalid Input";
	}
}

int main() {
	::menu();
	return 0;
}
