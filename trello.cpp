#include <iostream>
//variables para otras cosas del programa
int acc;
//variables para los whiles xd
char continuar;

int main(){
	continuar='s';
	while (continuar=='s'){
		std::cout<<"bienvenido a trello "<<endl;
		std::cout<<"---------------------------------"<<endl;
		std::cout<<"1- añadir una nueva tarea \n";
		std::cout<<"2- ver progresión de la tareas \n";
		std::cout<<"3- ver tareas completadas \n";
		std::cout<<" ";
		std::cout<<"¿que es lo que desea hacer? ";
		std::cin>>acc;
		std::cout<<"---------------------------------"<<endl;
		
		while((acc>3) and (acc<1)){
			system("cls");
			std::cout<<"ha ingresado un digito erroneo\n";
			return 0;
			std::cout<<"bienvenido a trello "<<endl;
			std::cout<<"---------------------------------"<<endl;
			std::cout<<"1- añadir una nueva tarea \n";
			std::cout<<"2- ver progresión de la tareas \n";
			std::cout<<"3- ver tareas completadas \n";
			std::cout<<" ";
			std::cout<<"¿que es lo que desea hacer? ";
			std::cin>>acc;
			std::cout<<"---------------------------------"<<endl;
		}
		
		switch(acc){
			case 1:	
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


template <class vector>
int uno(){
	
}
