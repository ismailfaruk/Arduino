
int in1=5;
int in2=2;

void setup(){
  pinMode(in1,1);
  pinMode(in2,1);
}

void loop(){
  digitalWrite(in1,0);
  digitalWrite(in2,0);
  delay(5000);
  digitalWrite(in1,1);
  digitalWrite(in2,0);
  delay(5000);
  digitalWrite(in1,0);
  digitalWrite(in2,1);
  delay(5000);
  digitalWrite(in1,1);
  digitalWrite(in2,1);
  delay(5000);
}
