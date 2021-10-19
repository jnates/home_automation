// home automation project

#define trig 7 // Pulse or signal emitter
#define echo 6 // Receptor "del eco" del pulso o señal
#define buzzer 8 //Receiver "echo" of the pulse or signal
int state=0;
int vento=10;
int time=0;
int distance=0;
int A =0;
int B =0;
int C =0;
int a1 =0;


void setup(){
  pinMode(13,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(vento,OUTPUT); // FAN
  pinMode(buzzer,OUTPUT);
  pinMode(trig,OUTPUT);
  pinMode(echo,INPUT); // SENSOR SIGNAL
  pinMode(5,OUTPUT);
  Serial.begin(9600);
  delay(1000);
 }
 
 int sensor(){  
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);                    
  digitalWrite(trig, LOW);
  time = pulseIn(echo, HIGH); //we get the pulse width
  distance = time / 58.4; //we scale time to a distance in cm
  return distance;  
 }

 
 void loop(){
 if(Serial.available()>0){         
        state = Serial.read();     
 }     
 if(state== 'a'){
       digitalWrite(13,HIGH);
 }
 if(state== 'b' ){
       digitalWrite(13,LOW);
 }
 if(state== 'c'){ 
       digitalWrite(12,HIGH);
 }
 if(state== 'd' ){
       digitalWrite(12,LOW);
 }
 if(state== 'e'){ 
       digitalWrite(11,HIGH);
 }
 if(state== 'f' ){
       digitalWrite(11,LOW);
 }
 
///////////////////////////////FAN
 if(state== 'g' ){
       digitalWrite(vento,HIGH);
 }
 if(state== 'h' ){
       digitalWrite(vento,LOW);
 }
////////////////////////////////break fan
 
////////////////////////////////ALARM
sensor();

if (state == 'A' ){
  a1=1;// on     
  }
  
if (state == 'B'){
  a1=0; // off 
  }

if (state =='C'){
 noTone(buzzer);//Restart 
 a1=1;
}


if(a1==1){
  if (distance >= 20 and distance <= 50){ //If the distance is less than one and a half meters 
        tone(buzzer,500); //The buzzer sounds with a frequency of 1000Hz         
        }       
}else{
  noTone(buzzer);
}
///////////BREAK ALARM


 if(state=='s'){       //  Dimer 1 connected to pin 5
        analogWrite(5,0);
       }      
 if(state=='t'){
        analogWrite(5,3);
       }   
if(state=='u'){
        analogWrite(5,8);
       }  
if(state=='v'){
        analogWrite(5,20);
       }  
if(state=='w'){
        analogWrite(5,30);
       }  
if(state=='x'){
        analogWrite(5,60);
       }  
if(state=='y'){
        analogWrite(5,125);
       }  
if(state=='z'){
        analogWrite(5,255);
       }         
 }
 
 
