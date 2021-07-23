#include <stdio.h>
int min (int a, int b) {

	if (a == b) {
		printf ("a = b = %d\n", a);
		return a;
	}
    
	if (a != b) {
		if (a < b) {
		return a;
	}
	else{
		return b;
	}
	}
}