#include<iostream>
using namespace std;
 int  Cambio(int km){
       
          
          if (km > 5000){
            return 1;
          }
          if(km > 10000){
            return 2;
          }
          if(km >20000){
            return 3;
          }
          if(km > 100000){
            return 4;
          }



    }

  int Lavado(int dias){
    if( dias >= 1 && dias <= 14){
      return 1;
    }
    if(dias == 15){
      return 2;
    }
    if(dias > 15 && dias <= 30){
      return 3;
    }
  }
int main(){
    int i = 1;
    int opcion;
    int km;
    int dias;
    
/* string aceite = "Cambio de aceite ";
         string filtro = "Cambio de filtro de combustible ";
          string bujias = "Cambio de Bujias ";
          string velocidades = "Cambio de caja de velocides ";
          string resultado;*/

   

    
    do{
        cout<<"Seleccione una opcion:\n1.Funcion cambio.\n2.Funcion lavado.\n3.Funcion salir\n";
          cin >> opcion;
    switch(opcion){
        case 1:
        cout<<"Ingrese kilometros recorridos";
        cin >> km;
        switch(Cambio(km)){
            case 1:
                cout<<"Necesita cambio de aceite\n";
                break;
            case 2:
                cout<<"Necesita cambio de filtro de combustible\n";
                break;
            case 3:
                cout <<"Necesita cambio de bujias\n";
            case 4: 
                cout << "Necesita cambio de caja de velocidades\n";
            break;
             default:
                break;

        }
        


        break;

        case 2:
           cout<<"Ingrese la fecha del mes";

        cin >> dias;
        switch(Lavado(dias)){
            case 1:
                cout<<"Necesita limpieza intertior\n";
                break;
            case 2:
                cout<<"Necesita lavado\n";
                break;
            case 3:
                cout <<"Necesita limpieza completa\n";
            
             default:
                break;

        }
        break;

        case 3:
        i = 0;
        break;

        default:
             break; 

    }



    }while(i != 0);

    return 0;
}