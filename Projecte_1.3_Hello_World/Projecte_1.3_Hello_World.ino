/*************************************************************************
**                                                                      **
**        Serial                                                        **
**        Projecte 1.3 "Hello World!"                                   **
**        En aquest projecte hem escrit per pantalla moltes vegades     **
**        i fent salts de línia la frase "Hello World"                  **                         
**                                                                      **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************


//******  Setup  *********************************************************

// El Setup només s'executa un sol cop al Arduino, al encendre'l si volem reiniciarlo cal fer "reset" o desconectar i conectar la placa.

void setup() {
  
  Serial.begin(9600);              // Executa la funció begin de la llibreria Serial a 9600 bps.
}


//******  Loop  **********************************************************

//El Loop s'estarà executant continuament (d'acord a les ordres del programa)


void loop() {
  
  Serial.println("Hello world!");  // Imprimeix per pantalla "Hello World!"
  delay(1000);                     // Espera 1 segon (en ms també)
                  
}
