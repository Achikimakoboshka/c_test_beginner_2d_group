int maxim(int a, int b, int c, int d) {

	if (a >= b && a >= c && a >= d) {
		return a;
	}

	if (b >= a && b >= c && b >= d) {
		return b;
	}

	if (c >= a && c >= b && c >= d) {
		return c;
	}
	
	if(d >= a && d >= b && d >= c) { 
		return d;
	}
}