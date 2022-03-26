#include <stdio.h>

enum type {TRI, REC, CIR};

struct Triangle {
	double w;
	double h;
};

struct Rectangle {
	double x;
	double y;
};

struct Circle {
	double r;
};

union p {
	struct Triangle T;
	struct Rectangle R;
	struct Circle C;
};

struct polygon {
	enum type kind;
	union p poly;
};

 int main(void)
 {
	struct polygon P;
	int type;
	// double a, b;
	// type에 입력을 받음
	scanf("%d", &type);
	
	if(type == TRI) {
		scanf("%lf", &P.poly.T.w);
		scanf("%lf", &P.poly.T.h);
	} 
	else if (type == REC) {
		scanf("%lf", &P.poly.R.x);
		scanf("%lf", &P.poly.R.y);
	}
	else { // 원인 경우 
		scanf("%lf", &P.poly.C.r);
	}
	
	if(type == TRI) {
		printf("%f\n", P.poly.T.w * P.poly.T.h * 0.5);
	}
	else if(type == REC) {
		printf("%f\n", P.poly.R.x * P.poly.R.y);
	}
	else {
		printf("%f\n", P.poly.C.r * P.poly.C.r * 3.14);
	}
	
	return 0;
 }
