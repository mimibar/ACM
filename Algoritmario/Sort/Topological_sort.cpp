/*
	Tipo: Recursividad
	Complejidad: O()     
	Nivel: Medio 
	Descripción: Si tenemos una serie de tareas, en donde se tienen restricciones, es decir, para poder comenzar una tarea, debemos
	terminar otra. Para poder saber en que orden se deben realizar las tareas, se aplica un algoritmo parecido a DFS, ya que
	se cuenta con un grafo indicando las tareas que se deben resolver antes de determinada tarea. 
	*/
void Topological_sort() {     int i;     c = n+1;     for(i=1; i<=n; ++i)
if(s[i] == 0)             visita(i); }

void visita(int v)
{
	int i;
	s[v] = 1;
	for(i=1; i<=n; ++i)
	{
		if(w[v][i] == 1 && s[i] == 0)
			visita(i);
	}

	c--;
	x[c] = v;
}
