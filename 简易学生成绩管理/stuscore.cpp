#include "stuscore.h"

#define N 3
struct student data[N];//ֱ�������ṹ�����

void input(struct student* d, int n);
void caculate(struct student* d, int n);
void output(struct student* d, int n);

int main() {

	input(data, N);
	caculate(data, N);
	output(data, N);

}