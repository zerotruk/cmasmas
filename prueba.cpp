//Miguel Angel Alvarez Arroyo
//C++ Nivel II
//Sena formación virtual
#include <iostream>
using namespace std;
//declaracion de funciones
int Alumnos(int matricula);
float Promedio();
float arreglo[5];
int matricula;
main()
{
   int Alumnos(matricula);
   float Promedio();
}
//llamado matricula del alumno 
int Alumnos(int matricula)
   {
   	  cout<<"por favor ingrese la matricula del alumno"<<endl;
      cin >>matricula;
      if(matricula<0 && matricula>35)
      {
      	cout<<"Error solo hay 35 estudiantes"<<endl;
	  }
      return matricula;
   }
//calcula promedio
float Promedio() 
{
	for (int i=0;i<5;i++)
	{
		cout<<"por favor ingrese las notas del alumno :"<<Alumnos(matricula)<<"nota :"<<i<<endl;
		cin>>arreglo[i];
	}
	return arreglo;
}
