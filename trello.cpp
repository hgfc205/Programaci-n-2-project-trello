#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//variables
int opcion, cont1=0, cont2;
string tareas[20][11];
int num[20][20];

//prototipos de funciones
void menu();
void agregartarea(int contador1, int contador2, string arraydetarea);
void agregarsubtarea(int contador1, int contador2, string arraydetarea);
void vertareas(int contador1, int contador2);

int main(){
	int A=1;
	
	while(A==1){
		system("cls");
		menu();
		std::cin>>opcion;
		
		if(opcion>3){
			system("cls");
			cout<<"Se ha equivocado de digito\n";
			cout<<"Por favor pruebe a ingresar el digito correcto\n";
			getch();
		} else{
			system("cls");
			switch(opcion){
				case 1:
					cin.ignore();
					agregartarea(cont1,cont2,tareas[0][0]);
				break;
				case 2:
					cout<<"LISTA DE TAREAS: \n";
					cout<<"\n";
					vertareas(cont1,cont2);
				break;
			}
		}
	}
	return 0;
}

void menu(){
	cout<<"Bienvenido "<<"\n";
	cout<<"\n \n";
	cout<<"OPCIONES A REALIZAR: \n";
	cout<<"1-> Agregar una nueva tarea"<<"\n";
	cout<<"2-> Ver lista de tareas"<<"\n";
	cout<<"3-> Realizar un avance en una tarea"<<"\n";
	cout<<"\n";
	cout<<"Digite su opcion a realizar: ";
}

void agregartarea(int contador1, int contador2, string arraydetarea){
	cout<<"ingrese su tarea: ";
	getline(cin,tareas[cont1][0]);
	agregarsubtarea(cont1,cont2,tareas[0][0]);
}

void agregarsubtarea(int contador1, int contador2, string arraydetarea){
	int B=1;
	cont2=1;
	while((B!=2)and(cont2<=10)){
		system("cls");
		cout<<"ingrese su subtarea: ";
		getline(cin,tareas[cont1][cont2]);
		cont2++;
		cout<<"\ndesea agregar otra subtarea? (1=si y 2=no) ";
		cin>>B;
	}
	num[cont1][0]=cont2;
	cont1++;
}

void vertareas(int contador1, int contador2){
	int x=0,y=1;
	
	while(x<cont1){
		cout<<x+1<<"- "<<tareas[x][0]<<endl;
		while(y<num[x][0]){
			cout<<x+1<<"."<<y<<"- "<<tareas[x][y]<<endl;
			y++;
		}
		cout<<endl;
		x++;
		y=1;
	}
	getch();
}
