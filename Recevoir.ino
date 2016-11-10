 /**********************************************  
 // Transfert de données d'une carte arduino à une autre  
 // Ce sketch envoie le message Hello à une carte connectée  
 // via le port série logiciel  
 // Branchements :  
 // * RX connecté sur pin 10 (connecté à TX sur l'autre carte)  
 // * TX connecté sur pin 11 (connect à RX sur l'autre carte)  
 // * Et ne pas oublier de relier les masses des 2 cartes (GND)  
 // Remarque :  
 // Sur la MEGA utilisez uniquement pour RX:   
 // 10, 11, 12, 13, 50, 51, 52, 53, 62, 63, 64, 65, 66, 67, 68, 69  
 // Sur la Leonardo utilisez uniquement pour RX:  
 // 8, 9, 10, 11, 14 (MISO), 15 (SCK), 16 (MOSI).  
 ****************************************/  
 #include <SoftwareSerial.h>  
 int led = 13;  
 SoftwareSerial mySerial(10, 11); // RX, TX  
 void setup()   
 { //-- définition du port Série Logiciel  
  mySerial.begin(57600);   
  pinMode(led, OUTPUT);  
 }  
 void loop() //-- Toutes les 2 secondes envoi d'un message  
 {if (mySerial.available())  
  {digitalWrite(led, HIGH); //-- Pendant l'envoi allume la LED  
  mySerial.write("Hello");  
  }  
  digitalWrite(led, LOW);  
  delay(2000); //-- Attente de 2 secondes avant de recommencer  
 }  
