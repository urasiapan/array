/*배열 원소값 지정하기. 배열 원소의 합, 곱 구하기. 두 개의 배열 원소들 교환하기. */
#include <iostream>
using namespace std;

int& GetArrElem(int* ary, int index) {
	return ary[index - 1];
}

void SumMul(int* ary, int num, int* sum, int* mul) {
	for (int i = 0; i < num; i++) {
		*sum += ary[i];
		*mul *= ary[i];
	}
}

void swaparray(int* a, int* b, int asize) {
	int it;
	for (int i = 0; i < asize; i++) {
		it = *(a + i);
		*(a + i) = *(b + i);
		*(b + i) = it;
	}
}

int main(void) {
	int ary[5], ary4p[5];
	int sum = 0, mul = 1;

	for (int t = 1; t < 6; t++) {
		GetArrElem(ary, t) = t * t;
	}

	swaparray(ary, ary4p, sizeof(ary) / sizeof(ary[0]));
	SumMul(ary4p, sizeof(ary4p) / sizeof(ary4p[0]), &sum, &mul);
	cout << "sum = " << sum;
	cout << ",mul = " << mul << endl;

	return 0;
}