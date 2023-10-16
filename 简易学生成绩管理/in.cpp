#include <iostream>
using namespace std;
#include "stuscore.h"
void input(struct student* d, int n) {
	int i;
	for (i = 0; i < n; i++) {
		cout << "plase input the name of student" << i + 1 << ":";
		cin >> d[i].name;
		cout << "plase input the ch of student" << i + 1<<":";
		cin >> d[i].ch;
		cout << "plase input the math of student" << i + 1<<":";
		cin >> d[i].math;

	}

}