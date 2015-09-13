/*
	MÁXIMO COMÚN DIVISOR (MCD)
	Tipo: Matemático
	Complejidad: O(n)
	Nivel: Fácil
	Descripción: Función que devuelve el máximo común divisor de un par de números
	*/
long MCD(long a, long b)
{
	long temp;

	if(a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}

	while(b > 0)
	{
		temp = a;
		a = b;
		b = temp%b;
	}

	return a;
}
