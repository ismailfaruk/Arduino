#define echoPin 8
#define trigPin 9

long duration, distance;

void setup(){  
pinMode(trigPin, OUTPUT);
pinMode(echoPin, INPUT);
pinMode(7,OUTPUT);
pinMode(6,OUTPUT);
pinMode(5,OUTPUT);
pinMode(4,OUTPUT);
}

int ultrasonic(){
 digitalWrite(trigPin, LOW); 
 delayMicroseconds(2); 
 digitalWrite(trigPin, HIGH);
 delayMicroseconds(10); 
 digitalWrite(trigPin, LOW);
 duration = pulseIn(echoPin, HIGH);
 distance = duration/5.82;
 return distance;
 }

void forward(){
digitalWrite(6,LOW);
digitalWrite(7,HIGH);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
}

void back(){
digitalWrite(6,HIGH);  //LEFT
digitalWrite(7,LOW);   //LEFT
digitalWrite(4,HIGH);  //RIGHT
digitalWrite(5,LOW);   //RIGHT
}


void left(){
digitalWrite(6,HIGH);  //LEFT
digitalWrite(7,LOW);   //LEFT
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
}

void right(){
digitalWrite(6,LOW);  //LEFT
digitalWrite(7,HIGH);   //LEFT
digitalWrite(4,HIGH);
digitalWrite(5,LOW);
}

void loop(){
float abc = 0;
abc = ultrasonic();
Serial.println(abc);
while(abc <= 250){
  abc = ultrasonic();
  right();
  }
forward();
}
