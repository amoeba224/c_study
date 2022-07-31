#include <stdio.h>
int n;
int num[100];
int idx = 0;

void getResult(int x, int y) {
	if (x == n) {
		idx++;
		printf("%d", num[0]);
		for (int i = 1; i < y; i++){
			printf("+%d", num[i]);
    }
		printf("\n");
	}
	if (x > n)
		return;

	for (int i = n - 1; i >= 1; i--) {
		if (y == 0) {
			num[y] = i;
			getResult(x + i, y + 1);
			num[y] = 0;
		}
		else {
			if (num[y - 1] >= i) {
				num[y] = i;
				getResult(x + i, y + 1);
				num[y] = 0;
			}
		}
	}
}

int main() {
	scanf("%d", &n);
	getResult(0, 0);
	printf("%d", idx);
	return 0;
}
