/*	1882 - Eight-Character Strings
Given a string S, can you find the substring W (with exactly eight characters) of S, where W is the most repeated substring in S?

Input specification
An non-empty string S of at most 50000 uppercases latin letters between 'A' and 'Z'.

Output specification
An Eight-Character String W: the most repeated (at least two repetitions) substring in S. If there are multiple possible solutions, 
then select the substring lexicographically less of them. If, however, there is no solution for the problem then should be printed 
"Solution was not found", without the quotes.

Sample input
ABCDABCDABCDABCDABCDABCD

Sample output
ABCDABCD
*/
/*
id 	date 	user 	prob 	judgment 	time 	mem 	size 	lang
325230 	2012-11-11 23:20:10 	chinitatuntun 	1882 	Compilation Error 	... 	... 	870 	C++
325232 	2012-11-11 23:22:25 	chinitatuntun 	1882 	Wrong Answer test 5 	786 	91 	890 	C++
325248 	2012-11-11 23:39:14 	chinitatuntun 	1882 	Wrong Answer test 5 	92 	93 	911 	C++
325257 	2012-11-12 00:02:05 	chinitatuntun 	1882 	Wrong Answer test 5 	75 	92 	1004 	C++
325271 	2012-11-12 00:32:13 	chinitatuntun 	1882 	Wrong Answer test 6 	139 	93 	1032 	C++*/

using namespace std;
#include <stdio.h>
#include <iostream>
#include <string.h>
#include <string>

string S;
string substring;
string W;
int pos;
int repetitions = 0;
int maxRepetitions = 0;
const int LENGTH = 8;

int main (void){
	//freopen("1882 - Eight-Character Strings.in","r",stdin);

	getline(cin,S);

	bool *visited = new bool[S.length()]();
	memset(visited,false,sizeof(visited));

	for (int i=0; i<(int)S.length()-LENGTH; i++){

		if (!visited[i]){
			repetitions = 0;
			pos = i;
			substring = S.substr(i,LENGTH);
			do {
				visited[pos]=true;
				repetitions++;
				pos = S.find(substring,pos+1);
				} while (pos != string::npos);//pos>-1 && npos<S.length());

			if (repetitions>maxRepetitions){
				maxRepetitions = repetitions;
				W = substring;
			}
			else 
				if (repetitions==maxRepetitions && (W.empty() ||substring.compare(W)<0)){
					W = substring;
					}
			}
		}

	if (maxRepetitions < 2){
		printf("Solution was not found\n");
		}
	else 
		//	printf("%s %d\n",W,maxcont);
		cout<<W<<"\n";
	return 0;
	}