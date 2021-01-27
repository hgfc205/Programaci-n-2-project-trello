#include <iostream>
#include <conio.h>
#include <string.h>

//variables para otras cosas del programa
int acc;
char tareas[100][10];
int cont, cont2;

//variables para los ciclos xd
char continuar, continuar2, continuar3;
char comparar;

//prototipos de funciones
void inicio();
void uno(int contador);
void subtarea(int contador2);
void vertareas();

int main(){
	continuar='s';
	
	while (continuar=='s')
	{
		system("cls");
		inicio();
		std::cin>>acc;
		
		while((acc!=3) and (acc!=1) and (acc!=2))
		{
			system("cls");
			std::cout<<"ha ingresado un digito erroneo \n";
			std::cout<<"\n";
			inicio();
			std::cin>>acc;
		}
		system("cls");
		
		if (acc==1){
			uno(cont);
			cont++;
			cont2=1;
			
			continuar2='s';
			while (continuar2=='s'){
				system("cls");
				subtarea(cont2);
				
				cont2++;
				std::cout<<"agregar otra sub tarea? ";
				std::cin>>continuar2;
			}
		} else if (acc==2){
			
		}
	}
	return 0;
}

//definiciones de funciones
void inicio(){
	std::cout<<"bienvenido a trello \n";
	std::cout<<"\n---------------------------------\n";
	std::cout<<"1- añadir una nueva tarea \n";
	std::cout<<"2- ver tareas \n";
	std::cout<<"3- realizar progresión de una tarea \n";
	std::cout<<"4- ver tareas completadas \n";
	std::cout<<" \n";
	std::cout<<"que es lo que desea hacer? ";
}

void uno(int contador){
	char tarea;
	
	std::cout<<"ingrese su nueva tarea: ";
	std::cin>>tarea;
	tareas[cont][0]=tarea;
}

void subtarea(int contador2){
	char sub_tarea;
	
	std::cout<<"ingrese la subtarea: ";
	std::cin>>sub_tarea;
	tareas[cont][cont2]=sub_tarea;
}

void vertareas(){
	for (int x=0; x<101; x++){
		std::cout<<tareas[x][0];
		for (int y=1; y<11; y++){
			std::cout<<tareas[x][y];
		}
	}
	getch();
}

