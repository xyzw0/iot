// C++ code
//
int sensorvalue = 0;

void setup()
{
  pinMode(9,OUTPUT);
  pinMode(A0,INPUT);
  Serial.begin(9600);
}

void loop()
{
  sensorvalue = analogRead(A0);
  
  Serial.println(sensorvalue);
  
  if(sensorvalue<30){
    digitalWrite(9,HIGH);
  }
  else{
  	digitalWrite(9,LOW);
  }
}
