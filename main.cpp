//main v3
//Line Intersection Challenge (B-LNE-0)
//Note: will have to manually enter in values in window for this version

#include <stdio.h>
#include <conio.h>
#include <iostream>
#include <math.h>
using namespace std;

int main(){
	int x1 = 0, y1, x2, y2;
	int cx, cy, r;

	printf("enter x1:   ");
	scanf("%d", &x1);
	printf("x1 entered is = %d \n", x1);

	printf("enter y1:   ");
	scanf("%d", &y1);
	printf("y1 entered is = %d \n", y1);

	printf("enter x2:   ");
	scanf("%d", &x2);
	printf("x2 entered is = %d \n", x2);

	printf("enter y2:   ");
	scanf("%d", &y2);
	printf("y2 entered is = %d \n", y2);

	printf("enter cx:   ");
	scanf("%d", &cx);
	printf("cx entered is = %d \n", cx);

	printf("enter cy:   ");
	scanf("%d", &cy);
	printf("cy entered is = %d \n", cy);

	printf("enter r:   ");
	scanf("%d", &r);
	printf("r entered is = %d \n", r);


	int vectorx, vectory;

	vectorx = x2 - x1;
	vectory = y2 - y1;

	printf("line vector x is: %d\n", vectorx);
	printf("line vector y is: %d\n", vectory);

	double length  = sqrt(pow((double)vectorx,2) + pow((double)vectory,2));

	printf("line vector length is: %f\n", length);

	double unitvectorx, unitvectory;
	unitvectorx = vectorx/length;
	unitvectory = vectory/length;
	printf("line unit vector x length is: %f\n", unitvectorx);
	printf("line unit vector y length is: %f\n", unitvectory);

	double x, y;

	for(int i = 0; i < 1000; i++){

		x = x1 + unitvectorx*i;
		y = y1 + unitvectory*i;

		if(pow((x-cx),2)+pow((y-cy),2) == pow(r,2)){
			printf("\nFOUND on x= %i y= %i\n", x,y);
		}
	}
	_getch();
}