/**
 *  This program tests the ultrasonic
 *  distance sensor
 * 
 * Pranav Sree Rajhen S
 * @version 1.0 14.04.2021
 */
  
/* Give a name to a constant value before
 * the program is compiled. The compiler will 
 * replace references to Trigger and Echo with 
 * 11 and 12, respectively, at compile time.
 * These defined constants don't take up 
 * memory space on the Arduino.
 */
#define Trigger 11
#define Echo 12
  
/*   
 *  This setup code is run only once, when 
 *  Arudino is supplied with power.
 */
void setup(){
  
  // Set the baud rate to 9600. 9600 means that 
  // the serial port is capable of transferring 
  // a maximum of 9600 bits per second.
  Serial.begin(9600);
  
  // Define each pin as an input or output.
  pinMode(Echo, INPUT);
  pinMode(Trigger, OUTPUT);
}
  
void loop(){
  
  // Make the Trigger LOW (0 volts) 
  // for 2 microseconds
  digitalWrite(Trigger, LOW);
  delayMicroseconds(2);
  
  // Emit high frequency 40kHz sound pulse
  // (i.e. pull the Trigger) 
  // by making Trigger HIGH (5 volts) 
  // for 10 microseconds
  digitalWrite(Trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(Trigger, LOW); 
  
  // Detect a pulse on the Echo pin 8. 
  // pulseIn() measures the time in 
  // microseconds until the sound pulse
  // returns back to the sensor.
  int distance = pulseIn(Echo, HIGH);
  
  // Speed of sound is:
  // 13511.811023622 inches per second
  // 13511.811023622/10^6 inches per microsecond
  // 0.013511811 inches per microsecond
  // Taking the reciprocal, we have:
  // 74.00932414 microseconds per inch 
  // Below, we convert microseconds to inches by 
  // dividing by 74 and then dividing by 2
  // to account for the roundtrip time.
  distance = distance / 74 / 2;
  
  // Print the distance in inches
  Serial.println(distance);
  
  // Pause for 100 milliseconds
  delay(100);
}
