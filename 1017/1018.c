#include <stdio.h>
#include <stdlib.h>


int main() {

  int n;
  int cedula_100 = 0;
  int cedula_50 = 0;
  int cedula_20 = 0;
  int cedula_10 = 0;
  int cedula_5 = 0;
  int cedula_2 = 0;
  int cedula_1 = 0;

  scanf("%d",&n);

  int n_aux = n;

  
  cedula_100=n_aux/100;
  n_aux = n_aux%100;
  cedula_50=n_aux/50;
  n_aux = n_aux%50;
  cedula_20=n_aux/20;
  n_aux = n_aux%20;
  cedula_10=n_aux/10;
  n_aux = n_aux%10;
  cedula_5=n_aux/5;
  n_aux = n_aux%5;
  cedula_2=n_aux/2;
  n_aux = n_aux%2;
  cedula_1=n_aux/1;
    


  printf("%d\n",n);
  printf("%d nota(s) de R$ 100,00\n",cedula_100);
  printf("%d nota(s) de R$ 50,00\n",cedula_50);
  printf("%d nota(s) de R$ 20,00\n",cedula_20);
  printf("%d nota(s) de R$ 10,00\n",cedula_10);
  printf("%d nota(s) de R$ 5,00\n",cedula_5);
  printf("%d nota(s) de R$ 2,00\n",cedula_2);
  printf("%d nota(s) de R$ 1,00\n",cedula_1);

  return 0;
}
