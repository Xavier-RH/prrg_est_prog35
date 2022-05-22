/* Autor: Xavier Romero Hernández, Realizado: 03/03/2022 
	Hacer un programa para un sumilador de ahorro, para que le muestre al usuario cuanto dinero obtendra si ahorra
	una cantidad en un numero de meses en sus sucursal, el banco da actualmente 4% mensual.
	hacerlo con una funcion que reciba como parametros, la cantidad de dinero a ahorrar y a cuantos meses, la
	funcion retornara el total de dinero ahorrado más intereses.
*/

#include <stdio.h>

float calcularAhorro(float capital, int meses);

int main(){
	float dinero, ahorro;
	int periodo;
	
	printf("Introduce la cantidad a ahorrar: $");
	scanf("%f",&dinero);
	printf("Indica a cuantos meses invertiras tu dinero: ");
	scanf("%d",&periodo);
	
	ahorro=calcularAhorro(dinero,periodo);
	
	printf("Al final del periodo obtendras: $%.2f",ahorro);
	
	return 0;
}

float calcularAhorro(float capital, int meses){
	float total=capital;
	for(int i=0;i<meses;i++){
		total=total*0.04+total;
	}
	return total;
}
