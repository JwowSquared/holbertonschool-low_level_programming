#include "3-calc.h"

/**
* op_add - adds two numbers
* @a: left operand
* @b: right operand
*
* Return: result
*/
int op_add(int a, int b)
{
	return (a + b);
}

/**
* op_sub - subtracts two numbers
* @a: left operand
* @b: right operand
*
* Return: result
*/
int op_sub(int a, int b)
{
	return (a - b);
}

/**
* op_mul - multiplies two numbers
* @a: left operand
* @b: right operand
*
* Return: result
*/
int op_mul(int a, int b)
{
	return (a * b);
}

/**
* op_div - integer divides two numbers
* @a: left operand
* @b: right operand
*
* Return: result
*/
int op_div(int a, int b)
{
	return (a / b);
}

/**
* op_mod - performs integer division but returns the remainder of two numbers
* @a: left operand
* @b: right operand
*
* Return: result
*/
int op_mod(int a, int b)
{
	return (a % b);
}
