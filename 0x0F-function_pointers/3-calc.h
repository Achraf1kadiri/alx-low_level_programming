#ifndef calc_h
#define calc_h

/**
 * struct op - Struct op is an operator struct.
 * @op: The operator.
 * @f: The function associated with the operator.
 *
 * Description: This struct is used to associate operator symbols with
 *              their corresponding functions for arithmetic operations.
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

#endif

