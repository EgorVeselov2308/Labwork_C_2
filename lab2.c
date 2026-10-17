#include <stdio.h>

int nok(int a, int b, int j) {
	if ((j % a == 0) && (j % b == 0)) {
		return j;
	}else {
		return nok(a, b, j + 1);
	}
}

int main() {
	printf("Введите два натуральных числа:\n");
   	 int N, M;
    	 if (scanf("%i %i", &N, &M) != 2) {
        	printf("Ошибка, введите два числа\n");
        	return 1;
    	 }
    	 if ((N < 1) || (M < 1)) {
        	printf("Ошибка, введите два натуральных числа\n");
        	return 1;
    	 }
    	 int answer = nok(N, M, 1);
    	 printf("Ответ: НОК = %i\n", answer);
    	 return 0;
}
