#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char *argv[]) {

	char line[4][17];
	char buf[17];
	int i, j, k, l; 
	int m, n, o, p;
	int q, r, s, t, u;

	FILE *fpm = fopen (argv[1], "r");
        if (fpm == NULL) {
             printf("no file");
             return 0;
        }
	
	for (m = 0; m < 4; m++) {
                for(n = 0; n < 16; n++) {
                        fscanf(fpm, "%c", &line[m][n]);/*read one line everytime, \n change line*/
                }
                fscanf(fpm, "\n");
        }
/*	for(m = 0; m < 4; m++) {
                for(n = 0; n < 16; n++) {
                        printf("%c ", line[m][n]);//output
                }
                printf("\n");
        }*/
	for (i = 8; i < 13; i++) {
		for (j = i + 1; j < 14; j++) {
			for (k = j + 1; k < 15; k++) {
				for (l = k + 1; l < 16; l++) {
		
					for (m = 1; m < 4; m++) {
						for (n = 1; n < 4; n++) {
							for (o = 1; o < 4; o++) {
								for (p = 1; p < 4; p++) {

									for (q = 0; q < i; q++) {
										printf ("%c", line[0][q]);
									}
									printf ("%c", line[m][i]);

									for (r = q + 1; r < j; r++) {
                                                                                printf ("%c", line[0][r]);
                                                                        }				
									printf ("%c", line[n][j]);			
									
									for (s = r + 1; s < k; s++) {
                                                                                printf ("%c", line[0][s]);
                                                                        }
                                                                        printf ("%c", line[o][k]);								
									
									for (t = s + 1; t < l; t++) {
                                                                                printf ("%c", line[0][t]);
                                                                        }
                                                                        printf ("%c", line[p][l]);
									
									for (u = t + 1; u < 16; u++) {
                                                                                printf ("%c", line[0][u]);	
									}
									printf ("\n");
									//	printf ("%c %c %c %c\n", line[m][i], line[n][j], line[o][k], line[p][l]);
								}
							}
						}	
					}
				//	printf ("%d %d %d %d\n", i, j, k, l);
				}
			}
		}
	}
}
/*				
	fp = fopen (argv[1], "r");
	while (fgets(buf, sizeof(buf), fp) != NULL) {  
		if (strlen(buf) != 1) {
		for(i = 0; i < 16; i++) {
			if (buf[i] == 'A') {
                                line[0][i] = 1;
                        }
			else {
				line[0][i] = 0;	
			}
                        
			if (buf[i] == 'C') {
                                line[1][i] = 1;
                        }
			else {
                                line[1][i] = 0;
                        }
	
                        if (buf[i] == 'G') {
                                line[2][i] = 1;
                        }
			else {
                                line[2][i] = 0;
                        }

                        if (buf[i] == 'T') {
                                line[3][i] = 1;
                        }
			else {
                                line[3][i] = 0;
                        }
		}
		for (m = 0; m < 16; m++) {
               		for (l = 0; l < 4; l++) {
                       		printf("%d ", line[l][m]);
                	}
       		}
		printf("\n");

*/
/*		for (j = 0; j < 16; j++) {
                        if (buf[j] == 'A') {
                                b[j] = c[0][j];
                        }
                        else if (buf[j] == 'C') {
                                b[j] = c[1][j];
                        }
                        else if (buf[j] == 'G') {
                                b[j] = c[2][j];
                        }
                        else if (buf[j] == 'T') {
                                b[j] = c[3][j];
                        }
//		printf("%f\n", b[j]);
                }*/
         /*       sum = 0.0;
                for (j = 0; j < 16; j++) {
                        sum = b[j] + sum;
                }
//		printf ("%f\n", sum);
              //  score = sum * 0.0625;
              //  printf("%f\n", score);
		}
	}
fclose(fp);
}
*/
