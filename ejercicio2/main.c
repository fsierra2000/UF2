/*
 * main.c
 *
 *  Created on: 13 ene 2022
 *      Author: fernando
 */

#include <stdio.h>
#include "functions.h"


int main ()
{

int Segs, Mins, Horas, Dias;

printf("Escribe un número de segundos: ");

scanf("%d", &Segs);

if (Segs < 0)
{

  printf("ERROR debe de ser un número!");
 }

