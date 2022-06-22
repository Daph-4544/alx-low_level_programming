#include "main.h"

/**
 * find_root - function to find squre root of num
 * @x: number
 * @root: number num
 *
 * Return: return
*/

int find_root(int x, int root)
{
	if (root * root > x)
		return (-1);
	else if (root * root == x)
		return (root);
	else
		return (find_root(x, root + 1));
}


/**
 * _sqrt_recursion - find natural square root of n
 * @n: n
 *
 * Return: natural square root, or -1 if not natural root
*/

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (find_root(n, 0));
}
