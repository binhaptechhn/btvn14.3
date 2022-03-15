#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float  s,c,r;
	const float PI = 3.14;
	
	printf ("nhap ban kinh: ");
	scanf ("%f", &r );
	s =pow(r,2) * PI;
	c =r*2 * PI;
	if( r <= 0){
		printf ("Gia tri khong hop le ");
	}else{
		printf ("Dien tich hinh tron la: %0.2f\n",s);
		printf ("Chu vi hinh tron la: %0.2f\n",c);
	} 
	return 0;
}
