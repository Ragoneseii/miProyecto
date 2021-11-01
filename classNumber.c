#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
void clear(void);
int resultado(int);
int resultado2 (int);
int validate (char *a){
    unsigned x;
    for( x=0; x <  strlen( a ); x++ )
        if(!isdigit (a[x]))return 1;
    return 0;
}

   int   valData(int i){
   // int i;
    char buffer[BUFSIZ];
   // printf("Ingesa un numero: ");
    if( fgets(buffer, sizeof buffer, stdin) !=NULL ){
        buffer[strlen(buffer)-1]='\0';
        if(validate (buffer)==0){
            i=atoi(buffer);
         //   printf("you insert: %d\n",i);
        }
        else
            printf("Error: Input validation\n ");
    }else
        printf("Error reading input\n" );
    }

int main(){
int opcion,n;
clear();

    printf("\n\t\t\t\tPRIMER EJERCICIO\n\n\n");
    printf("\n\tDigite cuatro numeros enteros positivos: \n");
do{
  printf("1.- \n");
  printf("2.- \n");
  printf("3.- \n");
  printf("4.- \n");
  printf("5.- Mostrar resultados\n");
  printf("6.- Salir\n");

  do{
    printf("Escoge un numero  (1-6)\t\t");
    scanf("%d",&opcion);
  }while(opcion < 1 || opcion > 6);

  switch(opcion){
            case 1: 
                printf("\n 1: ");
                printf("Vuelva a ingresar el numero: ");
                scanf("%d",&n);
                resultado(n);
                break;
            case 2:
                printf("\n 2: ");
                printf("Vuelva a ingresar el numero: ");
                scanf("%d",&n);
                resultado(n);
                break;
            case 3:
                printf("\n 3: ");
                printf("Vuelva a ingresar el numero: ");
                scanf("%d",&n);
                resultado(n);
                break;
            case 4:
                printf("\n 4: ");
                printf("Vuelva a ingresar el numero: ");
                scanf("%d",&n);
                resultado(n);
                break;
            case 5:
                printf("\n 5: ");
                printf("Enviar resultados\n");
                printf("presione 5\n");
                scanf("%d",&n);
                resultado(n);
                break;
            case 6:
                    printf("\nAdios");
                    break;
  }
}while(opcion !=6);
  return 0;
}

/*
void classN(){
    int a,b,c,d,n;
scanf("%d",&n);
    if(n == 1){
     printf("\nIngrese el numero entero: ");
      scanf("%d",&a);
      retrun a;
    }
    if(n == 2){ 
     printf("\nIngrese el numero entero: ");
      scanf("%d",&b);
      return b;
    }
    if(n == 3){ 
     printf("\nIngrese el numero entero: ");
      scanf("%d",&c);
      return c;
    }
    if(n == 4){ 
     printf("\nIngrese el numero entero: ");
      scanf("%d",&d);
      return d;
    }
    resultado(a,b,c,d);
}
*/

int resultado(int n){
    int a,b,c,d;
    char e;
if (n == 1){
 printf("Ingrese un numero entero: ");
 scanf("%d",&a);
 return a;
}
else
 if(n == 2){
 printf("Ingrese un numero entero: ");
 scanf("%d",&b);
 return b;
 }
else
 if(n == 3){
 printf("Ingrese un numero entero: ");
 scanf("%d",&c);
 return  c;
 }
else
 if(n == 4){
 printf("Ingrese un numero entero: ");
 scanf("%d",&d);
 return d;
 }
else
if(n == 5){
printf("Desea mostrar el resultado? (Y/N)");
scanf("%c",&e);
if(e == 'Y'){
     resultado2(a);
     resultado2(b);
     resultado2(c);
     resultado2(d);
} else{ 
     clear();
     
     }
    }
}

int resultado2(int r){
    
    if(r > 0){
        if(r%2 == 0){
            printf("\n\t\tEl primer numero %d es par",r);
        }else{
            printf("\n\t\tEl primer numero %d es impar",r);
        }
       /* if(b%2==0){
            printf("\n\t\tEl segundo numero %d es par",b);
        }else{
            printf("\n\t\tEl segundo numero %d es impar",b);
        }
        if(c%2==0){
            printf("\n\t\tEl tercer numero %d es par",c);
        }else{
            printf("\n\t\tEl tercer numero %d es impar",c);
        }
        if(d%2==0){
            printf("\n\t\tEl cuarto numero %d es par",d);
        }else{
            printf("\n\t\tEl cuarto numero %d es impar",d);
        }}else{
            printf("\n\t\tLos numeros dados %d, %d, %d, %d no son todos positivos\n\n"
                    ,a,b,c,d);*/
        }

        }
    void clear(void){
        printf("\033[2J");    //Limpiar pantalla
        printf("\033[0;0f");  //MUeve el cursor en la esquina  superior izquierda
    
    }

