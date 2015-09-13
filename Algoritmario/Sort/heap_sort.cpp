//O(n->(2)nlogn)
//13nov2012

#include <stdio.h>


int arr[100], n;

void insert(long n, int pos){
	int pos=n;

	while(pos>1 && arr[pos/2]<n){
		arr[pos]=arr[pos/2];
		pos=pos/2;

		}
	arr[pos]=n;	
	}

//pasar mas grande hacia arriba
void pop(int n){

	int t =arr[1];
	arr[1] = arr[n];
	arr[n]=t;

	n--;

	int aux, q, otro;
	t=1;

	while (t*2<=n){
		//buscar hijo mayor
		q=2*t;
		//si tiene hijo derecha
		if (q+1<=n && arr[q] <arr[q+1]){
			aux = arr[q+1];
			q++;

			}
		else {
			aux = arr[q];
			}


		if (arr[t]<aux){
			otro = arr[t];
			arr[t] = aux;
			arr[q] = otro;
			t=q;
			}
		else break;
		}


	}

int main(){


	scanf ("%d",&n);

	for (int i=1;i<=n;i++){
		scanf ("%d",&arr[i]);
		insert(arr[i],i);

		}

	for (int i=n;i>1;i--){
		pop(i);
		}

	for (int i=1;i<=n;i++){
		printf("%d",arr[i]);
		}

	}

