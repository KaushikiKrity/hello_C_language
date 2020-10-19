// sup.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
//Select the type of circle you want and input the data asked. Then check for a point whether it lies inside , on or outside ethe circle.

#include <iostream>
#include <math.h>


int main()
{
	int n;
	printf("Enter 1 for cirlces   whose centre lies on the origin\neEnter 2 for circles whose centre lies on your chosen point\nEnter 3 for using cirlce equation in general form\n  ");
	scanf("%d", &n);

	switch (n)
	{
	case 1:

		int r, x, y, w;

		printf("we are using circle whose centre lies on the origin \n equation of the circle = x^2 + y^2 = r^2 \n enter the radius of the circle \n");
		scanf("%d", &r);
		w = r * r;
		printf("euation of the circle is = x^2+y^2 = %d \n", w);
		printf("enter the value of point (x,y)to be checked\n");
		scanf("%d%d", &x, &y);
		if ((x * x + y * y) == w)
			printf("the point lies in the circle \n");
		else if ((x * x + y * y) < w)
			printf("the point lies inside the circle\n");
		else
			printf("the point lies outside the circle \n");
		break;



	case 2:
		int k, l, e, g, a, b, d, f;


		printf("we are using circle whose centre lies on the point you choose\n equation of the circle = (x-a)^2+(y-b)^2=r^2\n enter the radius of the circle r  and the points of the centre a and b \n");

		scanf("%d%d%d", &k, &a, &b);
		l = k * k;
		printf("the pounts of the centre are = %d,%d\n", a, b);
		printf("radius of the circle =%d\n", l);


		printf("euation of the circle is = (x-%d)^2+(y-%d)^2=%d \n", a, b, l);

		printf("enter the value of point (e,g)to be checked\n");
		scanf("%d%d", &e, &g);
		d = e - a;
		f = g - b;
		if ((d * d) + (f * f) == l)
			printf("the point lies in the circle \n");
		else if ((d * d) + (f * f) < l)
			printf("the point lies inside the circle\n");
		else
			printf("the point lies outside the circle \n");
		break;
	case 3:
		int p, q, s,  m, n;
		float v,t;
		printf("we are using circle whose equatin is in general form\n The equation is = x^2 + y^2 + 2gx +2fy + c = 0 \n centre of the circle is(-g,-f) and radius is (g2 + f2 - c)^1/2\n");
		printf("enter the centre of the circle and value of the constant c\n");
		scanf("%d%d%d", &p, &q, &s);
		v = ((p * p )+( q * q) - s);
		t = sqrt(v);
		printf("the centre of circle are =%d,%d\n", p, q);
		printf("the radiu of the circle is =%f\n", t);
		printf("equation of the circle = x^2+y^2+(2*x*%d)+(2*y*%d)+%d=0", p, q, s);
		printf("enter the vaue of point to be checked(m,n)\n");
		scanf("%d%d", &m, &n);
		if ((m * m + n * n + 2 * m * p + 2 * n * q + s) == 0)
			printf("the point lies in the circle \n");
		else if ((m * m + n * n + 2 * m * p + 2 * n * q + s) << 0)
			printf("the point lies inside the circle\n");
		else
			printf("the point lies outside the circle \n");



	}

	return 0;
}

 


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
