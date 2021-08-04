#include <stdio.h>

float f_003_004(int side, int radius) {

	int example; 
	
	if (side <= 0 || radius <= 0)  {
		return -1;
	}

	float circle = 3.14 * radius * radius;
	circle = circle / 10000;

	float square = side * side;
	square = square / 10000;

	if (circle < square) {
		return circle;
	}
	if (square < circle) {
		return square;
	}
	if (circle == square) {
		printf("The areas of the figures are equal");
		return square;
	}
}