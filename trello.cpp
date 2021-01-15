#include <iostream>
#include <conio.h>

//variables para otras cosas del programa
int acc;
char tareas[100,10], cont, cont2;

//variables para los whiles xd
char continuar, continuar2, continuar3;

//prototipos de funciones
char uno(int contador);

int main(){
	continuar='s';
	
	while (continuar=='s'){
		std::cout<<"bienvenido a trello "<<endl;
		td::cout<<"\n---------------------------------\n";
		std::cout<<"1- añadir una nueva tarea \n";
		std::cout<<"2- ver progresión de la tareas \n";
		std::cout<<"3- ver tareas completadas \n";
		std::cout<<" ";
		std::cout<<"¿que es lo que desea hacer? ";
		std::cin>>acc;
		std::cout<<"\n---------------------------------\n";
		
		while((acc!=3) and (acc!=1) and (acc!=2)){
			system("cls");
			std::cout<<"ha ingresado un digito erroneo\n";
			getch();
			std::cout<<"bienvenido a trello "<<endl;
			std::cout<<"\n---------------------------------\n";
			std::cout<<"1- añadir una nueva tarea \n";
			std::cout<<"2- ver progresión de la tareas \n";
			std::cout<<"3- ver tareas completadas \n";
			std::cout<<" ";
			std::cout<<"¿que es lo que desea hacer? ";
			std::cin>>acc;
			std::cout<<"\n---------------------------------\n";
		}
		
		system("cls");
		continuar2='s';
		
		switch(acc){
			case 1:	
			while(continuar2=='s'){
				uno(cont);
				cont++;
				continuar3='s';
				while(continuar3=='s'){
					
					
					std::cout<<"¿desea agregar otra sub tarea? (s = si y n = no)\n";
					std::cin>>continuar3;
				}
				std::cout<<"¿desea agregar otra tarea nueva? (s = si y n = no)\n";
				std::cin>>continuar2;
			}
			break;
			
			case 2:
				
			break;
			
			case 3:
				
			break;
		}
		
		system("cls");
	}
	return 0;
}

//definiciones de funciones
char uno(int contador){
	char tarea;
	
	std::cout<<"ingrese su nueva tarea: ";
	std::cin>>tarea;
	tareas[cont,0]=tarea;
	return 0;
}
