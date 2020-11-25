class Fecha{
  public:
  Fecha();
  Fecha(int, int);
  ~Fecha();
  int getDia();
  int getMes();
  void setDia(int);
  void setMes(int);

  private:
  int dia, mes;
};
Fecha :: Fecha(){
  dia = 1;
  mes = 1;
}
Fecha :: Fecha(int day, int month){
  dia = day;
  mes = month;
}
Fecha :: ~Fecha(){
}
int Fecha :: getDia(){
  return dia;
}
int Fecha :: getMes(){
  return mes;
}

void Fecha :: setDia(int day){
  dia = day;
}
void Fecha :: setMes(int month){
  mes = month;
}