int pinLED = 13;

void setup() {
  // put your setup code here, to run once:
  pinMode(pinLED, OUTPUT); // Menyiapkan LED bekerja
 Serial.begin(9600); 
 Serial.println("Alat Menyala dan siap digunakan !");
  
  
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(pinLED, HIGH);
 Serial.println("Lampu Nyala");
 delay(500);
 digitalWrite(pinLED, LOW);
 Serial.println("Lampu mati");
 delay(500);
}
