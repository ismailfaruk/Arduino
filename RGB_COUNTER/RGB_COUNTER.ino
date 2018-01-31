float i;
float j;
float k;
int led=9;
int led1=10;
int led2=11;
void setup(){
pinMode(led,OUTPUT);
pinMode(led1,OUTPUT);
pinMode(led2,1);
}
void loop(){
  for(i=0;i<256;i=i+0.001){
    for(j=0;j<256;j=j+0.001){
      for(k=0;k<256;k=k+0.001){
        analogWrite(led,i); 
        analogWrite(led1,j); 
        analogWrite(led2,k);           
        }   
     } 
  }  
}
 
