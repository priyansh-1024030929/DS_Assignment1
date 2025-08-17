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
	if (num != 0) {
	int ins,pos,val;
	cout << "\nWhich array to add data to:-";
	for (int i = 0; i < num; i++) {
		cout << endl << "Array " << i + 1;
	}
	cout << "\n";
	cin >> ins;
	cout << "The array has " << ::size[ins - 1] << "values. Value to be inserted at which position: ";
	cin >> pos;
	if (pos < ::size[ins - 1]) {
		cout << "Enter data value: ";
		cin >> val;
		//WIP
	}
	else {
		cout << "Invalid Input";
	}
}
else {
	cout << "Create an array first!\n";
}
}

void del() {
	if (num != 0) {
	int del, pos;
	cout << "\nWhich array to delete data from:-";
	for (int i = 0; i < num; i++) {
		cout << endl << "Array " << i + 1;
	}
	cout << "\n";
	cin >> del;
	cout << "The array has " << ::size[del - 1] << "values. Position of the value to be deleted: ";
	cin >> pos;
	for (int i = pos; i < ::size[del - 1]-pos+1; i++) {
		creator[del - 1][i] = creator[del - 1][i + 1];
	}
	::size[del - 1] -= 1;
}
else {
	cout << "Create an array first!\n";
}
menu();
}

void search() {
	if (num != 0) {
	int find, val;
	cout << "\nWhich array to find data in:-";
	for (int i = 0; i < num; i++) {
		cout << endl << "Array " << i + 1;
	}
	cout << "\n";
	cin >> find;
	cout << "Value to find: ";
	cin >> val;
	for (int i = 0; i < ::size[find - 1] ; i++) {
		if (creator[find - 1][i] == val) {
			cout << "Value found at position " << i + 1;
			break;
		}
	}
}
else {
	cout << "Create an array first!\n";
}
menu();
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
