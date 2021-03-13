#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<string.h>

using namespace std;

int main(){
	
	int aleatorio, numUser;
	int contIntentos=0;
	char respuesta;
	
	
	srand(time(NULL)); // cambiar la semilla para el calculo del aleatorio
	aleatorio=1+rand()%100+1-1;
	cout << "\nAdivina el numero generado entre 1 y 100 ";	
	do{
		do{
			do{
				cout<<"\nIngrese un numero: ";
				cin>>numUser;
				if(numUser<0){
					cout<<"\nLos numeros negativos NO son validos";
				}else if(numUser>100){
					cout<<"\nSolo se permiten numeros hasta el 100";
				}
			}while(numUser<=0);
			
			if(numUser<aleatorio){
				cout<<"El numero ingresado es menor al que debe adivinar";
			}else if(numUser>aleatorio){
				cout<<"El numero ingresado es mayor al que debe adivinar";		
			}else{
				cout<<"\n\tFELICITACIONES!!\nAdivinaste el numero en: "<<contIntentos<<" intentos";
				cout<<"\n\nDesea volver a jugar? S/N: ";
				cin>>respuesta;
				if(respuesta=='S'){
					aleatorio=1+rand()%100+1-1;
					cout << "\nAdivina el numero generado entre 1 y 100 ";
					contIntentos=-1;
				}else{
					cout<<"\n\n\tGracias por jugar :)";
				}
			}
			contIntentos++;
		}while(respuesta=='S');
	}while(numUser!=aleatorio);
return 0;
}
