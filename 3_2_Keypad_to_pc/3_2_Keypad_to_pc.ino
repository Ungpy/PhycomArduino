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

int col=0;
int i=1;

void setup()
{
  Serial.begin(9600);
  pinMode(out1, OUTPUT);
  pinMode(out2, OUTPUT);
  pinMode(out3, OUTPUT);
  pinMode(out4, OUTPUT);
  
  pinMode(in1, INPUT);
  pinMode(in2, INPUT);
  pinMode(in3, INPUT);
  pinMode(in4, INPUT);
  
}

void loop()
{
  col = 1;
  digitalWrite(out1, LOW);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, HIGH);
  if(digitalRead(in1) == LOW && col == 1){
    Serial.println("D");
    while(digitalRead(in1) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in2) == LOW && col == 1){
    Serial.println("C");
    while(digitalRead(in2) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in3) == LOW && col == 1){
    Serial.println("B");
    while(digitalRead(in3) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in4) == LOW && col == 1){
    Serial.println("A");
    while(digitalRead(in4) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else{
  }
  delay(5);
  
  col = 2;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, LOW);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, HIGH);
  if(digitalRead(in1) == LOW && col == 2){
    Serial.println("#");
    while(digitalRead(in1) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in2) == LOW && col == 2){
    Serial.println("9");
    while(digitalRead(in2) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in3) == LOW && col == 2){
    Serial.println("6");
    while(digitalRead(in3) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in4) == LOW && col == 2){
    Serial.println("3");
    while(digitalRead(in4) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else{
  }
  delay(5);
  
  col = 3;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, LOW);
  digitalWrite(out4, HIGH);
  if(digitalRead(in1) == LOW && col == 3){
    Serial.println("0");
    while(digitalRead(in1) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in2) == LOW && col == 3){
    Serial.println("8");
    while(digitalRead(in2) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in3) == LOW && col == 3){
    Serial.println("5");
    while(digitalRead(in3) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in4) == LOW && col == 3){
    Serial.println("2");
    while(digitalRead(in4) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else{
  }
  delay(5);
  
  col = 4;
  digitalWrite(out1, HIGH);
  digitalWrite(out2, HIGH);
  digitalWrite(out3, HIGH);
  digitalWrite(out4, LOW);
  if(digitalRead(in1) == LOW && col == 4){
    Serial.println("*");
    while(digitalRead(in1) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in2) == LOW && col == 4){
    Serial.println("7");
    while(digitalRead(in2) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in3) == LOW && col == 4){
    Serial.println("4");
    while(digitalRead(in3) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else if(digitalRead(in4) == LOW && col == 4){
    Serial.println("1");
    while(digitalRead(in4) == LOW){
      delay(5);
    }
//    Serial.print(i++);
  }else{
  }
  delay(5);
  
}