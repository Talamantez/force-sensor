/*
 * A simple programme that will change the intensity of
 * an LED based  * on the pressure from a force sensor
 * 
 */

int ledPin = 9;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  
}

void loop()
{
 int forcePinRaw = analogRead(forcePinRaw); 
 Serial.print("forcePinRaw: ");
 Serial.println(forcePinRaw);

int forcePin = map(forcePinRaw, 200, 505, 0, 255); 

 int forcePinConstrained = constrain(forcePin, 0, 255);
 analogWrite(ledPin, 255-forcePinConstrained);
 delay(500);
}
