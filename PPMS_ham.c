#include <stdio.h>
#include <stdlib.h>
       // char a[323583][16];
	char buf[18];
	int cnt = 0;
int main() {
        int i;
        int k;
        int m;
        int n;
        float b[16];//probablity in each position
        float c[4][16];//matrix_f.txt
	float score;//PPM score
	float sum;
	int cnt = 0;

        FILE *fp = fopen("matrix_p.txt", "r");
        if (fp == NULL) {
             printf("no file");
             return 0;
        }
        for (m = 0; m < 4; m++) {
                for(n = 0; n < 16; n++) {
                        fscanf(fp, "%f", &c[m][n]);/*read one line everytime, \n change line*/
                }
                fscanf(fp, "\n");
        }
        /*for(m = 0; m < 4; m++) {
                for(n = 0; n < 16; n++) {
                        printf("%f ", c[m][n]);//output
                }
                printf("\n");
        }
        return 0;*/
        
	FILE *fpm = fopen("cv4_motif.txt", "r");
	//fpm = fopen("motif.txt", "r");
        while (fgets(buf, sizeof(buf), fpm) != NULL) { 
//		printf("%c\n", buf[0]);
//		sscanf (buf, "%s", a[cnt]);
		for (i = 0; i < 16; i++) {
			if (buf[i] == 'A') {
				b[i] = c[0][i];
			}
			else if (buf[i] == 'C') {
                                b[i] = c[1][i];
                        }
			else if (buf[i] == 'G') {
                                b[i] = c[2][i];
                        }
			else if (buf[i] == 'T') {
                                b[i] = c[3][i];
                        }
			else if (buf[i] == 'N') {
				b[i] = 0;
			}
		}
	/*	for (i = 0; i < 16; i++) {
                        printf("%f\t", b[i]);
                }*/
		sum = 0.0;
		for (i = 0; i < 16; i++) {
			sum = b[i] + sum;
		}		
		score = sum * 0.0625;
		printf("%f\n", score);
		cnt++;
	}
fclose(fpm);
fclose(fp);
}
