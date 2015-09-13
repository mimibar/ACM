/*
	Tipo: Ordenación     
	Complejidad: O(n2)     
	Nivel: Fácil 
	Descripción: Este método como su nombre lo indica, consiste en ir ordenando nuestro arreglo conforme se vayan introduciendo los datos en él. En
	esta ocasión no se requiere intercambiar valores, simplemente se va comparando el nuevo valor que se desea introducir al
	arreglo con todos los que ya se incluyen en él desde el final de nuestra lista hasta el inicio de esta; si un valor del
	arreglo es mayor que el del valor que queremos introducir, entonces dicho valor se recorre una posición a la derecha y
	el valor a introducir se compara con el siguiente elemento del arreglo, hasta que no se cumpla la condición o que se
	llegue al inicio de la lista. 
	Comentarios: Resulta más rápido si se utiliza una búsqueda binaria */void
Insertion_Sort(int *x, int n) {     int i, j, aux;

	for(i=0; i<n; ++i)
	{
		scanf("%d", &x[i]); 
		j = i;
		aux = x[i];

		while(j > 0 && aux < x[j-1])
		{
			x[j] = x[j-1];
			j--;
		}
		x[j] = aux;
	}
}
