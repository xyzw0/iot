// Define pins
#define TRIG_PIN 2 // Trigger pin on the Arduino
#define ECHO_PIN 3 // Echo pin on the Arduino

// Define the speed of sound in cm/us
#define SPEED_OF_SOUND 0.0343

void setup() {
  // Initialize the serial port
  Serial.begin(9600);

  // Set the pin modes for the ultrasonic sensor
  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);
}

void loop() {
  // Clear the trigger pin
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // Send a 10 microsecond pulse to the trigger pin
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);
  digitalWrite(TRIG_PIN, LOW);

  // Measure the duration of the echo pulse
  long duration = pulseIn(ECHO_PIN, HIGH);

  // Calculate the distance in centimeters
  float distance = (duration * SPEED_OF_SOUND) / 2;

  // Print the distance to the serial monitor
  Serial.print("Distance: ");
  Serial.print(distance);
  Serial.println(" cm");

  // Wait for a short period before repeating
  delay(500); // Adjust delay as needed for readability
}
