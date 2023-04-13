int Pot = A0;//Byron Alejandro Pineda Barrientos
int Lectura;//2022121
int Led1 = 1;
int Led2 = 3;
int Led3 = 5;
int Led4 = 7;
int Led5 = 9;
void setup()
{
Serial.begin(9600); pinMode(Pot, INPUT); pinMode(Led1, OUTPUT); pinMode(Led2, OUTPUT); pinMode(Led3, OUTPUT); pinMode(Led4, OUTPUT); pinMode(Led5, OUTPUT);


}

void loop()
{
Lectura = analogRead(Pot);

if(Lectura >=0 && Lectura <=350){
digitalWrite(Led1,HIGH);
}
else if(Lectura >=0 && Lectura <=200){
digitalWrite(Led1,LOW);
}

if(Lectura >=250 && Lectura <=350){
digitalWrite(Led2,HIGH);
}
else if(Lectura >=0 && Lectura <=250){
digitalWrite(Led2,LOW);
}

if(Lectura >=350 && Lectura <=500){
digitalWrite(Led3,HIGH);
}
else if(Lectura >=0 && Lectura <=250){
digitalWrite(Led3,LOW);
}

if(Lectura >=500 && Lectura <=750){
digitalWrite(Led4,HIGH);
}
else if(Lectura >=0 && Lectura <=300){
digitalWrite(Led4,LOW);
}

if(Lectura >=750 && Lectura <=1000){
digitalWrite(Led5,HIGH);
}
else if(Lectura >=0 && Lectura <=350){
digitalWrite(Led5,LOW);
}
delay(10);


}

