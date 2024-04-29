 int r_led= 7;
  int g_led = 2;
  int b_led = 4;

  void setup() {
    pinMode(r_led, OUTPUT);
    pinMode(g_led, OUTPUT);
    pinMode(b_led, OUTPUT);
  }

  void loop() {
    
    // Red color (full red, no green, no blue)
    analogWrite(r_led, 255);
    analogWrite(g_led, 0);
    analogWrite(b_led, 0);

    delay(1000);

     // Green color (no red, full green, no blue)
    analogWrite(r_led, 0);
    analogWrite(g_led, 255);
    analogWrite(b_led, 0);

    delay(1000);

    // Blue color (no red, no green, full blue)
    analogWrite(r_led, 0);
    analogWrite(g_led, 0);
    analogWrite(b_led, 255);

    delay(1000);

    // Purple color (full red, no green, full blue)
    analogWrite(r_led, 255);
    analogWrite(g_led, 0);
    analogWrite(b_led, 255);
    
    delay(1000);

    }


    //https://www.tinkercad.com/things/7Un2pVHFt3T-rgb-light?sharecode=WTNwUGeRtRfpkMeplhwmjH85aBJHqiErz-gCOieKwiM
