/*
 * function.c
 *
 *  Created on: 4 feb 2022
 *      Author: fernando
 */



int validar(){

	int number;

	do{
		printf("Introduce un número decimal:\n");
		scanf("%d", &number);
	} while (number < 0 );

	return number;
}

int convertir(int num){

	int res = 0, rem = 0, a = 1;

	while (num != 0){
		rem = num % 2;
		num = num / 2;
		res = res +(rem * a);
		a = a * 10;
	}
	return res;
}
