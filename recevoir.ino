 /**************  
 // Réception de données via le port Série Logiciel :  
 // Testé avec une NANO 328   
 // Attention les câbles RX et TX doivent être croisés   
 // Ne pas oublier de relier les masses des 2 cartes (GND)  
 // entre la carte émitrice et la carte réceptrice !  
 ***************/  
 //-- Déclaration du port Série Logiciel  
 #include <SoftwareSerial.h>  
 SoftwareSerial mySerial(10, 11); // RX, TX  
 //-- Mise en fonction de la LED lorsqu'un message est reçu  
 int led = 13;  
 //-- Setup  
 void setup() {          
  //-- Initialisation de la LED  
  pinMode(led, OUTPUT);  
  //-- Ouverture du port Série de la carte pour le moniteur  
  Serial.begin(9600);  
  while (!Serial) {;} //-- Pour Leonaro nécessaire  
  Serial.println("Attente réception !");  
  //-- Définition et ouverture du port logiciel  
  mySerial.begin(57600);   
 }  
 //-- Affichage de la communication  
 void loop() {  
  //-- Si des données sont présentes  
  if (mySerial.available())  
   {//-- Affichage sur la console des données  
    Serial.write(mySerial.read());}  
 }  
