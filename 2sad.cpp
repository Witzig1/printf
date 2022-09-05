#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	double  liczba1 = 0,liczba = 0,liczba2= 0;
	int a = 0;
	 while(true){
	 	printf("1) Liczba zmiennoprzecinkowa \n");
	 	printf("2) liczba w systemie 16 \n");
	 	printf("3) zera z przodu \n");
	 	printf("4) wyjscie \n");
	 	printf("wybierz opcje: \n");
	 	scanf("%d",a);
	 	a = getch();
	 
		switch(a)
	{
		case '1':
	printf("Podaj liczbe: ");
	scanf("%lf", &liczba);
	printf("wynik: %4.2f \n", liczba);
	break;
	
		case '2':
	printf("podaj liczbe: ");
	scanf("%lf",&liczba1);
	printf("wynik: %xf \n",liczba1);
	break;
	
		case '3':
	printf("podaj liczbe: ");
	scanf("%ld",&liczba2);
	printf("wynik: %08d \n",liczba2);
	break;
	
		case '4':
			exit(0);
	}
}
}

