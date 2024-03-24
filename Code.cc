void setup() { 
// configure the output pins 
pinMode(10,OUTPUT); // r
pinMode(11,OUTPUT); // y
pinMode(12,OUTPUT); // g
}
void loop() 
{ 
digitalWrite(12,HIGH); //red fopr 5 sec
delay(500);
digitalWrite(12,LOW); //off red
delay(1000);
digitalWrite(10,HIGH); //y fopr 1 sec
delay(1000);
digitalWrite(10,LOW); //off yellow
delay(1000);
digitalWrite(8,HIGH); //on green
delay(5000);
digitalWrite(8,LOW); //off green
delay(500);//o.5 sec

//blinking krao
digitalWrite(8,HIGH); //on green 0.5sec //----------First time
delay(500);
digitalWrite(8,LOW); //off green 0.5 sec
delay(500);//o.5 sec

digitalWrite(8,HIGH); //on green 0.5sec //-------second time
delay(500);
digitalWrite(8,LOW); //off green 0.5 sec
delay(500);//o.5 sec

digitalWrite(8,HIGH); //on green 0.5sec //-----------thrid time
delay(500);
digitalWrite(8,LOW); //off green 0.5 sec
delay(500);//o.5 sec

}
