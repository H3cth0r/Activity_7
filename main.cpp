#include <iostream>

using namespace std;

#include "MiClase.h"
#include "Empleado.h"

int main() {
  MiClase miObjeto;
  miObjeto.setVar1(1500);

  cout << miObjeto.getVar1() << endl;

  cout << "--------------------------------" << endl;

  Empleado emp1("Pepe", 10000, Fecha(19, 5)), emp2("Rocio", 12000, Fecha(1,1));
  emp1.printData();
  emp2.printData();
  
  emp1.subeSueldo(15);

  cout << "Nombre: " << emp1.getNombreEmp() << " Sueldo: " << emp1.getSueldoEmp() << endl;
  
  cout << "Sueldo Rocio: "<< emp2.getSueldoEmp() << endl;

  emp1.subeSueldo(5);
  cout << "Nuevo Salario Pepe: " << emp1.getSueldoEmp() << endl; 

  cout <<"Nombre: " << emp1.getNombreEmp() << " Sueldo: " << emp1.getSueldoEmp() << endl;

  return 0;
}