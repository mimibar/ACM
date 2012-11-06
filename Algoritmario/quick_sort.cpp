#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int compare(const void *, const void*);
//void main (){
//	int len;
//	char cad[100];
//
//	while(scanf("%s", &cad) == 1){
//		if(!strcmp(cad," "))	break;
//
//		len = strlen(cad);
//
//		qsort(cad,len,sizeof(cad[0]),compare);
//
//		printf("%s\n", cad);
//	}
//}

int compare(const void *a, const void *b)
{

	char sp1 = *(char *)a;
	char sp2 = *(char *)b;

	return sp1 - sp2;
}
