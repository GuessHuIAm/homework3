#include <stdio.h>

int multiple3_5(int greatest){
	int sum = 0;
	int a;
	for(a = greatest - 1; a > 0; a = a - 1){
		if(a % 3 == 0 || a % 5 == 0){
			sum = sum + a;
		}
	}
	return sum;
}

int sum_of_squares(int greatest){
        int sum = 0;
        int a;
        for(a = greatest; a > 0; a = a - 1){
		sum = sum + (a * a);
        }
        return sum;
}

int square_of_sum(int greatest){
	int sum = 0;
        int a;
        for(a = greatest; a > 0; a = a - 1){
		sum = sum + a;
	}
	return sum * sum;
}

int main(){
	// 1st problem
	printf("Sum of multiples of 3 or 5 under 1000: %d\n", multiple3_5(1000));

	// 6th problem
	printf("Difference between the sum of the squares of the first one hundred natural numbers and the square of the sum: %d\n", square_of_sum(100) - sum_of_squares(100));

	return 0;
}
