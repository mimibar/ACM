#include <stdio.h>
#include <string.h>
char namest[6000][100];
char names [6000][100];

void merge_sort(int left, int right){

	if (left<right){
		int leftp = left;
		int rightp = (left+right)/2;
		merge_sort(left,rightp);
		merge_sort(rightp+1,right);
		

		for (int i=left;i<=right;i++) {
			strcpy(namest[i], names[i]);
		}

		rightp++;
		for (int now=left; now<=right; now++) {
				//A value greater than zero indicates that the first character 
				//that does not match has a greater value in str1 than in str2; 
			if (rightp>right || (leftp<=(left+right)/2 && strcmp(namest[leftp],namest[rightp])<=0)) {
				strcpy(names[now],namest[leftp++]);
			}
			else {
				strcpy(names[now],namest[rightp++]);
			}

			}
		}
	}


void main (void) {
	int n=0;

	while  ( scanf("%s",names[n])==1){
		n++;
	}

	
	merge_sort(0,n-1);
	
	
}