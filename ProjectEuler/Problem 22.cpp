/*
Problem 22
 
19 July 2002

 

Using names.txt (right click and 'Save Link/Target As...'), a 46K text file containing over five-thousand first names, 
begin by sorting it into alphabetical order. Then working out the alphabetical value for each name, multiply this value 
by its alphabetical position in the list to obtain a name score.
 
For example, when the list is sorted into alphabetical order, COLIN, which is worth 3 + 15 + 12 + 9 + 14 = 53, is the 938th 
name in the list. So, COLIN would obtain a score of 938 53 = 49714.
 
What is the total of all the name scores in the file?
*/

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

	freopen("C:\\Users\\mimi\\Documents\\Dropbox\\ACM\\Mathschallenge.net\\Problem 22.in", "r", stdin);
	
	while  ( scanf("%s",names[n])==1){n++;}

	
	merge_sort(0,n-1);
	
	long result = 0;
	long preresult = 0;

	for (int i=0;i<=n-1;i++){
		if (strcmp(names[i],"")!=0){
			preresult = 0;
			for (int j=0;j<strlen(names[i]);j++){
				preresult += names[i][j]-'A'+1;
			}
			result += preresult * (i+1);
		}

		}
	printf("%l",result);
}

