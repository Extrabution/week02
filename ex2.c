#include <stdio.h>
#include <string.h>

int main(){
	char stringArr[200];
	scanf("%s", stringArr);
	for(int i = strlen(stringArr) - 1; i >= 0; i--){
		printf("%c", stringArr[i]);
	}
	return 0;
}
