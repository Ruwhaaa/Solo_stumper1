/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include "include.h"

int main(int argc, char **argv)
{
	if (argc == 1) {
		printf("\n");
		return (0);
	}
	if (argc > 1) {
		word_len(argc, argv);
		return (0);
	}
	else
		return (84);
}
