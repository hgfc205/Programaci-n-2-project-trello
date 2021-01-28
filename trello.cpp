#include <iostream>
#include <conio.h>
#include <string.h>

//variables para otras cosas del programa
int acc;
char tareas[100][10][1];
int aux[100][2];
int cont, cont2;

//variables para los ciclos xd
char continuar, continuar2;

//prototipos de funciones
void inicio();
void uno(int contador);
void subtarea(int contador1, int contador2);
void vertareas();

int main(){
	continuar='s';
	
	while (continuar=='s'){
		system("cls");
		inicio();
		std::cin>>acc;
		
		while((acc!=3) and (acc!=1) and (acc!=2) and (acc!=4)){
			system("cls");
			std::cout<<"ha ingresado un digito erroneo \n";
			std::cout<<"\n";
			inicio();
			std::cin>>acc;
		}
		system("cls");
		
		switch(acc){
			case 1:
				uno(cont);
				cont++;
				
				continuar2='s';
				cont2=0;
				
				while(continuar2=='s'){
					system("cls");
					cont2++;
					
					if (cont2<=10){
						subtarea(cont, cont2);
						std::cout<<"\n";
						std::cout<<"desea agregar otra sub tarea? ";
						std::cin>>continuar2;
					} else{
						std::cout<<"el maximo de subtareas es 10";
						cont2=10;
						getch();
						break;
					}
				}
				aux[cont][0]=cont2;
			break;
				
			case 2:
				vertareas();
			break;
			
			case 3:
				
			break;
		}
	}
	return 0;
}

//definiciones de funciones
void inicio(){
	std::cout<<"bienvenido a trello \n";
	std::cout<<"\n---------------------------------\n";
	std::cout<<"1- añadir una nueva tarea \n";
	std::cout<<"2- ver lista de tareas \n";
	std::cout<<"3- realizar progresión de una tarea \n";
	std::cout<<"4- ver tareas completadas \n";
	std::cout<<" \n";
	std::cout<<"que es lo que desea hacer? ";
}

void uno(int contador){
	char tarea[30];
	
	std::cout<<"ingrese su nueva tarea: ";
	std::cin>>tarea;
	tareas[cont][0][0]=tarea[30];
}

void subtarea(int contador1, int contador2){
	char sub_tarea[30];
	
	std::cout<<"ingrese la subtarea: ";
	std::cin>>sub_tarea;
	tareas[cont][cont2][0]=sub_tarea[30];
}

void vertareas(){
	std::cout<<"Lista de tareas: ";
	for (int x=0; x<=cont; x++){
		std::cout<<x<"- "<<tareas[x][0][0];
		
		for (int y=1; y<=aux[cont][0]; y++){
			std::cout<<y<<"- "<<tareas[x][y][0];
		}
	}
	getch();
}

