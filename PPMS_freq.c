#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cnt = 0;
float score[32245];
char buf[100];
float d1 = 0.4;
float d2 = 0.41;
int f = 0;
float k;
FILE *fp;
int main() {
	fp = fopen ("noid_vv5_PPMS_order.txt", "r");
	while (fgets(buf, sizeof(buf), fp)!= NULL) {
		sscanf (buf, "%f", score + cnt);
//		printf ("%d\n", r_dist[cnt]);
		cnt++;
		}
/*	for (cnt = 0; cnt < 29898; cnt++) {
		printf("%d\n", r_dist[cnt]);
	}*/	
	while (d1 <= 0.60) { 
		for (cnt = 0; cnt < 32245; cnt++) {	
			if (score[cnt] >= d1 && score[cnt] > d2) {
				f = 0;
				printf("%f\t%f\t%d\n", d1, d2, f);
				break;
			}
			else if (score[cnt] >= d1 && score[cnt] <= d2) {
                                f++;
		//		printf("%d\n", f);
				if (score[cnt + 1] > d1 && score[cnt + 1] > d2) {
					printf("%f\t%f\t%d\n", d1, d2, f);
					break;
				}
			}
		}
		d1 = d1 + 0.01;
		d2 = d2 + 0.01;	
		f = 0;
	}
fclose(fp);
}               
