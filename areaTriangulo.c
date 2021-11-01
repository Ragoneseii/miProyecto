#include<stdio.h>

float areaTriangle(float base, float altura);

int main(){
float b, a;
  printf("calcular el area de un triangulo\n");
  printf("Ingresa el valor de la base: \n");
  scanf("%f",&b);
  printf("Ingresa el valor de la altura: \n");
  scanf("%f",&a);

  printf("El area del triangulo es: \n%.2f", areaTriangle(b,a));

}

float areaTriangle(float base, float altura){
  float area;

  area= (base*altura)/2;
  return area;
}
