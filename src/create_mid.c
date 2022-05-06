#include "../include/push_swap.h"

int  *copy_int(t_a *a)
{
	int i;
	int *aux;

	i = 0;
	aux = malloc(sizeof(int) * a->size_a);
	while (i < a->size_a)
	{
		aux[i] = a->nums[i];
		i++;
	}
	return(aux);
}

void sort_aux(int *aux, int size)
{
	int i;
	int prev;

	i = 1;
	while (i < size)
	{
		if (aux[i] < aux[i - 1])
		{
			prev = aux[i];
			aux[i] = aux[i - 1];
			aux[i - 1] = prev;
			i = 1;	
		}
		else
			i++;
	}

}

int create_mid(t_a *a)
{
	int *aux;
	int mid;

	aux = copy_int(a);
	sort_aux(aux, a->size_a);
	mid = a->size_a / a->quarter;
	a->mid = aux[a->size_a];
	free(aux);
	return (aux[mid]);


}