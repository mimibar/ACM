/* Tipo: Ordenación
	Complejidad: O^2)
	Nivel: Fácil
	Descipción: Este es posiblemente el método de ordenación más sencillo y famoso que existe, pues los valores más pequeños de nuestro arreglo van subiendo de posiciones como lo hacen las burbujas en el agua, mientras que los valores más grandes bajan de posición como si fueran rocas sumergiéndose en el agua.
	Para este algoritmo lo único que se necesita es el arreglo de datos el cual queremos ordenar.
	Comentarios: Algoritmo clásico de ordenación, fácil de elaborar pero lento para arreglos de gran tamaño.
	*/
void Bubble(int *x, int n)
{
	int i, j;
	int temp;

	for(i=0; i<n; ++i)
	{
		for(j=i; j<n; ++j)
		{
			if(x[j] < x[i])
			{
				temp = x[i];
				x[i] = x[j];
				x[j] = temp;
			}
		}
	}
}
