int r = 8;
int g = 9;
int b = 10;

void setup() {
  // put your setup code here, to run once:
  pinMode(r,OUTPUT);
  pinMode(g,OUTPUT);
  pinMode(b,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(r,LOW);
  digitalWrite(g,LOW);
  digitalWrite(b,LOW);
}
