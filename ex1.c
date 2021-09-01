#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int intVar = INT_MAX;
	float floatVar = FLT_MAX;
	double doubleVar = DBL_MAX;
	printf("%d %d\n", sizeof(intVar), intVar);
	printf("%d %e\n", sizeof(floatVar), floatVar);
	printf("%d %e\n", sizeof(doubleVar), doubleVar);
	return 0;
}
