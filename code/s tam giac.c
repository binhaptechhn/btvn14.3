#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,h,s;
	printf ("nhap day = ");
	scanf ("%f", &a);
	printf ("nhap chieu cao = ");
	scanf ("%f", &h);
	s = (a*h)/2;
	if (a<=0){
		printf ("khong phai hinh tam giac\n");
  	return 0;
	}
	if (h<=0){
		printf("khong phai hinh tam giac\n");
	return 0;
	}else
		printf ("dien tich hinh tam giac = %0.2f\n",s);
	
	return 0;
}
