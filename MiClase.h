class MiClase {
  int var1;
  public:
  MiClase();
  void setVar1(int); //Coloca aquí la declaración o firma del método setVar1
  int getVar1(); //Coloca aquí la declaración o firma del método getVar1
};
MiClase :: MiClase(){//constructor por omisión.
  var1 = 101;
}
void MiClase :: setVar1(int var){
  var1 = var;
}
int MiClase :: getVar1(){//método setVar1
  return var1;
}



// Coloca aquí el código que implementa al constructor por omisión.
// Coloca aquí el código que implementa al método setVar1