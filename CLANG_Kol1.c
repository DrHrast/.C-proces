#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int foo(int niz[], int niz2[], int d, int dd) {
	int cnt = 0;
	for (int i = 0; i < dd; i++) {
		for (int j = 0; j < d; j++) {
			if (niz2[i] == niz[j]) {
				break;
			}
			if (j > dd - 1 && niz[j] <= 0) {
				niz[j] = niz2[i];
				break;
			}
		}
	}
	for (int l = 0; l < d; l++) {
		if (niz[l] <= 0)
			break;
		else
			printf("%d ", niz[l]);
			cnt += 1;
	}
	printf("\n");
	return cnt;
}

int foo2(int niz[], int niz2[], int d1, int d2) {
	int counter = 0;
	for (int i = 0; i < d2; i++) {
		for (int j = 0; j < d1; j++) {
			if (niz2[i] == niz[j])
				break;
			if (j > d2 - 1 && niz[j] <= 0) {
				niz[j] = niz2[i];
				break;
			}
		}
	}
	for (int len = 0; len < d1; len++) {
		if (niz[len] > 0) {
			printf("%d ", niz[len]);
			counter += 1;
		}
	}
	printf("\n");
	return counter;
}

void kvrgavi() {
	int deset = 0;
	for (int i = 10000; deset < 10; i++) {
		if (i % 100 == 88 || i % 88 == 0) {
			deset += 1;
			printf("%d ", i);
		}
		else
			continue;
	}
}

int najzn(int a) {
	while (a / 10 != 0) {
		a /= 10;
	}
	return a;
}

int main(void) {
	int niz[10] = { 1, 2, 3, 4, 5 };
	int niz2[5] = { 6, 7, 8, 9, 2 };
	int d = 10;
	int dd = 5;
	int n = foo(niz, niz2, d, dd);
	int n2 = foo2(niz, niz2, d, dd);

	printf("\nBroj elemenata: %d", n);
	printf("\nBroj elemenata: %d", n2);
	printf("\n\nPrvih deset kvrgavih brojeva je:\n");
	kvrgavi();
	printf("\n\nNajznacajnija znamenka broja %d je: %d\n", 9235635, najzn(9235635));
}