#include"main.h"
#include<unistd.h>
/**
 * _putchar -write character c to standard out
 * @c - the character to print
 *
 * Return: on success 1
 * on error: -1
 * /
 int _putchar(char c)
 {
 	return(write(1,&c,1));
 }
