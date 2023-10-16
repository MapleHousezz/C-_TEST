#include <iostream>
using namespace std;
#include "stuscore.h"

void caculate(struct student* d, int n) {
	int i;

	for (i = 0; i < n; i++) {
		d[i].sum = d[i].ch + d[i].math;
		d[i].ave = d[i].sum / 2.0;

	}
}