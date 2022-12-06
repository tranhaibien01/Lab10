#include<stdio.h>
#include<string.h>

int countCharacterX(const char* str, const char x);

int main() {
	char str[100];
	char x;

	printf("\nNhap chuoi: ");
	scanf("%99[^\n]", str);

	printf("\nChuoi ma ban vua nhap tu ban phim: %s\n", str);

	printf("\nNhap ky tu ban muon tim trong chuoi: ");
	scanf("%*c%c", &x);

	int count = countCharacterX(str, x);

	printf("\nSo lan xuat hien cua \'%c\' trong chuoi: %d \n", x, count);

	puts(" ");
	return 0;
}

int countCharacterX(const char* str, const char x) {

	int i;
	int count = 0;
	int size = strlen(str);

	for (i = 0; i < size; i++) {
		if (str[i] == x) {
			count++;
		}
	}
	return count;
}
