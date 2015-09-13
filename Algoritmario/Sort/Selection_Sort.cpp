/*
	Tipo: Ordenación     
	Complejidad: O(n2)     
	Nivel: Sencillo 
	Descripción: La ordenación por selección consiste en hacer un recorrido por cada uno de los elementos del arreglo, desde A[0] hasta
	A[n-1]. Primero se toma como el valor más pequeño a A[i], luego, se hace una búsqueda del valor más pequeño de entre
	todos los elementos del arreglo que se encuentran a la derecha de A[i], y al finalizar la búsqueda, se intercambia el
	valor de A[i], con el valor resultante de la búsqueda. El proceso de selección, consiste en buscar el elemento más
	pequeño de la lista y ubicarlo en la primera posición de nuestro arreglo, luego buscar el siguiente valor más pequeño y
	ubicarlo en la segunda posición, y así sucesivamente hasta que nuestro arreglo quede perfectamente ordenado de manera
	ascendente. 
	Comentarios: Algoritmo similar al de la burbuja.
*/
void Selection_Sort(int *x, int n) {     int i, j, pos, temp;

	for(i=0; i<n-1; ++i)
	{
		pos = i;
		for(j=i+1; j<n; ++j)
		{
			if(x[j] < x[pos])
				pos = j;
		}

		temp = x[i];
		x[i] = x[pos];
		x[pos] = temp;
	}
}
