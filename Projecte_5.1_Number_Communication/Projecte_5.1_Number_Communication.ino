/*************************************************************************
**                                                                      **
**        Serial                                                        **
**        Projecte 5 Number Comunication                                **
**        Farem un projecte que calculi la hipotenusa                   **
**        amb dos costats introduits per l'usuari (4,5) per exemple     **                       
**        i et donarà per pantalla el resultat                          **
**                                                                      **
*************************************************************************/

//******  Includes  ******************************************************


//******  Variables  *****************************************************

float costatSerie, costatParalel;            // Variable pels costats
float hipotenusa;                            // Variable pel resultat

//******  Setup  *********************************************************

// El Setup només s'executa un sol cop al Arduino, al encendre'l si volem 
// reiniciarlo cal fer "reset" o desconectar i conectar la placa.

void setup() {
  
   Serial.begin(9600);                       // Inicialitza la llibreria Serial a 9600 bps
   Serial.println("Entra el valor del costat en sèrie i el costat en paral·lel del triangle (separats per una coma i en ordre)");
  
}


//******  Loop  **********************************************************

//El Loop s'estarà executant continuament (d'acord a les ordres del programa)


void loop() {
  
  while (Serial.available() > 0) {           // Si hi ha algun serial disponible, el llegeix.if there's any serial available, read it
    
    costatSerie = Serial.parseInt();         // Mira si li introdueixen el valor del costat en sèrie
    
    Serial.println(costatSerie,costatParalel);
    
    costatParalel = Serial.parseInt();      // Mira si li introdueixen el valor del costat paral·lel
    
    Serial.println(costatParalel);
    
    if (Serial.read() == '\n') {            //Mira per un salt del carro, un salt de línia 
      
    hipotenusa = sqrt(pow (costatSerie,2) + pow (costatParalel,2));
    
    Serial.println(hipotenusa);
    Serial.println ("Si vols calcular-ne una altre, torna a introduir un altre valor amb el mateix format anterior");
    
    }
  }
            
}
