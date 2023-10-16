#include <iostream>
using namespace std;
#include "stuscore.h"

void output(struct student* d, int n) {

	int i;
	printf("name\tch\tmath\tsu\tave\r\n");
	for (i = 0; i < n; i++) {
		
		cout << d[i].name << "\t" << d[i].ch << "\t"\
			 << d[i].math << "\t" << d[i].sum << "\t"\
			 << d[i].ave << endl;
	}
}