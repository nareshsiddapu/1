#include<stdio.h>
int main()
{
		int a =5;
			int *pa;
				int **ppa;
					pa = &a;
						ppa = &pa;
							printf("address of a = %p\n",&a);
}
