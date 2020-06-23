
#include <stdio.h>
#include<stdlib.h>
#include <math.h>

float raiz(float x) {
float r;
r=sin(x);  //pow(2.71828,x)-3*x;//   //Ejemplo de definicion de funcion (x * x * x) + (23 * x) - 100; //(x * x * x) - 2;
return r;
}



float biseccion(float a,float b,float epsilon){

	int iteraciones;
	float xmedio=0;
  double n=0;


	iteraciones=0; //Comenzamos en 0




	n=( ( log(b-a)-log(epsilon) )/log(2) ); //Con esto calculo el numero de pasos

	if(iteraciones==0){
       b=a+1;
	   xmedio=(a+b)/2;


        /*printf("iteracion=%d\n",iteraciones);
        printf("raiz=%f\n",xmedio);
        printf("***************************************************\n");*/
        iteraciones=iteraciones+1;
        //b=xmedio;
	}


   	/*printf("xm=%f\n",xmedio);
   	printf("f(0)=%f\n",raiz(a));
	                                  <-----Usados para comrpobar valores
	printf("f(1)=%f\n",raiz(xmedio));

	printf("n=%fl\n",n);*/



   while(iteraciones<=n){ //Aqui es la condicion de paro dependiendo del epsilon


		//printf("f(a)=%f\n",raiz(a));

		//printf("f(b)=%f\n",raiz(b));

		xmedio=(a+b)/2;

		if(raiz(a)*raiz(xmedio)<0){
		b=xmedio;
		iteraciones=iteraciones+1;
		/*printf("raiz a la izquierda\n");
        printf("iteracion:%d\n",iteraciones);
        printf("raiz=%f\n",xmedio);
        printf("***************************************************\n");*/



        }
    	else{

		a=xmedio;
		iteraciones=iteraciones+1;
		/*printf("raiz a la derecha\n");
        printf("iteracion:%d\n",iteraciones);
        printf("raiz=%f\n",xmedio);
        printf("***************************************************\n");*/
		}
	}


	return xmedio;

}

/* Funci�n principal */
int main (int argc,char **argv)
{
	float a,b;
	int iteraciones;
	float xmedio,epsilon;
    double n;

	printf("Ingresa el punto a \n");
	scanf("%f",&a);
	printf("Ingresa el punto b \n");
	scanf("%f",&b);
	printf("Ingresa epsilon \n");
	scanf("%f",&epsilon);
	fflush( stdin );
	printf("***************************************************\n");

	while (a<=b){

		/*printf("***************************************************\n");
		printf("xmedio=%f\n ",biseccion(a,b,epsilon));
		printf("funcion evaluada %f\n",raiz(biseccion(a,b,epsilon)));
		printf("***************************************************\n");*/

		printf("\n");

		if(raiz(biseccion(a,b,epsilon))>-0.00009 && raiz(biseccion(a,b,epsilon))<0.00009){
		printf("***************************************************\n");
		printf("Raiz=%f\n",biseccion(a,b,epsilon));
		printf("***************************************************\n");
		printf("\n");
		a++;

 		}
		else{
			a++;
		}
		//xmedio=biseccion(a,b,epsilon);

	}



return 0;
}
