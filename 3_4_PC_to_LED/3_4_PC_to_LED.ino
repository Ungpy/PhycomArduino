int r=2;
int g=3;
int b=4;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(19200);
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);

  digitalWrite(r,HIGH);
  digitalWrite(g,HIGH);
  digitalWrite(b,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()){
    String str = Serial.readString();
    str.trim();
    if(str == "Red" || str == "100"){
      digitalWrite(r,LOW);
      digitalWrite(g,HIGH);
      digitalWrite(b,HIGH);
    }else if(str == "Green" || str == "200"){
      digitalWrite(r,HIGH);
      digitalWrite(g,LOW);
      digitalWrite(b,HIGH);
    }else if(str == "Blue" || str == "300"){
      digitalWrite(r,HIGH);
      digitalWrite(g,HIGH);
      digitalWrite(b,LOW);
    }
  }
}
