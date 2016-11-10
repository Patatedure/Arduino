//Capteur de couleur datasheet: http://cdn.sparkfun.com/datasheets/Sensors/LightImaging/HDJD-S822-QR999.pdf
//broche selecteur de gain
# define gsr1Pin 7
# define gsr0Pin 6
# define gsg1Pin 5
# define gsg0Pin 4
# define gsb1Pin 3
# define gsb0Pin 2

//led qui éclaire la surface --> intégrée au capteur
# define ledPin 8 

//broche qui lit les niveaux de rouge vert bleu
# define redPin A0
# define greenPin A1
# define bluePin A2

//variables valeur lues par le capteur
//variables initialisées à des valeur impossible pour voir s'il y a un problème
int red = -1;
int green = -1;
int blue = -1;

void setup() {
Serial.begin(115200);
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);
pinMode(3, OUTPUT);
pinMode(2, OUTPUT);
pinMode(8, OUTPUT);

digitalWrite(ledPin, HIGH); //allume la led intégrée pour éclairer la surface

//désactivation de la sélection de gain pour toutes les couleurs
digitalWrite(7, LOW);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, LOW);
digitalWrite(3, LOW);
digitalWrite(2, LOW);

digitalWrite(8, LOW);
}

void loop() {
//lecture des valeurs 
int redValue = analogRead(redPin);
int greenValue = analogRead(greenPin);
int blueValue = analogRead(bluePin);

//Calibrage (déduit de la fiche notice)
redValue = redValue*10/1.0;
greenValue = greenValue*10/0.75;
blueValue = blueValue*10/0.75;

//affichage des valeurs RGS
Serial.print("Rouge: ");
Serial.print(redValue, DEC);
Serial.print("\t\tVert: ");
Serial.print(greenValue, DEC);
Serial.print("\tBleu: ");
Serial.println(blueValue, DEC);

/*
Serial.print(); Serial.print(" ");
Serial.print(greenValue); Serial.print(" ");
Serial.print(blueValue); Serial.print(" ");
*/

delay(100);
}
