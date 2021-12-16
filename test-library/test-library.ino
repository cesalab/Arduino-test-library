#include "addz.h"
#include "lesz.h"

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  Serial.print("Numero 1 = ");  Serial.println(num1); 
  Serial.print("Numero 2 = ");  Serial.println(num2); 
  Serial.print("la suma de  = ");
  Serial.print(num1);  Serial.print(" + ");  Serial.print(num2);
  Serial.print(" = ");  Serial.println(suma(num1,num2));

  Serial.print("Numero a = ");  Serial.println(numa); 
  Serial.print("Numero b = ");  Serial.println(numb); 
  Serial.print("la resta de  = ");
  Serial.print(numa);  Serial.print(" - ");  Serial.print(numb);
  Serial.print(" = ");  Serial.println(resta(numa,numb));

  Serial.print("foo = ");   Serial.println(foo);
  foo = 77;
  Serial.print("new value of foo = ");   Serial.println(foo);

  Serial.println(hola);  
  hola = "HeLLo, WorlD!!!";
  Serial.println(hola);
}

void loop() {

  // put your main code here, to run repeatedly:

}
