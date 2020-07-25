#include <iostream>
using namespace std;

int main()
{
  int op=1,op1,op2;
  int contador,total;
  double suma,dinero,denero,dfebrero,dmarzo,dabril,dmayo,djunio,djulio,dagosto,dseptiembre,doctubre,dnoviembre,ddiciembre;
  double contadorenero,contadorfebrero,contadormarzo,contadorabril,contadormayo,contadorjunio,contadorjulio,
  contadoragosto,contadorseptiembre,contadoroctubre,contadornoviembre,contadordiciembre;

    while (op !=0)
    {
      cout<<endl;
    cout<< " AHORROS DE JUANITO "<<endl;
    cout<< " 1- Depositar dinero"<<endl;
    cout<< " 2- consultar dinero"<<endl;
    cout<< " 0- Salir"<<endl;
    cout<<"Ingrese opción: ";
    cin>>op;
switch (op)
    {
      case 1:
       cout<<"Ingrese mes: ";
        cin>>op1;
    while (op1<=12)
      {
        switch (op1)
      {
        case 1:
        cout<<"Ingrese dinero del mes enero: ";
        cin>>denero;
        contadorenero = denero;
        break;

        case 2:
        cout<<"Ingrese dinero del mes febrero: ";
        cin>>dfebrero;
         contadorfebrero = dfebrero;
        break;

        case 3:
        cout<<"Ingrese dinero del mes marzo: ";
        cin>>dmarzo;
         contadormarzo = dmarzo;
        break;

        case 4:
        cout<<"Ingrese dinero del mes abril: ";
        cin>>dabril;
        contadorabril = dabril;
        break;

        case 5:
        cout<<"Ingrese dinero del mes mayo: ";
        cin>>dmayo;
        contadormayo = dmayo;
        break;

        case 6:
        cout<<"Ingrese dinero del mes junio: ";
        cin>>djunio;
        contadorjunio = djunio;
        break;

        case 7:
        cout<<"Ingrese dinero del mes julio: ";
        cin>>djulio;
        contadorjulio = djulio;
        break;

        case 8:
        cout<<"Ingrese dinero del mes agosto: ";
        cin>>dagosto;
        contadoragosto = dagosto;
        break;

        case 9:
        cout<<"Ingrese dinero del mes septiembre: ";
        cin>>dseptiembre;
        contadorseptiembre = dseptiembre;
        break;

        case 10:
        cout<<"Ingrese dinero del mes octubre: ";
        cin>>doctubre;
        contadoroctubre = doctubre;
        break;

        case 11:
        cout<<"Ingrese dinero del mes noviembre: ";
        cin>>dnoviembre;
        contadornoviembre = dnoviembre;
        break;

        case 12:
        cout<<"Ingrese dinero del mes diciembre: ";
        cin>>ddiciembre;
        contadordiciembre = ddiciembre;
        break;
      }
      break;

            break;
      }
break;

      case 2:
        cout<<"Ingrese mes a consultar: ";
        cin>>op2;
       switch (op2)
      {
        case 1:
        cout<<"El dinero de enero es : "<< contadorenero <<endl ;
        break;

        case 2:
        cout<<"El dinero de febrero es : "<< contadorfebrero <<endl;
        break;

        case 3:
        cout<<"El dinero de marzo es : "<< contadormarzo <<endl;
        break;

        case 4:
        cout<<"El dinero de abril es : "<< contadorabril<<endl;
        break;

        case 5:
        cout<<"El dinero de mayo es: "<<contadormayo<<endl;
        break;

        case 6:
        cout<<"El dinero de junio es: "<<contadorjunio<<endl;
        break;

        case 7:
        cout<<"El dinero de julio es: "<<contadorjulio<<endl;
        break;

        case 8:
        cout<<"El dinero de agosto es: "<< contadoragosto <<endl;
        break;

        case 9:
        cout<<"El dinero de septiembre es: "<< contadorseptiembre<<endl;
        break;

        case 10:
        cout<<"El dinero de octubre es: "<< contadoroctubre<<endl;
        break;

        case 11:
        cout<<"El dinero de noviembre es: "<< contadornoviembre<<endl;
        break;

        case 12:
        cout<<"El dinero de diciembre es: "<< contadordiciembre<<endl;
        break;
      }
      break;

      case 0:
      suma = contadorenero + contadorfebrero + contadormarzo+
      contadorabril+contadormayo+contadorjunio+contadorjulio+contadoragosto
      +contadorseptiembre+contadoroctubre+contadornoviembre+contadordiciembre;
      cout<<"El dinero total es: "<< suma<<endl;
      break;
    }
}
  }


