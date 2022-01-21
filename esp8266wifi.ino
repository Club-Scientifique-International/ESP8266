
#include <ESP8266WiFi.h>

// Définition des entrées/sorties
#define LED_BLEU 5 
// Informations du routeur WIFi
const char * SSID = "";
const char * PASSWORD = "";

void setup() {
  // Mise en place d'une liaison wifi
 Serial.begin(115200L);
 Serial.println("");

pinMode(LED_BLEU,OUTPUT);
// Mode de connection
// Ou WIFI_AP_STA pour mettre l'esp 8266 en point d'accès WIFI et en station
WiFi.mode(WIFI_STA);
// Démarer la connection
WiFi.begin(SSID, PASSWORD);

}

void loop() {
// Si l'esp est connecter au réseau, on effectue les raches qui doivent etree effectué
if (WiFi.isConnected()){
    digitalWrite(LED_BLEU, HIGH);
  }
else {
  digitalWrite(LED_BLEU, LOW);
}
}
