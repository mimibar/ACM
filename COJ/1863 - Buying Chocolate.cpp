//323867  2012-11-08 20:05:31 chinitatuntun 1863 Accepted  558 830 1624 C++ 

#include <stdio.h>
#include <stdlib.h>
long long temp[100000][2];
long long PC_i[100000][2];//[][price,cows]//[N][price,cows]//[N] [P_i (1 <= P_i <= 10 ^ 18), C_i (1 <= C_i <= 10 ^ 18)]
int N=0;//types shoko N (1 <= N <= 10^5)

void sort_by_price(int left,int right);

int main (void){
	//freopen("1863 - Buying Chocolate.in","r",stdin);
	long long B=0;//budget B (1 <= B <= 10 ^ 18)

	scanf("%d %lld",&N,&B);
	
	for (int  i=0;i<N;i++){
		scanf("%lld %lld",&PC_i[i][0],&PC_i[i][1]);
		}

	sort_by_price(0,N-1);
	
	int  j = 0;
	
	long long  result=0,divresult;//number of cows
	
	while (B>0 && j<N && PC_i[j][0]<=B ){
		divresult = B/PC_i[j][0];
		if (divresult>0){
			if (divresult<=PC_i[j][1]){
				result+=divresult;
				B = divresult%PC_i[j][0];
				}
			else {
				result+=PC_i[j][1];
				B -= PC_i[j][0]*PC_i[j][1];
				}
			}
		j++;
		}

	printf("%lld\n",result);
	//getc(stdin);
	return 0;
	}

void sort_by_price(int left,int right){
	int middle = (left+right)/2;

	if (left<right){

		//sort LEFT
		sort_by_price(left,middle);
		//sort RIGHT
		sort_by_price(middle+1, right);

		
		for (int i=left;i<=right;i++){//copy part to sort
			temp[i][0] = PC_i[i][0];
			temp[i][1] = PC_i[i][1];
			}

		//now MERGE!!
		int rightp = middle+1;
		int leftp = left;

		for (int i=left; i<=right; i++) {

			if (rightp>right || (leftp<=(middle) && temp[leftp][0]<temp[rightp][0])){
				//take left
				PC_i[i][0] = temp[leftp][0];
				PC_i[i][1] = temp[leftp][1];
				leftp++;
				}
			else {
				//take right
				PC_i[i][0] = temp[rightp][0];
				PC_i[i][1] = temp[rightp][1];
				rightp++;
				}
			}
	//delete []temp;
		}
	}
