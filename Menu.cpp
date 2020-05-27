/*
 * Menu.cpp
 *
 *  Created on: 25 may. 2020
 *      Author: nanis
 */

#include "Menu.h"
#include <iostream>
#include <stdio.h>
#include "ProfesorVista.h"
#include <stdlib.h>


using namespace std;

Menu::Menu() {
	// TODO Auto-generated constructor stub

}

Menu::~Menu() {
	// TODO Auto-generated destructor stub
}

void Menu::muestrameMenu(){

	int resp;

	cout<<"\tLas opcione son:"<<endl;
	cout<<"\t1.-REGISTRAR"<<endl;
	cout<<"\t1.-MODIFICAR"<<endl;
	cout<<"\t1.-BUSCAR"<<endl;

	cin>>resp;

	switch(resp){
	case 1:
		ProfesorVista *profesorVista;
		profesorVista = new ProfesorVista;
		profesorVista ->wRegistraProfesor();

		break;
	case 2:
		cout<<"aun"<<endl;
		break;
	case 3:
		cout<<"aun"<<endl;
	}




}

