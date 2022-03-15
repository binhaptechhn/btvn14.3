#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
        int lc, y;
        float usd, vnd;

        printf("Doi tu USD sang VND bam so 1\n");
        printf("Doi tu VND sang USD bam so 2\n");
        scanf("%d", &lc);

        printf("Nhap ti gia hom nay: 1 USD =...VND \n");
        scanf("%d", &y);
        if (lc == 1){
            printf("Nhap USD\n");
            scanf("%f", &usd);
            vnd = usd * y;
            printf(" = %0.0f VND", vnd);}
        if (lc == 2){
            printf("Nhap VND\n");
            scanf("%f", &vnd);
            usd = vnd / y;
            printf(" = %0.2f USD", usd);}

}
