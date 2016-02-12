/*************************************************************************
**                                                                      **
**        LL3. El primer programa                                       **
**        En aquest lliurament utilitzarem el programa "Blink"          **
**        que fa encendre o apagar un LED de l'Arduino cada 1 segon     **
**        Cambiant el delay cambiarem el temps que fa pampallugues el   **                         
**        LED  (s'ha d'expressar en ms).                                **
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
