#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b,x; 
	
    printf("Nhap a vao: ");
    scanf("%f", &a);
    
    printf("Nhap b vao: ");
    scanf("%f", &b);
    
    if(a == 0)
    {
        printf("Phuong trinh vo nghiem");
    }
    else
    {
       x = -b/a;
       printf("Phuong trinh co nghiem ring biet: %.2f", x);
    }

    return 0;
}
