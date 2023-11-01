#include <iostream>
using namespace std;
int main(){
//Variables para los menú
int  langosta = 35.00, hamburguesa = 8.00, pizza = 12.00, ensalada = 17.00, snd = 17.00, opcion, cantidad; //Variables para poder ejecutar los precios
double qz = 7.79; //El valor del dólar en quetzal se utilizó como Q.7.79
double fondos = 4000; //Este es el total de dinero que podríamos gastar en dólares, al igual que es el dinero disponible en la tarjeta
double calc, efectivo;
Menuprincipal:
system("cls");
cout <<"\t\tBIENVENIDO A NUESTRO RESTAURANTE ''EL INGENIERO'' "<<endl;
cout <<"\tSeleccione cualquiera de las siguientes opciones para ordenar"<<endl;
cout <<"\t\t  ===========MENU====================PRECIOS $"<<endl;
cout <<"\t\t1.=======HAMBURGUESA==================$8.00"<<endl;
cout <<"\t\t2.=======PIZZA DE PEPERONI============$12.00"<<endl;
cout <<"\t\t3.=======ENSALASA DE FRUTAS===========$10.00"<<endl;
cout <<"\t\t4.=======SANDWICH DE ATUN=============$17.00"<<endl;
cout <<"\t\t5.=======LANGOSTA A LA FRANCESA=======$35.00"<<endl;
cout <<"\t\t\t6. Para salir del programa\n"<<endl;
cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos * qz<<endl;
cout<<"\n\tIngrese el numero correspondiente al platillo.";
cin >>opcion;
switch (opcion){
	do{
	case 1: 
			menuhamburguer:
			system ("cls");
			cout <<"\t\tHa seleccionado HAMBURGUESA con un valor de $8.00"<<endl;
			cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
			cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos*qz<<endl;
			cout <<"\t\tSeleccione la cantidad a pedir\t"<<endl;
			cin >>cantidad;
			hamburguesa = cantidad * hamburguesa;
			qz = hamburguesa * qz; //Acá se hace el cálculo para dar el total de la orden en Quetzales.
			cout <<"\tTotal de Hamburguesas " << cantidad <<"\n\tTotal a pagar en dolares: $." << hamburguesa << "\n\tTotal en quetzales: Q."<<qz <<endl;
			cout <<"\nSeleccione el metodo de pago\n";
			cout <<"\t1:Pagar con tarjeta \n\t2.Pagar con efectivo.\n\t3:(Vuelve al menu principal)\n";
			cin >>opcion;
			switch (opcion){
				
				case 1: 
           				if  (hamburguesa > fondos || hamburguesa <= 0) //Esto nos permite calcular si tenemos fondos suficientes para hacer la compra
						{
               				 cout << "Insuficiente para pagar"<<endl;
               				 system("pause");
               				 goto menuhamburguer;
            			}
           				else 
           					 {
          				      fondos = fondos - hamburguesa;//Se restan los fondos en la tarjeta.
								system("cls");                
          					    cout <<"\t\tGRACIAS POR SU COMPRA!!\n";
         				        cout <<"\tSu saldo disponible es de : $." << fondos << endl;
                				cout <<"\tSu saldo disponible en quetzales es de: Q."<< fondos *qz<<endl;
                				cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                				cout <<"\n\t1:Si \n\t2:Si pero de otro platillo\n\t3:Salir del programa\n\t"<<endl;
               					cin  >>opcion;
                				if (opcion == 1){
                				goto menuhamburguer;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 
            					}
				case 2: 
					cout<<"\n\tIngrese el total de dolares que tiene  ";
					cin>>efectivo;
					 if (efectivo >=hamburguesa )//Se calcula si el efectivo que ofrece es mayor o igual para proceder con la compra
					 {	
					 	calc = efectivo - hamburguesa;
					 	system("cls");
					 	cout<<"\tGRACIAS POR COMPRAR!!\n";
					 	cout<<"\t\tTotal efectivo recibido: "<<efectivo<<endl;
					 	cout<<"\t\tTotal de la compra: $"<<hamburguesa<<endl;
					 	cout<<"\t\tTotal de cambio:  $"<<calc<<endl;
                		cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                		cout <<"\n\t\t1:Si \n\t\t2:Si pero de otro platillo\n\t\t3:Salir del programa\n\t"<<endl;
               			cin  >>opcion;
                				if (opcion == 1){
                				goto menuhamburguer;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 					 	
					 }	else{
					 	system("cls");
					 	cout<<"\t\nEfectivo insuficiente\n";
					 	system("pause");
					 	goto menuhamburguer;
					 	
					 }
       			case 3: 
				   goto Menuprincipal; //Nos permitirá volver al menú principal sin problema.
				   }
		break ;
	
	case 2:
			menupizza:
			system ("cls");
			cout <<"\t\t Ha seleccionado PIZZA DE PEPERONI con un valor de $12.00"<<endl;
            cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
			cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos *qz<<endl;
			cout <<"\tSeleccione la cantidad a pedir"<<endl;
			cin >>cantidad;
			pizza = cantidad *pizza;
			qz = pizza * qz; //Acá se hace el cálculo para dar el total de la orden en Quetzales.
			cout << "\tTotal de Pizza " << cantidad <<"\n\tTotal a pagar en dolares: $." << pizza << "\n\t Total en quetzales: Q."<<qz <<endl;
			cout <<"\n Seleccione metodo de pago";
			cout <<"\n 1:Pagar con tarjeta.\n2:Pagar en efectivo \n3:(Vuelve al menu principal)"<<endl;
			cin >>opcion;
			
			
			switch (opcion){
				
				case 1: 
           				if  (pizza > fondos || pizza <= 0)
            {
                cout << "Insuficiente para pagar"<<endl;
                system ("pause");
                goto menupizza;
            }
            else
            {
                fondos = fondos - pizza;
				system("cls");                
                cout <<"\t\tGRACIAS POR SU COMPRA!!\n";
                cout <<"\tSu saldo disponible es de : $." << fondos << endl;
                cout <<"\tSu saldo disponible en quetzales es de: Q."<< fondos * qz<<endl;
                cout <<"\t\tDesea tomar otro pedido?"<<endl;
                cout <<"\n 1: si \n 2: Si pero de otro platillo\n 3: Salir del programa\n"<<endl;
                cin  >>opcion;
                if (opcion == 1){
                	goto menupizza;
				}
				if (opcion == 2){
                	goto Menuprincipal;
				}
				else {
					cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
				}
				
                
               break; 
            }
            case 2:
            	cout<<"\n\tIngrese el total de dolares que tiene  ";
					cin>>efectivo;
					 if (efectivo >=pizza )//Se calcula si el efectivo que ofrece es mayor o igual para proceder con la compra
					 {	
					 	calc = efectivo - pizza;
					 	system("cls");
					 	cout<<"\tGRACIAS POR COMPRAR!!\n";
					 	cout<<"\t\tTotal efectivo recibido: "<<efectivo<<endl;
					 	cout<<"\t\tTotal de la compra: $"<<pizza<<endl;
					 	cout<<"\t\tTotal de cambio:  $"<<calc<<endl;
                		cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                		cout <<"\n\t\t1:Si \n\t\t2:Si pero de otro platillo\n\t\t3:Salir del programa\n\t"<<endl;
               			cin  >>opcion;
                				if (opcion == 1){
                				goto menupizza;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 					 	
					 }	else{
					 	system("cls");
					 	cout<<"\tEfectivo insuficiente\n";
					 	system("pause");
					 	goto menupizza;
					 	
					 }
       			case 3: 
				   goto Menuprincipal;
				   }
		break ;
	case 3:
			menuensalada:
			system ("cls");
			cout <<"\t\t Ha seleccionado Ensalada de frutas con un valor de $10.00"<<endl;
			cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
			cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos *qz<<endl;
			cout <<"\tSeleccione la cantidad a pedir"<<endl;
			cin >>cantidad;
			ensalada = cantidad * ensalada;
			qz = ensalada * qz; //Acá se hace el cálculo para dar el total de la orden en Quetzales.
			cout << "\tTotal de Ensalada " << cantidad <<"\n\tTotal a pagar en dolares: $." << ensalada << "\n\t Total en quetzales: Q."<<qz <<endl;
			cout <<"\nSeleccione metodo de pago";
			cout <<"\n1:Pagar con tarjeta.\n2.Pagar en efectivo. \n3:(Vuelve al menu principal)"<<endl;
			cin >>opcion;
			switch (opcion){
				case 1: 
           				if  (ensalada > fondos || ensalada <= 0)
            {
                cout << "Insuficiente para pagar"<<endl;
                system ("pause");
                goto menuensalada;
            }
            else
            {
                fondos = fondos - ensalada;
				system("cls");                
                cout <<"\t\tGRACIAS POR SU COMPRA!!\n";
                cout <<"\tSu saldo disponible es de : $." << fondos << endl;
                cout <<"\tSu saldo disponible en quetzales es de: Q."<< fondos *qz<<endl;
                cout <<"\t\tDesea tomar otro pedido?"<<endl;
                cout <<"\n 1:Si \n 2: Si pero de otro platillo\n 3: Salir del programa\n"<<endl;
                cin  >>opcion;
                if (opcion == 1){
                	goto menuensalada;
				}
				if (opcion == 2){
                	goto Menuprincipal;
				}
				else {
					cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
				}
               break; 
            }
            case 2:
            	cout<<"\n\tIngrese el total de dolares que tiene  ";
					cin>>efectivo;
					 if (efectivo >=ensalada )//Se calcula si el efectivo que ofrece es mayor o igual para proceder con la compra
					 {	
					 	calc = efectivo - ensalada;
					 	system("cls");
					 	cout<<"\tGRACIAS POR COMPRAR!!\n";
					 	cout<<"\t\tTotal efectivo recibido: "<<efectivo<<endl;
					 	cout<<"\t\tTotal de la compra: $"<<ensalada<<endl;
					 	cout<<"\t\tTotal de cambio:  $"<<calc<<endl;
                		cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                		cout <<"\n\t\t1:Si \n\t\t2:Si pero de otro platillo\n\t\t3:Salir del programa\n\t"<<endl;
               			cin  >>opcion;
                				if (opcion == 1){
                				goto menuensalada;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 					 	
					 }	else{
					 	system("cls");
					 	cout<<"\tEfectivo insuficiente\n";
					 	system("pause");
					 	goto menuensalada;
					 	
					 }       			
				   case 3: 
				   goto Menuprincipal;
				   }
		break ;
	case 4:
			menusnd:
			system ("cls");
			cout <<"\t\t Ha seleccionado SANDWICH DE ATUN con un valor de $17.00"<<endl;
			cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
			cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos * qz<<endl;
			cout <<"\n\tSeleccione la cantidad a pedir"<<endl;
			cin >>cantidad;
			snd = cantidad * snd;
			qz = snd * qz; //Acá se hace el cálculo para dar el total de la orden en Quetzales.
			cout << "\tTotal de Sandwich de atun " << cantidad <<"\n\tTotal a pagar en dolares: $." << snd << "\n\t Total en quetzales: Q."<<qz <<endl;
			cout <<"\n Seleccione metodo de pago ";
			cout <<"\n 1:Con tarjeta.\n2:Efectivo \n3: (Vuelve al menu principal)"<<endl;
			cin >>opcion;
			switch (opcion){
				
				case 1: 
           				if  (snd > fondos || snd <= 0)
            {
                cout << "Insuficiente para pagar"<<endl;
                system ("pause");
                goto menusnd;
            }
            else
            {
                fondos = fondos - snd;
				system("cls");                
                cout <<"\t\tGRACIAS POR SU COMPRA!!\n";
                cout <<"\tSu saldo disponible es de : $." << fondos << endl;
                cout <<"\tSu saldo disponible en quetzales es de: Q."<< fondos *qz<<endl;
                cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                cout <<"\n 1: si \n 2: Si pero de otro platillo\n 3: Salir del programa\n"<<endl;
                cin  >>opcion;
                if (opcion == 1){
                	goto menusnd;
				}
				if (opcion == 2){
                	goto Menuprincipal;
				}
				else {
					cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
				}
			
               break; 
            }
				case 2:
            	cout<<"\n\tIngrese el total de dolares que tiene  ";
					cin>>efectivo;
					 if (efectivo >=snd )//Se calcula si el efectivo que ofrece es mayor o igual para proceder con la compra
					 {	
					 	calc = efectivo - snd;
					 	system("cls");
					 	cout<<"\tGRACIAS POR COMPRAR!!\n";
					 	cout<<"\t\tTotal efectivo recibido: "<<efectivo<<endl;
					 	cout<<"\t\tTotal de la compra: $"<<snd<<endl;
					 	cout<<"\t\tTotal de cambio:  $"<<calc<<endl;
                		cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                		cout <<"\n\t\t1:Si \n\t\t2:Si pero de otro platillo\n\t\t3:Salir del programa\n\t"<<endl;
               			cin  >>opcion;
                				if (opcion == 1){
                				goto menusnd;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 					 	
					 }	else{
					 	system("cls");
					 	cout<<"\tEfectivo insuficiente\n";
					 	system("pause");
					 	goto menusnd;
					 	
					 }			
      			case 3: 
				   goto Menuprincipal;
				   }
		break ;
		
	case 5:
			menulangosta:
			system ("cls");
			cout <<"\tHa seleccionado LANGOSTA A LA FRANCESA con un valor de $35.00"<<endl;
			cout <<"\t\tSu saldo disponible en dolares: $"<<fondos<<endl;
			cout <<"\t\tSu saldo disponible en quetzales Q: "<<fondos * qz<<endl;
			cout <<"\n\tSeleccione la cantidad a pedir"<<endl;
			cin >>cantidad;
			langosta = cantidad *langosta;
			qz = langosta * qz; //Acá se hace el cálculo para dar el total de la orden en Quetzales.
			cout << "\tTotal de Langosta " << cantidad <<"\n\tTotal a pagar en dolares: $." << langosta << "\n\t Total en quetzales: Q."<<qz <<endl;
			cout <<"\nSeleccione metodo de pago";
			cout <<"\n 1:Con tarjeta.\n2:Efectivo. \n3:(Vuelve al menu principal)"<<endl;
			cin >>opcion;
			switch (opcion){
				
				case 1: 
           				if  (langosta > fondos || langosta <= 0)
            {
                cout << "Insuficiente para pagar"<<endl;
                system ("pause");
                goto menulangosta;
            }
            else
            {
                fondos = fondos - langosta;
				system("cls");                
                cout <<"\t\tGRACIAS POR SU COMPRA!!\n";
                cout <<"\tSu saldo disponible es de : $." << fondos << endl;
                cout <<"\tSu saldo disponible en quetzales es de: Q."<< fondos *qz<<endl;
                cout <<"\t\tDesea tomar otro pedido?"<<endl;
                cout <<"\n 1: si \n 2: Si pero de otro platillo\n 3: Salir del programa\n"<<endl;
                cin  >>opcion;
                if (opcion == 1){
                	goto menulangosta;
				}
				if (opcion == 2){
                	goto Menuprincipal;
				}
				else {
					cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
				}
				
               break; 
            }
				case 2:
            	cout<<"\n\tIngrese el total de dolares que tiene  ";
					cin>>efectivo;
					 if (efectivo >=langosta )//Se calcula si el efectivo que ofrece es mayor o igual para proceder con la compra
					 {	
					 	calc = efectivo - langosta;
					 	system("cls");
					 	cout<<"\tGRACIAS POR COMPRAR!!\n";
					 	cout<<"\t\tTotal efectivo recibido: "<<efectivo<<endl;
					 	cout<<"\t\tTotal de la compra: $"<<langosta<<endl;
					 	cout<<"\t\tTotal de cambio:  $"<<calc<<endl;
                		cout <<"\t\tDesea tomar otro pedido?"<<endl;;
                		cout <<"\n\t\t1:Si \n\t\t2:Si pero de otro platillo\n\t\t3:Salir del programa\n\t"<<endl;
               			cin  >>opcion;
                				if (opcion == 1){
                				goto menulangosta;
								}
								if (opcion == 2){
                				goto Menuprincipal;
								}
								else {
								cout<<"Muchas gracias por ordenar en el restaurante 'EL INGENIERO', Vuelva pronto :)"<<endl;
								}
               					break; 					 	
					 }	else{
					 	system("cls");
					 	cout<<"\tEfectivo insuficiente\n";
					 	system("pause");
					 	goto menulangosta;
					 	
					 }
       			case 3: 
				   goto Menuprincipal;
				   }
		break ;
		
		case 6:
			cout <<"\tGRACIAS POR VISITAR EL RESTAURANTE 'EL INGENIERO'\nVUELVA PRONTO"<<endl;
		break; 
	default:
		//Instrucciones en dado caso de seleccionar una respuesta que no está indicada en el menú
		system("cls");
		cout <<"\t\tOpcion incorrecta"<<endl;
		system("pause");
		goto Menuprincipal;//Nos permitirá simular un reinicio del programa
} while (opcion != 6);
return 0;
}
}
