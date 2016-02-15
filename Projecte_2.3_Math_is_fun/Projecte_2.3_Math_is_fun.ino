/*************************************************************************
**                                                                      **
**            En aquest programa li intodueix el tamany en GB           **                                                      
**           d'un disc dur i et diu el seu tamany en MB.                **
**                                                                      **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

float drive_gb = 100;                   // El tamany del disc dur en GB.
float drive_mb;                         // Variable on es guardarà la conversió

//******  Setup  *********************************************************
void setup() {                         // Només s'executa 1 sol cop.
  
 Serial.begin(9600);                  // Inicia la llibreria Serial a 9600 bps.
  Serial.print("Your HD is ");        // Imprimeix per pantalla "Your HD is ".
  Serial.print(drive_gb);             // Imprimeix per pantalla els GB (100).
  Serial.println(" GB large.");       // Imprimeix per pantalla "GB large". 
  
  drive_mb = 1024 * drive_gb;         // Conversió de GB a MB.

  Serial.print("It can store ");      // Imprimeix per pantalla "It can store".
  Serial.print(drive_mb);             // Imprimeix per pantalla el resultat de la conversió.
  Serial.println(" Megabytes!");      // Imprimeix per pantalla " Megabytes!".
}


//******  Loop  **********************************************************
void loop() {                         // Cal encara que estigui buit.
 
}


