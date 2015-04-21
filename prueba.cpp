//Miguel Angel Alvarez Arroyo
//C++ Nivel II
//Sena formación virtual
#include <iostream>
using namespace std;
//declaracion de funciones
void Alumnos();// Como se estan ingresando datos, la función no retorna nada
float Promedio();
float arreglo[5];
int matricula[35];
main()
{
	Alumnos(); //Cuando se llama la función NO se dice el tipo de retorno
	Promedio();//Por eso quité el int y el float
}
//llamado matricula del alumno 
void Alumnos()
{
	//Al crear un bucle se asegura que los 35 alumnos se ingresen
	cout<<"por favor ingrese los números de matriculas de cada uno de los estudiantes"<<endl;
	for(int i=0; i<35;i++){
		cout<<"Número de matrícula del primer alumno"<<endl;
		cin>>matricula[i];
	}
//Como la función es vacia NO retorna nada
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
