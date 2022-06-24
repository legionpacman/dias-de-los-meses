#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
   
    int mes;
   
  cout<<"ingrese un numero:";cin>>mes;
   
    switch(mes){
   
    case 1:cout<<"enero, corresponde al 1 mes del año "<< endl;
    cout<<"tiene 30 dias"<< endl;
    break;
   
    case 2:cout<<"febrero, corresponde al 2 mes del año "<<endl;
    cout<<"tiene 29 dias"<< endl;
    break;
   
    case 3:cout<<"marzo, corresponde al 3 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 4:cout<<"abril, corresponde al 4 mes del año "<<endl;
    cout<<"tiene 30 dias"<<endl;
    break;
   
    case 5:cout<<"mayo, corresponde al 5 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 6:cout<<"junio, corresponde al 6 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 7:cout<<"julio, corresponde al 7 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 8:cout<<"agosto, corresponde al 8 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 9:cout<<"setiembre, corresponde al 9 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 10:cout<<"octubre, corresponde al 10 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 11:cout<<"noviembre, corresponde al 11 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    case 12:cout<<"diciembre, corresponde al 12 mes del año "<<endl;
    cout<<"tiene 31 dias"<<endl;
    break;
   
    default:cout<<"este mes no existe";
    break;
   
    }
   
     system("PAUSE");
    return EXIT_SUCCESS;
}
