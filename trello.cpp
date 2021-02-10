#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

//variables
int opcion, cont1=0, cont2;
string tareas[20][11];
int num[20][2], aux2[20][10];
float porcent;

//prototipos de funciones
void menu();
void agregartarea(int contador1, int contador2, string arraydetarea);
void agregarsubtarea(int contador1, int contador2, string arraydetarea);
void vertareas(int contador1, int contador2);
void progreso();

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
					cout<<"LISTA DE TAREAS:"<<endl;
					vertareas(cont1,cont2);
				break;
				case 3:
					cout<<"ELIJA LA TAREA PARA REALIZAR EL PROGRESO"<<endl;
					progreso();
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
		if(cont2>1){
			cin.ignore();
		}
		cout<<"ingrese su subtarea: ";
		getline(cin,tareas[cont1][cont2]);
		cont2++;
		cout<<"\ndesea agregar otra subtarea? (1=si y 2=no) ";
		cin>>B;
	}
	
	if(cont2>10){
		cont2=10;
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
		porcent=(num[x][1]/num[x][0])*100;
		cout<<"porcentaje: "<<porcent<<"%"<<endl;
		cout<<endl;
		x++;
		y=1;
	}
	getch();
}

void progreso(){
	int num_tarea, k, aux;
	for(int z=0; z<cont1; z++){
		cout<<z+1<<"- "<<tareas[z][0]<<endl;
	}
	cout<<endl<<"Digite el numero de la tarea: ";
	cin>>num_tarea;
	aux=num_tarea-1;
	system("cls");
	cout<<endl<<"TAREA: "<<tareas[aux][0]<<endl;
	cout<<"Lista de subtareas: "<<endl;
	
	k=1;
	while(k<=num[aux][0]-1){
		cout<<k<<"- "<<tareas[aux][k];
		if(aux2[aux][k-1]>0){
			cout<<"  ->  Completada"<<endl;
		} else{
			cout<<"  ->  Pendiente"<<endl;
		}
		k++;
	}
	
	cout<<endl<<"Digite el numero de la subtarea: ";
	cin>>num_tarea;
	
	if(num[aux][1]<num[aux][0]-1){
		num[aux][1]++;
		aux2[aux][num_tarea-1]++;
		cout<<"Acción realizada con exito";
	}else{
		cout<<"accion interrumpida"<<endl;
		cout<<"excede el numero de subtareas que se agregaron en la lista";
	}
	
	getch();
}

