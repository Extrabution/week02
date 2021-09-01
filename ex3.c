#include <stdio.h>

int main(int argc, char *argv[]){
	if(argc>0){
		int n;
		sscanf(argv[1],"%d", &n);
		int widthParam = 2*n-1;
		for(int i = 0, j = widthParam/2 - 1; i<n; i++, j--){
			int k = j;
			//printf("%d",j);
			if(i == n-1){
				printf(" ");
				k = 1 + i*2;
				while(k>0){
					printf("*");
					k--;
				}
			}
			else{
				printf("  ");
				while(k>0){
					printf(" ");
					k--;
				}
				k = 1 + i*2;
				while(k>0){
					printf("*");
					k--;
				}
			printf("\n");
			}
		}
	}
	return 0;
}
