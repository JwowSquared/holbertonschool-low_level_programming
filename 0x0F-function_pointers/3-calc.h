#ifndef _CALC_
#define _CALC_

/**
* struct op - stores functionality with an operator character
* @op: pointer to operator character
* @f: functionality of operator
*
* Description: used to store the functionality of an operator with its symbol
*/
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
} op_t;

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);

#endif /* _CALC_ */
