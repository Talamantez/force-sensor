int ledPin = 9;
int forcePin = 0;
void setup()
{
  pinMode(ledPin, OUTPUT);
  Serial.begin(9600);  
}

void loop()
{
 int forcePinRaw = analogRead(forcePin); 
 Serial.print("forcePinRaw: ");
 Serial.println(forcePinRaw);

int forcePinMapped = map(forcePinRaw, 200, 505, 0, 255); 

 int forcePinConstrained = constrain(forcePinMapped, 0, 255);
 analogWrite(ledPin, 255-forcePinConstrained);
 delay(500);
}
