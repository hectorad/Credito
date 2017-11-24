#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<iostream>
 
using namespace std;
int main()
{
    int numtarjeta,a1,a,x=0;
    
    cout<<" ingresa los primer digito"<<endl;
    cin>>a1;
    cout<<" ingresa los siguientes 15 dijitos"<<endl;
    cin>>a;
    while (a>0){
          a = a/10;
          x++;
          }
    

    //cout<<" ingresa los siguientes 15 dijitos"<<endl;
    //cin>>a2;
        
    numtarjeta = a1+x;
    
    
    
    if (numtarjeta == 16)
     {
     cout<<"el numero es correcto"<<endl;
     }
     else 
     {
     cout<<"el numero es incorrecto, debe contener 16 digitos obligatorio"<<endl;
     }
     cout<<"..................................................................."<<endl;
     //if (numtarjeta < 16)
     //{
     //cout<<" el numero que ingresaste es muy corto"<<endl;
     //}
     //else
     
     //el numero es demasiado largo max 16
     
     if (a1 == 3)
     {
            cout<<" tu tarjeta pertenece a : american express"<<endl;}
     else 
     {
     if (a1 == 4){
     
            cout<<" tu tarjeta pertenece a: visa"<<endl;}
            
     else{
          
     if (a1 == 5){
            cout<<" tu tarjeta pertenece a:  master card"<<endl;}
     
     else {
     
           
     if (a1 == 6){
            cout<<" tu tarjeta pertenece a: discoverd"<<endl;}
            
     else {
          cout<<"tu tarjeta no esta reggistrada en ninguna compañia"<<endl;
     
     
}

}
}
}
      system("pause");
}
