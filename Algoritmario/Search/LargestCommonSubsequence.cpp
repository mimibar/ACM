/*  Tipo: Programación Dinámica
	Complejidad: O(nk)
    Nivel: Medio
    Descripción: El Algoritmo de LARGEST COMMON SUBSEQUENCE nos permite
	obtener la longitud de la subsecuencia común máxima entre dos arreglos, los cuales pueden ser de tipo entero, char,
	estructuras, etc.     
	Comentarios: Algoritmo basado en el triángulo de Pascal */ 

int LCS() {     int i, j;

	for(i=0; i<=n1; ++i)
		c[i][0] = 0;

	for(i=0; i<=n2; ++i)
		c[0][i] = 0;

	for(i=1; i<=n1; ++i)
	{
		for(j=1; j<=n2; ++j)
		{
			if(x[i-1] == y[j-1])
				c[i][j] = c[i-1][j-1] + 1;	//b[i][j] = 1
			else
			{
				if(c[i-1][j] >= c[i][j-1])
					c[i][j] = c[i-1][j];	//b[i][j] = 2
				else
					c[i][j] = c[i][j-1];
			}
		}
	}

	return c[n1][n2];
}

/*
	CONSTRUCCIÓN DE LA LCS (LARGEST COMMON SUBSEQUENCE)
	Para construir la subsecuencia común máxima entre un par de arreglos, hacemos uso de una función recursiva, así como del vector (b), que nos sirve para estar comprobando de donde se llega a cierta posición de la matriz (izquierda, arriba o diagonal)
	Tipo: LCS (programación Dinámica)
	Complejidad: O(nm)
	Nivel: Medio*/
void LCS_print(int i, int j)
{
	if(i == 0 || j == 0)
		return;
	else
	{
		if(b[i][j] == 1)
		{
			LCS_print(i-1,j-1);
			printf("%d ", x[i-1]);
		}
		else if(b[i][j] == 2)
			LCS_print(i-1,j);
		else
			LCS_print(i,j-1);
	}
}
