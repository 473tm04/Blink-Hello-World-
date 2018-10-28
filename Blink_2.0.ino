/*
  Blink

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKRspeed on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://www.arduino.cc/en/Main/Products

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Blink
*/

// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(LED_BUILTIN, OUTPUT);

}

// the loop function runs over and over again forever
void loop() {
  
  int speed = 500;
  
              //H
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space

              //E
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space

              //L
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
  
                //L
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
  
                //O
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(7*speed);                       //Space
  
  
  
              //W
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
 
                 //O
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
  
                //R
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
  
              //L
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(3*speed);                       //Space
  
                //D
  digitalWrite(LED_BUILTIN, HIGH);   //Dash
  delay(3*speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, HIGH);   //Dot
  delay(speed);                       //
  digitalWrite(LED_BUILTIN, LOW);    //
  delay(7*speed);                       //Space
  
}











