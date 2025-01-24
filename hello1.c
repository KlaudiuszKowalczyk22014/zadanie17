#include <stdio.h>

 float cuboid_volume(float a, float b, float h)
{
return(a*b*h);
}

float sphere_volume(float r)
{
return((4.0/3.0)*3.141592*(r*r*r));
}



int main () {
 float a, b, h, r;
int command;

while (1) {
    printf("1 - objetosc prostopadloscionu \n");
    printf("2 - objetosc kuli \n");
    printf("0 - wyjscie \n");

scanf("%id", &command);

if (command==1)
{
    printf("Podaj dlugosc podstawy prostopadloscianu: ");
    scanf("%f", &a);

printf("Podaj szerokosc podstawy prostopadloscianu: ");
scanf("%f", &b);

printf("Podaj wysokosc podstawy prostopadloscianu: ");
scanf("%f", &h);

printf("\n Objetosc prostopadloscianu: %f \n", cuboid_volume(a, b, h));
}
else if(command==2)
{
    printf("Podaj promien kuli: ");
scanf("%f", &r);

printf("\n Objetosc kuli: %f \n", sphere_volume(r));
}
else if(command==0)
{
    printf("Koniec dzialania programu \n");
    return(0);

}
else{
    printf("nieprawidlowy numer polecenia \n");
}
}
}
