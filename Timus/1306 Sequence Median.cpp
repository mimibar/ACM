/*
1306. Sequence Median
Time Limit: 1.0 second
Memory Limit: 1 MB*/
/*
ID	Date	Author	Problem	Language	Judgement result	Test #	Execution time	Memory used
4620223	04:01:46 15 Nov 2012	Miriam Lee	1306. Sequence Median	C++	Memory limit exceeded	7	0.062	1 096 KB
*/

#include <stdio.h>//freopen, scanf
#include <stdlib.h>//qsort

int N;
unsigned int* seq;

//int compare (const void * a, const void * b)
//{
//  return ( *(int*)a - *(int*)b );
//}
//
//int main(){
//
//	freopen("1306 Sequence Median.in","r",stdin);
//
//	scanf("%d",&N);
//	seq = new unsigned int[N]();
//
//	for (int i = 0; i<N; i++){
//		scanf("%u",&seq[i]);		
//		}
//
//	qsort(seq,N,sizeof(seq), compare);
//
//	if (N%2==0)
//		printf("%.1lf",(double)(seq[(N-1)/2]+seq[(N-1)/2+1])/2);
//	else
//		printf("%.1lf",(double)seq[N/2]);
//	}


void insert (int m, int count){
	//seq[count-1] = n;
	
	if ( count >1 &&  seq[count/2] < m){//now swap!
		seq[count] = seq[count/2];
		count/=2;
		}
	seq[count] = m;
	}


int main(){
	int a = 0;
	freopen("1306 Sequence Median.in","r",stdin);

	scanf("%d",&N);
	seq = new unsigned int[N]();
	int cont = 0;
	for (int i = 1; i<=N; i++){
		scanf("%u",&a);
		if (i==1 ||i<=N/2 || a<seq[cont]){//for the first half or if its smaller than the biggest
			cont++;
			insert (a,cont);
			}
		}

	if (N%2==0)
		printf("%.1lf",(double)(seq[(N-1)/2]+seq[(N-1)/2+1])/2);
	else
		printf("%.1lf",(double)seq[N/2]);
	}
