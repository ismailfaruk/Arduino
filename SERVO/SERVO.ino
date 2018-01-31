#include <Servo.h>
Servo abc;
void setup(){
abc.attach(6);
//pinMode(6,OUTPUT);
Serial.begin(9600);
}
void loop(){
for(int i=0; i<=170; i=i+30){
abc.write(i);
Serial.println(i);
delay(500);
}

for(int i=170; i<=0; i=i-30){
abc.write(i);
Serial.println(i);
delay(500);
}

}
