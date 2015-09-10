

/*App para determinar si un numero es primo o compuesto*/

#include <iostream>
#include <conio.h>
#include <sstream>

using namespace std;

void primoCompuesto(int n){
     
     while(n <= 0)
     {
           cout << "Solamente pude ingresar un numero natural, positivo"<<endl;  
           cin >> n;  
     }
    
             //2 único numero par, que es primo!!
             if(n==2 || n == 1)
             {
                     cout << n << "  es primo"<<endl;
             }
             else
             {
                 //Guarda los numeros que serán divisibles por n
   
                  stringstream numerosDivisible;
                  
                 //Cuenta para determinar si n es primi o compuesto
    
                 int contador=0;
                 
                 for(int i = 1; i <= n; i++)
                 {
                         //Si el numero n tiene división exacta entre i
                         if(n%i==0)
                         {
                                contador++;    
                                numerosDivisible << i << " ";
                         }
                       
                 }//fin for
                 
                 //Si el numero es primo
                 if(contador==2)
                 {
                      cout << "el numero: "<<n<<" es primo, solamente es divisible entre: "<< numerosDivisible.str()<<endl;       
                 }
                 else if(contador > 2)
                 {
                         cout << "el numero: "<<n<<" es compuesto, es divisible entre: "<<endl << numerosDivisible.str()<<endl;   
                 }
                 else
                 {
                         cout << "Error!!";  
                 }
                              
             }
     
     
     
     
};



int main(){
        
        int n;
        cout <<"ingrese un numero: "<< endl;
        cin >> n;
        primoCompuesto(n);
        
        
        getch();
        return 0;
};
