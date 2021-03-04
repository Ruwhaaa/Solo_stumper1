/*
** EPITECH PROJECT, 2018
** stumper.c
** File description:
** stumper
*/

#include <stdlib.h>
#include <stdio.h>
#include "include.h"

int word_len(int argc, char **argv)
{
	int arg_size = argc - 1;
	int arg_value = arg_size;
	int arg = 1;
	int index = 0;
	int count = 0;

	while (arg_size != 0) {
		while (argv[arg][index] != '\0') {
			index = index + 1;
			count = count + 1;
		}
		arg_size = arg_size - 1;
		arg = arg + 1;
		index = 0;
	}
	word_malloc(count, argv, arg_value);
	return (0);
}

int word_malloc(int count, char **argv, int arg_value)
{
	int index = 0;
	int bedex = 0;
	int arg = 1;
	int space = (arg_value - 1) * 3;
	char *stock = malloc(sizeof(char) * count + space);

	while (arg_value != 0) {
		while (argv[arg][index] != '\0') {
			stock[bedex] = argv[arg][index];
			bedex = bedex + 1;
			index = index + 1;
		}
		stock[bedex] = ' ';
		bedex = bedex + 1;
		arg_value = arg_value - 1;
		arg = arg + 1;
		index = 0;
	}
	word_seperation(stock, bedex);
	return (0);
}

int word_seperation(char *stock, int bedex)
{
	int ptr = 0;
	int ptr2 = 0;

	while (stock[ptr2] != '\0') {
		while (stock[ptr2] != ' ') {
			ptr2 = ptr2 + 1;
		}
		ptr2 = ptr2 + 1;
		while (ptr2 == ' ') {
			ptr2 = ptr2 + 1;
		}
	}
	ptr2 = 0;
	free(stock);
	return (0);
}
