#include <iostream>
#include <conio.h>
#include <string.h>

//variables
int opcion, cont1=0, cont2;
char tareas[20][10], tarea[20], subtarea[20];

//prototipos de funciones
void menu();
void agregartarea(int contador1, char tarea_agregada);
void agregarsubtarea(int contador1, int contador2, char subtarea_agregada);

int main(){
	int A=1;
	int B=1;
	
	while(A==1){
		system("cls");
		menu();
		std::cin>>opcion;
		
		if(opcion>3){
			system("cls");
			std::cout<<"Se ha equivocado de digito\n";
			std::cout<<"Por favor pruebe a ingresar el digito correcto\n";
			getch();
		} else{
			system("cls");
			switch(opcion){
				case 1:
					std::cin.ignore();
					std::cout<<"Ingrese su tarea: ";
					std::cin.getline(tarea,20,'\n');
					
					agregartarea(cont1, tarea[20]);
					
					while((B!=2) and (cont2<=10)){
						system("cls");
						std::cout<<"Ingrese su subtarea: ";
						std::cin.getline(subtarea,20,'\n');
						agregarsubtarea(cont1,cont2,subtarea[20]);
						std::cout<<"\n \n";
						std::cout<<"Desea agregar otra subtarea? ";
						std::cin>>B;
					}
				break;
				
				case 2:
					
				break;
			}
		}
	}
	return 0;
}

void menu(){
	std::cout<<"Bienvenido "<<"\n";
	std::cout<<"\n \n";
	std::cout<<"OPCIONES A REALIZAR: \n";
	std::cout<<"1-> Agregar una nueva tarea"<<"\n";
	std::cout<<"2-> Ver lista de tareas"<<"\n";
	std::cout<<"3-> Realizar un avance en una tarea"<<"\n";
	std::cout<<"\n";
	std::cout<<"Digite su opcion a realizar: ";
}

void agregartarea(int contador1, char tarea_agregada){
	tareas[contador1][0]=tarea_agregada;
	cont1++;
	cont2=1;
}

void agregarsubtarea(int contador1, int contador2, char subtarea_agregada){
	tareas[contador1][contador2]=subtarea_agregada;
	cont2++;
}

