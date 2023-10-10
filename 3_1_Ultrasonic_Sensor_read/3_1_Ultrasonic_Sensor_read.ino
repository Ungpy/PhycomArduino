
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(4, OUTPUT); //Trig
  pinMode(2, INPUT); //Echi
}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(4,HIGH);
  delayMicroseconds(10);
  digitalWrite(4,LOW);

  int pulseWidth = pulseIn(2,HIGH);

  Serial.print("Pulse Width: ");
  Serial.println(pulseWidth);
  long distance = pulseWidth/29/2;
  Serial.print("Distance: ");
  Serial.println(distance);
  delay(1000);
}
