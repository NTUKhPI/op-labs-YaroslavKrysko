﻿#include <stdio.h>#include <math.h>int main(void) {	char name1[9], name2[9], name3[9];	unsigned int sc1, sc2, sc3;	unsigned int cnt1, cnt2, cnt3;	char type1, type2, type3;	printf("1. Введіть назву процесора, частоту, RAM і тип.");	scanf("%s %u %u %c", name1, &sc1, &cnt1, &type1);	printf("2. Введіть назву процесора, частоту, RAM і тип.");	scanf("%s %u %u %c", name2, &sc2, &cnt2, &type2);	printf("3. Введіть назву процесора, частоту, RAM і тип.");	scanf("%s %u %u %c", name3, &sc3, &cnt3, &type3);	printf("------------------------------------------------\n");	printf("|Характеристики ПЕОМ                            |\n");	printf("|-----------------------------------------------|\n");	printf("|  Процессор  | |  Частота  | |  RAM  | |  Тип  |\n");	printf("|-----------------------------------------------|\n");	printf("|%-12s | |%-11u| |%-7u| |%-6c |\n", name1, sc1, cnt1, type1);	printf("|%-12s | |%-11u| |%-7u| |%-6c |\n", name2, sc2, cnt2, type2);	printf("|%-12s | |%-11u| |%-7u| |%-6c |\n", name3, sc3, cnt3, type3);	printf("|-----------------------------------------------|\n");	printf("|Тип: C - CISC-процесор, R - RISC-процесор|\n");	return 0;}