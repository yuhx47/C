#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cnt = 0;
int cntm = 0;
float score[33566];
char buf[100];
float d1 = 0.35;
float d2 = 0.36;
int f = 0;
float k;
FILE *fp;
int main(int argc, char *argv[]) {
	fp = fopen (argv[1], "r");
	while (fgets(buf, sizeof(buf), fp)!= NULL) {
		sscanf (buf, "%f", score + cntm);
		cntm++;
		}
	while (d1 <= 0.65) { 
		for (cnt = 0; cnt < cntm; cnt++) {	
			if (score[cnt] >= d1 && score[cnt] > d2) {
				f = 0;
				printf("%f\t%f\t%d\n", d1, d2, f);
				break;
			}
			else if (score[cnt] >= d1 && score[cnt] <= d2) {
                                f++;
		//		printf("%d\n", f);
				if (score[cnt + 1] > d1 && score[cnt + 1] >= d2) {
					printf("%f\t%f\t%d\n", d1, d2, f);
					break;
				}
				else if (cnt + 1 == cntm) {
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
