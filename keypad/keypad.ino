// C++ code
//
int out1 = 2;
int out2 = 3;
int out3 = 4;
int out4 = 5;

int in1 = 6;
int in2 = 7;
int in3 = 8;
int in4 = 9;

int r = 10;
int b = 11;
int g = 12;

int col=0;

void setup()
{
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  
  pinMode(r, OUTPUT);
  pinMode(b, OUTPUT);
  pinMode(g, OUTPUT);
  
  digitalWrite(r, LOW);
  digitalWrite(b, LOW);
  digitalWrite(g, LOW);
}

void loop()
{
  col = 1;
  digitalWrite(out1, LOW);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, HIGH);
  if(digitalRead(in1) == LOW && col == 1){
    digitalWrite(r, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
  }else if(digitalRead(in2) == LOW && col == 1){
  	digitalWrite(r, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(g, LOW);
  }else if(digitalRead(in3) == LOW && col == 1){
  	digitalWrite(r, LOW);
    digitalWrite(b, LOW);
    digitalWrite(g, HIGH);
  }else if(digitalRead(in4) == LOW && col == 1){
  	digitalWrite(r, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
  }else{
    digitalWrite(r, LOW);
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
  }
  delay(5);
  
  col = 2;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, LOW);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, HIGH);
  if(digitalRead(in1) == LOW && col == 2){
    digitalWrite(r, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, LOW);
  }else if(digitalRead(in2) == LOW && col == 2){
  	digitalWrite(r, HIGH);
    digitalWrite(b, LOW);
    digitalWrite(g, HIGH);
  }else if(digitalRead(in3) == LOW && col == 2){
  	digitalWrite(r, LOW);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
  }else if(digitalRead(in4) == LOW && col == 2){
  	digitalWrite(r, HIGH);
    digitalWrite(b, HIGH);
    digitalWrite(g, HIGH);
  }else{
    digitalWrite(r, LOW);
    digitalWrite(b, LOW);
    digitalWrite(g, LOW);
  }
  delay(5);
  
  col = 1;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, LOW);
  digitalWrite(out4, HIGH);
  delay(5);
  
  col = 1;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, LOW);
  delay(5);
  
}