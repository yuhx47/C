#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int cnt1 = 0;
int cnt2 = 0;
float score[32];
char buf[100];
FILE *fp;
main(int argc, char *argv[]) {
	if ((fp = fopen (argv[1], "r")) == NULL ) {
		printf ("No File\n");
	}
	
//	fp = fopen ("32_test_error_space.txt", "r");
	while (fgets(buf, sizeof(buf), fp)!= NULL) {
		if (cnt2 == 0) {
			printf ("%s", buf);
			cnt1++;
		}
		if (cnt1 == 8) {
			cnt1 = 0;
		}
		if (cnt1 == 0) {
			cnt2++;
		}
		if (cnt2 == 9) {
			cnt2 = 0;
		} 
	}
}
