//  Autor: David Esparza Alba
//	Fecha: 
//	Actualización: 
//	Algoritmo: Topological Sort
//	Problema: Beverages	
//	Número: 11060
//	Página: UVA

#include <stdio.h>
#include <string.h>

char drink[101][51];
int w[105][105];
int s[101], v[101];
int n;

int get_pos(char *str);
void Topological_Sort();

void main()
{
	int i, j, k, m, a, b, count = 1;
	char cad1[51], cad2[51];

	freopen("11060.in", "r", stdin);
	freopen("11060.out", "w", stdout);

	while(scanf("%d", &n) == 1)
	{
		memset(w,0,sizeof(w));
		memset(v,0,sizeof(v));
		memset(s,0,sizeof(s));

		for(i=0; i<n; ++i)
			scanf("%s", drink[i]);

		scanf("%d", &m);
		for(i=0; i<m; ++i)
		{
			scanf("%s %s", cad1, cad2);
			a = get_pos(cad1);
			b = get_pos(cad2);

			w[a][0]++;
			w[a][w[a][0]] = b;
			s[b]++;
		}

		printf("Case #%d: Dilbert should drink beverages in this order:",count++);

		for(i=0; i<n; ++i)
			Topological_Sort();

		printf(".\n\n");
	}
}

int get_pos(char *str)
{
	int i;

	for(i=0; i<n; ++i)
		if(!strcmp(str,drink[i]))
			return i;

	return 0;
}

void Topological_Sort()
{
	int i, j;

	for(i=0; i<n; ++i)
	{
		if(s[i] == 0 && v[i] == 0)
		{
			v[i] = 1;
			printf(" %s", drink[i]);
			for(j=1; j<=w[i][0]; ++j)
				s[w[i][j]]--;
			break;
		}
	}
}
