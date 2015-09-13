/*
	1882 - Eight-Character Strings
Given a string S, can you find the substring W (with exactly eight characters) of S, where W is the most repeated substring in S?

Input specification

An non-empty string S of at most 50000 uppercases latin letters between 'A' and 'Z'.

Output specification

An Eight-Character String W: the most repeated (at least two repetitions) substring in S. If there are multiple possible solutions, then select the substring lexicographically less of them. If, however, there is no solution for the problem then should be printed "Solution was not found", without the quotes.

Sample input

ABCDABCDABCDABCDABCDABCD

Sample output

ABCDABCD
*/

#include <stdio.h>
#include <string.h>

char *substrings [50000][50000/8];
char *S = new char [50000];


int main (void){

	scanf ("%s",&S);
	int npos =-1;

	for (int i=7;i<strlen(S);i++){
		do{
			strstr(&S+i,
			}while (npos
			substrings[
		}

	return 0;
	}