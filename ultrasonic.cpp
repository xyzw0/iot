
#define TRIG_PIN 2 
#define ECHO_PIN 3

#define SPEED_OF_SOUND 0.0343

void setup() {
  Serial.begin(9600);

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);
  long duration = pulseIn(ECHO_PIN, HIGH);

  float distance = (duration * SPEED_OF_SOUND) / 2;

  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  delay(500); 
}

//https://www.tinkercad.com/things/eaA9YqQ0a0A-ultrasonic?sharecode=DRTjdd2ScRZgTSh-y352Y7D6W3jQ0exs22-OHJn12Ic
