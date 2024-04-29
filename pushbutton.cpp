const int buttonPin = 2;  
const int LED = 4;    


int buttonState = 0;

void setup()
{
  pinMode(LED, OUTPUT);
  pinMode(buttonPin, INPUT);
}

void loop()
{
  buttonState = digitalRead(buttonPin);

  if (buttonState == HIGH)
  {
    digitalWrite(LED, HIGH);
  }
  else
  {
    digitalWrite(LED, LOW);
  }
}



//https://www.tinkercad.com/things/bFmUMorKDIn-pushbutton?sharecode=tK1RgEBWg3gIR3w7jr8RRPERiUUu3e6rhNBHqatXKOA
