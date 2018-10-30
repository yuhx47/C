#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
        char buf[17];
	char seq_t[2000][17];
	char seq_v[1669][17];
	int cntt = 0;
	int cntv = 0;	
	int t, v;
	int cnt = 0;

	FILE *fpt = fopen("train.txt", "r");
        while (fgets(buf, sizeof(buf), fpt) != NULL) { 
		if (strlen(buf) != 1) {
			sscanf (buf, "%s", seq_t[cntt]);
		//	printf ("%s\n", seq_t[cnt]);	
			cntt++;
		}
	}
	FILE *fpv = fopen("valid.txt", "r");
        while (fgets(buf, sizeof(buf), fpv) != NULL) {
                if (strlen(buf) != 1) {
                        sscanf (buf, "%s", seq_v[cntv]);
                //      printf ("%s\n", seq_v[cnt]);
                        cntv++;
                }
        }
	for (t = 0; t < 2000; t++) {
		for (v = 0; v < 1669; v++) {
			if (strncmp (seq_t[t], seq_v[v], 16) == 0) {
				printf ("%s\t%d\n", seq_t[t], t);
				cnt++;		
			}
		}
	}
	printf ("cnt: %d\n", cnt);
fclose(fpt);
fclose(fpv);
}
