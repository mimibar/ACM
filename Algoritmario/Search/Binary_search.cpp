/*
	Tipo: Ordenación
	Complejidad: O(logn)
	Nivel: Fácil
	Descripción: Este algoritmo necesita de un arreglo ordenado para poder realizar la búsqueda, la cual se hace por medio del método de bisección. Si el valor que estamos buscando no se encuentra dentro de la lista, la función de la búsqueda binaria nos regresa un valor negativo, en caso contrario, nos regresa la posición en la que se encontró el valor buscado.
	Comentarios: Se necesita de un arreglo ordenado antes de comenzar la búsqueda
*/
long Binary_search(long bottom, long top, long key)
{
	long center, center_value, min, max, k;

	while(bottom <= top)
	{
		center = (bottom + top)/2;
		center_value = n[center];

		if(key == center_value)
			return center;

		else if(key < center_value)
			top = center - 1;
		else
			bottom = center + 1;
	}

	return -1;
}
