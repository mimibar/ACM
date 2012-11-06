#include <stdio.h>
#include <string>
#include <stdlib.h>
#include <iostream>

void swap(char * current, int r, int s){
	char temp = current[r];
	current[r] = current[s];
	current[s] = temp;
}

char *nextPermutation (char * current, int n){
	int j=n-2, k, r,s;
	
	while (j>=0 && current[j]>=current[j+1])
		j--;

	if (j<0) return NULL;

	k=n-1;

	while (current[j]>=current[k])
		k--;

	swap(current,j,k);

	r=n-1;
	s=j+1;

	while (r>s){
		swap(current,r,s);
		r--;
		s++;
	}
	return current;
}

char str[1024];

//int main (){
//
//	while (gets(str)){
//		int len = strlen(str), i;
//		
//		do{
//			puts(str);
//		} while (nextPermutation(str,len));
//	}
//
//	return 0;  
//}
