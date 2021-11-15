#include <iostream>
#include <stdlib.h>
using namespace std;

//construllendo gotoxy
void gotoxy(int x, int y){
	printf("\x1B[%d;%df", y, x);
	fflush(stdout);
}

//construyendo el marco

void intRectangulo(int top, int left, int largo, int alto){
	//orillas verticales
	for(int i = 0; i<= alto; i++){
		gotoxy(left, top + i);
		cout << "│";
		gotoxy(left + largo, top + i);
		cout << "│";
	}
	//	orillas horizontales
	for(int j = 0; j <= largo; j++){
		gotoxy(left + j, top);
		cout << "─";
		gotoxy(left + j, top + alto);
		cout << "─";
	}
	//esquinas
	gotoxy(left, top);
	cout << "┌";
	gotoxy(left, top + alto);
	cout << "└";
	gotoxy(left + largo,  top);
	cout << "┐";
	gotoxy(left + largo, top + alto);
	cout << "┘";
	cout << "\n";
}


//informacion dentro del marco

void info(int x_pos, int y_pos){
	int x_pos2 = x_pos + 28;
	gotoxy(x_pos, y_pos);
	system("cat pic.txt");
	gotoxy(x_pos2, y_pos);
	cout << "NOMBRE: Lu";
	gotoxy(x_pos2, y_pos + 1);
	cout << "APELLIDO: ninguno";
	gotoxy(x_pos2, y_pos + 3);
	cout << "FECHA Y LUGAR DE NACIMIENTO:";
	gotoxy(x_pos2, y_pos + 4);
	cout << "ningun lugar      11-11-1899";
	gotoxy(x_pos2, y_pos + 5);
	cout << "FECHA CREADA     VENCIMIENTO:";
	gotoxy(x_pos2, y_pos + 6);
	cout << "10-12-2021       10-12-2025";
	gotoxy(x_pos, y_pos + 17);
	cout << "/^([a-zA-z0-9_\-\.\+]+)@([a-zA-z0-9_\-\.]+)\.([a-zA-Z]{2,5})$/";

}


int main(){
	info(2,2);
	intRectangulo(0,0,60,20);

	return 0;
}
