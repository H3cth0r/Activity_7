#include "Fecha.h"
class Empleado{
  public:
  // Constructor and Desconstructor
  Empleado();
  Empleado(string, float, Fecha);
  ~Empleado();
  // Getters
  string getNombreEmp();
  float getSueldoEmp();
  Fecha getFecha();
  Fecha getDia();
  Fecha getMes();
  // Setters
  void setNombreEmp(string);
  void setSueldo(float);
  void setFecha(Fecha);
  // Additional 
  void subeSueldo(float);
  void printData();
  private: // Atributes
  string nombreEmp;
  float sueldoEmp;
  Fecha cumpleAniosEmp;
};
// Constructor and Desconstructor
Empleado :: Empleado(){
}
Empleado :: Empleado(string name, float salary, Fecha birth){
  nombreEmp = name;
  sueldoEmp = salary;
  cumpleAniosEmp = birth;
}
Empleado :: ~Empleado(){
}
// Getters
string Empleado :: getNombreEmp(){
  return nombreEmp;
} 
float Empleado :: getSueldoEmp(){
  return sueldoEmp;
}
Fecha Empleado :: getFecha(){
  return cumpleAniosEmp;
}
// Setters
void Empleado :: setNombreEmp(string name){
  nombreEmp = name;
}
void Empleado :: setSueldo(float salary){
  sueldoEmp = salary;
}
void Empleado :: setFecha(Fecha date){
  cumpleAniosEmp = date;
}
// Additional
void Empleado :: subeSueldo(float newSalary){
  if (newSalary >= 0 && newSalary <= 10 ){
    sueldoEmp += (newSalary * sueldoEmp) / 100;
  }else{
    cout << "Porcentaje inválido, no hay incremento salarial" << endl;
  }
}
void Empleado :: printData(){
  cout << "Nombre: " << nombreEmp << " Sueldo: " << sueldoEmp << " Cumpleaños Dia: " << cumpleAniosEmp.getDia() <<" Mes: "<< cumpleAniosEmp.getMes()<< endl;
}