


int sensorPin = A0; // select the input pin for the LDR

int sensorValue = 0; // variable to store the value coming from the sensor

int led = 3;

void setup() 
{ 
pinMode(9,OUTPUT);
pinMode(led, OUTPUT);

Serial.begin(9600); }

void loop()

{


sensorValue = analogRead(sensorPin);

Serial.println(sensorValue);
if(sensorValue>1000)
{digitalWrite(led,HIGH);
digitalWrite(9,LOW);}

else
{ digitalWrite(led,LOW);
digitalWrite(9,HIGH);}
delay(100);
}







