/*
1713 - Pie
Input specification

One line with a positive integer: the number of test cases. Then for each test case:

One line with two integers N and F with 1 <= N, F <= 10^4: the number of pies and the number of friends.
One line with N integers ri with 1 <= ri <= 10^4: the radio of the pies.

Output specification

For each test case, output one line with the largest possible volume V such that me and my friends can all get a pie piece of size V.
The answer should be given as a integer number (the nearest integer number to the real answer).
*/
/*
324981 	2012-11-10 21:11:36 	chinitatuntun 	1713 	Time Limited Exceeded
test 1 	... 	... 	1027 	C++
325146 	2012-11-11 20:20:01 	chinitatuntun 	1713 	Wrong Answer
test 1 	61 	85 	1033 	C++
*/
#include <stdio.h>

#define PI 3.14159265358979323846
const int HEIGHT = 1;
double *vi;

int N;//1 <= N the number of pies
int F;//F <= 10^4 the number of friends

int howmanyfriends(double);

int main (void) {	
	int casen = 0;
	double totalV = 0, left, middle, right;
	int ri = 0;

//	freopen("1713 - Pie.in","r",stdin);

	scanf("%d",&casen);

	while (casen>0){
		scanf("%d %d",&N, &F);
		F++;//+me
		totalV = 0;
		vi = new double[N+2];//1 <= ri <= 10^4: the radio of the pies.

		for (int i=0; i<N; i++){
			scanf("%d",&ri);
			vi[i] = PI * (double)(ri*ri) * HEIGHT;
			totalV += vi[i];
			}

		left = 0;
		middle = totalV/2;
		right = totalV;

		while ((int)left != (int) right && howmanyfriends(left)>=F){
			if (howmanyfriends(middle)>=F){
				left = middle;
				}
			else {
				right = middle;
				}
			middle = (left + right)/2;
			}

		printf("%.0lf\n",middle);

		casen--;
		}

	return 0;
	}

int howmanyfriends(double V){
	if (V==0)
		return F+1;

	int friends=0;
	for (int i=0;i<N;i++){
		friends+=vi[i]/V;
		}
	return friends;
	}