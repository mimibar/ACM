/*     Tipo: Ordenación
	Descripción: La librería “stdlib.h” nos brinda la función bsearch(), la cual realiza de
	manera automática la búsqueda binaria y la cual devuelve un puntero como resultado, el cual si resulta ser nulo
	significa que no encontró el valor buscado dentro del arreglo.
	Otra cosa que cabe mencionar es que la función
	bsearch también hace uso de la función “compare” al igual que lo hace la función qsort. */

#include <stdio.h> 
#include <stdlib.h>

int compare(const void *, const void *);
void main()
{
	int i, n, x[20], key;
	int *k;

	while(scanf("%d", &n) == 1)
	{
		if(n == 0)	break;

		for(i=0; i<n; ++i)
			scanf("%d", &x[i]);

		qsort(x,n,sizeof(x[0]),compare);

		printf("El arreglo ordenado es:\n");
		for(i=0; i<n; ++i)
			printf("%d ", x[i]);
		printf("\n");

		scanf("%d", &key);

		k = (int*) bsearch(&key,x,n,sizeof(x[0]),compare);

		if(k == NULL)
			printf("El numero no se encuentra en el arreglo.\n");
		else
			printf("El numero se encuentra en la posicion %d.\n", k-x);
	}
}

int compare(const void *a, const void *b)
{
	int sp1 = (*(int *) a);
	int sp2 = (*(int *) b);

	return sp1 - sp2;
}
