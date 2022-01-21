// Définition des entrées/sorties

#define PIN_LED_BLEU 5
#define PIN_BOUTON 4

void setup() {
 Serial.begin(115200);
 Serial.println("");
 Serial.println("Programmer c'est facile");

  // Configuration des entrées/sorties
  pinMode(PIN_LED_BLEU, OUTPUT);
  pinMode(PIN_BOUTON "INPUT_PULLUP");

void loop() {
  if(digitalRead(PIN_BOUTON) == LOW) digitalWrite(PIN_LED_BLEU, HIGH); else digitalWrite(PIN_LED_BLEU, LOW);
}
