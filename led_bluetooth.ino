//include the SoftwareSerial to create a communication port(TX-RX) with the Arduino
#include <SoftwareSerial.h>


SoftwareSerial BT(3,2);     //create the BT object with the two pins (Tx and Rx) in parameters
String message;             //Store incoming message from bluetooth


void setup() {
 BT.begin(9600);            // initialize the bluetooth-Arduino communication
 Serial.begin(9600);        // initialize the Arduino-USB port communication
}


void loop() {
  while (BT.available()){            //Listen to incoming data in the port
  delay(100);                        //delay
  char c = BT.read();                //retrieve the char
  state += c;                        //construct the message, char after char
  }  
  if (state.length() > 0) {          //if there's a message!=null, we print it out
    Serial.println(state); 

  if(state == "on")                  //Compare the state with predefined messages
  {
    //add an action to execute
      } 
  
  else if(state == "off") 
  {
    //add an action to execute
     }
state ="";                           //affect the state to zero
  }
} //Reset the variable
