#include <stdio.h>

//prototipovi funkcija
void f1(int);
void f2(int *);

//glavna funkcija
int main(void)
{
int x=5;

printf("Na pocetku je funkcija %d\n",x);

f1(x);

printf("Vrednost x-a nakon prve funkcije %d\n",x);


f2(&x);

printf("Vrednost x-a nakon druge funkcije %d\n",x);
printf("Adresa x-a(trebalo bi da bude ista sa a): %d",&x);

return 0;
}
//definicije funkcija
void f1(int a){
    a=3;
}

void f2(int *a){
    *a=3;
    printf("Adresa pointer-a je %d\n", &a);
    printf("Sadrzaj pointera(ustvari adresa trazene promenljive %d\n", a);
}

