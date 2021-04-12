#include <iostream>
using namespace std ;

//***********************************************************************************************************************************************************************************************************
//						Nombre y apellido: Justo Alfredo Perez Choque						
//***********************************************************************************************************************************************************************************************************



//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************


char escoger()   										 // Funcion para escoger al personaje xd (Es el que nos mostro en la clase).
{
  char opcion;
  
  while(true) {																 // While para que se ingrese "o" u "X".	
    cout<<"Escoja ser X u O: ";
    cin>>opcion;
    if( opcion != 'X' && opcion != 'O' && opcion != 'x' && opcion != 'o' )	 // Para que SOLO escoja X u O.
      cout << "Debe escoger X u O: " <<endl;
    else{																	 // Si escogio X u O, pasara por el else
      cout << "Usted ha elejido ser: " << opcion << "\n";
      if( opcion == 'X' || opcion=='x' )									 // Para ver si retorna X u O
        return 'X';																
      else
        return 'O';
    }
  }
  
  return -1;
}



//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************



int iniciarmatriz()									 	// Funcion que crea la matriz.
{
	int filas = 3;										
	int columnas  = 3;
	int matriz[filas][columnas];						// Un arreglo que contendra filas x columnas, en este caso 3x3.
	int o = 1;											// Variable que se ira sumando para mostrar el 1,2,3,4,5,6,7,8,9 en la matriz.
	
	
	for (int i = 0; i < filas; i ++)					// Este for crea la matriz asi como en python.
	{	
		for (int j = 0; j < columnas; j++)
		{
			matriz[i][j] = o;
			o ++;
		}
		
	}
	
	
	
	
	for (int i = 0; i < filas; i ++)					// Este for imprime la matriz. Este es de las filas.
	{	
		for (int j = 0; j < columnas; j++)				// For para las columnas.
		{	
			if (j == 2)									// Este if evita que aparezca lieas de mas al terminar una fila.
			{
				cout<<matriz[i][j]<<"     ";
			}
			else										//Hace que aparezcan "|". 
			{
				cout<<matriz[i][j]<<"  |  ";	
			}
			

		}
		if (i != 2)										// Este if hace que ya no se impriman guiones al final.
		{	
			cout <<endl;
			for (int i = 0 ;i < columnas; i ++)			//Este for pone los guiones(-)
			{
				
				cout <<"-----";
				
			}
			
		}
		cout <<endl;
	}
	
	return **matriz;                                     // Con este empezo mi sufrimiento, hice varios intentos busque en internet  y no 
														 //	logre hacer que retorne la matriz le deje el codigo de mi intento fallido al final de todo.
}


//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************



int posicion()											// Funcion que hace que el usuario escoja la posicion de su personaje ajsd.
{
	int posicion;															
	cout<<"Coloque la posicion(del 0 al 9) de la 'X': ";cin >> posicion;
	while (posicion < 1 or posicion > 9)
	{
		cout<<"Elija un valor desde (1 a 9) para 'X':  ";cin >> posicion;
	}
	return posicion;
}


//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************


void colocar(int x,char y)								// Funcion que coloca su personaje en la posicion que elijio.
{
	int filas = 3;
	int columnas  = 3;
	char  matriz[filas][columnas];						// Un arreglo que contendra filas x columnas, en este caso 3x3.
	int o = 1;											// Variable que se ira sumando para mostrar el 1,2,3,4,5,6,7,8,9 en la matriz.
		
		
		
	for (int i = 0; i < filas; i ++)					// Este for crea la matriz asi como en python.
	{	
		for (int j = 0; j < columnas; j++)
		{
			if (o == x)									//Este if pregunta: si la o(la posicion) == posicion de usuario ---> pones el personaje.
			{
				matriz[i][j] = y;
				o++;
			}	
			else 										//De lo contrario pone espacios.
			{
				matriz[i][j] = ' ';						//NOTA: En este else, si imprimo un int, me saldran cuadros raros, tanteando vi que la matriz declarada 
				o ++;									//en esta funcion esta en char, entonces por eso me sale error, si fuera viceversa imprimiria los numeros 
			}											//pero no la cadena "opcion", es decir cambiar  el char matriz a int matriz.
			
		}
		
	}
	
	
	for (int i = 0; i < filas; i ++)					//Esta for imprime la matriz, Este es filas
	{	
		for (int j = 0; j < columnas; j++)				// For para las columnas.
		{	
			if (j == 2)									// Este if evita que aparezca lieas de mas al terminar una fila.
			{
				cout<<matriz[i][j]<<"     ";
			}
			else										//Hace que aparezcan "|". 
			{
				cout<<matriz[i][j]<<"  |  ";	
			}

		}
		if (i != 2) 									// Este if hace que ya no se impriman guiones al final.
		{	
			cout <<endl;
			for (int i = 0 ;i < columnas; i ++)			//Este for pone los guiones(-)
			{
				
				cout <<"-----";
				
			}
			
		}
		cout <<endl;
	}
	
	
}



//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************
int main() 
{
	
	int opcion = escoger();					//Opcion para escoger la X u la O la guarda en la variable opcion, use el que nos mostro en la clase :).
	
	
	cout<<"\n\n\n";							//
	
	
	iniciarmatriz();						//Crea una matriz.
	
	
	cout<<"\n\n\n";							//	
	
	
	int pos = posicion();					//Obtiene la posicion que desea el usuario.
	
	
	cout<<"\n\n\n";							//
	
	
	colocar(pos,opcion);					//Coloca la "X" o la "O" segun la posicion que haya elegido.
	

}










//***********************************************************************************************************************************************************************************************************
//***********************************************************************************************************************************************************************************************************
// Mi intento fallido de retornar la matriz 
/*
int iniciar(int **matriz)
{

	int o = 1;
	for (int i = 0; i < 3; i++)
	{
		cout<<"asdasd";
		for (int j = 0; j < 3; j++)
		{
			
			matriz[i][j] = o;
			cout<<matriz[i][j];
			o++;
		}
		cout<<endl;
	}
	
	return **matriz
	

}

*/
