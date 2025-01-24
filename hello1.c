#include <stdio.h>

 float cuboid_volume(float a, float b, float h)
{
return(a*b*h);
}

float sphere_volume(float r)
{
return((4.0/3.0)*3.14*(r*r*r));
}

int main () {

 float a, b, h, r;
/*
printf("Podaj dlugosc podstawy prostopadloscianu: ");
scanf("%f", &a);

printf("Podaj szerokosc podstawy prostopadloscianu: ");
scanf("%f", &b);

printf("Podaj wysokosc podstawy prostopadloscianu: ");
scanf("%f", &h);

printf("\n Objetosc prostopadloscianu: %f \n", cuboid_volume(a, b, h));
*/

printf("Podaj promien kuli: ");
scanf("%f", &r);

printf("\n Objetosc kuli: %f \n", sphere_volume(r));

return(0);

}
