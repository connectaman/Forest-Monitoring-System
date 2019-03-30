int smokeA0 = A0;
int buzzer = 2;
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(buzzer,HIGH);
  digitalWrite(buzzer,LOW);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A1);
  // print out the value you read:
  Serial.print(sensorValue);Serial.print("soil");
  Serial.println();
    int analogSensor = analogRead(smokeA0);
  Serial.print("Pin A0: ");Serial.print(analogSensor);
  Serial.println();
  if(analogSensor>500)
  {
    alarm();
  }

  delay(1000);        // delay in between reads for stability
}
void alarm()
{
  for(int i=0;i<10;i++)
  {
    digitalWrite(buzzer,HIGH);
    delay(100);
    digitalWrite(buzzer,LOW);
    delay(10);
  }
}
