
#include <algorithm>

#define cardboard 32
#define glass 33
#define metal 27
#define paper 12
#define plastic 13
#define trash 25
#define button 19
// led selection function

int Selection(String trashy){
    if(trashy == "cardboard"){
      digitalWrite(cardboard,HIGH);
      delay(3000); 
      digitalWrite(cardboard,LOW);
      delay(500);
    }
    else if(trashy == "glass"){
      digitalWrite(glass,HIGH);
      delay(3000);
      digitalWrite(glass,LOW);
      delay(500);
    }
    else if(trashy == "paper"){
      digitalWrite(paper,HIGH);
      delay(3000);
      digitalWrite(paper,LOW);
      delay(500);
    }
    else if(trashy == "metal"){
      digitalWrite(metal,HIGH);
      delay(3000);
      digitalWrite(metal,LOW);
      delay(500);
    }
    else if(trashy == "plastic"){
      digitalWrite(plastic,HIGH);
      delay(3000);
      digitalWrite(plastic,LOW);
      delay(500);
    }
    else if(trashy == "trash"){
      digitalWrite(trash,HIGH);
      delay(3000);
      digitalWrite(trash,LOW);
      delay(500);
    }
    else
      Serial.println("Not recognised");
    return 0;
}
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin as output.
  pinMode(cardboard, OUTPUT);
  pinMode(metal, OUTPUT);
  pinMode(paper, OUTPUT);
  pinMode(glass, OUTPUT);
  pinMode(plastic, OUTPUT);
  pinMode(trash, OUTPUT);
  attachInterrupt(digitalPinToInterrupt(button), stop, FALLING);
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

void loop() {
  // check if data is available
  if (Serial.available() > 0) {
    // read the incoming string:
    String type = Serial.readString();

    //remove whitespace
    std::remove_if(type.begin(),type.end(),isspace);

    // prints the received data
    Serial.print("The trash type is: ");
    Serial.println(type);

    //Lights the LED according to the type
    Selection(type);
  }
  
}

void stop(){
  if(digitalRead(cardboard) == HIGH) digitalWrite(cardboard,LOW);
  if(digitalRead(plastic) == HIGH) digitalWrite(plastic,LOW);
  if(digitalRead(paper) == HIGH) digitalWrite(paper,LOW);
  if(digitalRead(glass) == HIGH) digitalWrite(glass,LOW);
  if(digitalRead(trash) == HIGH) digitalWrite(trash,LOW);
  if(digitalRead(metal) == HIGH) digitalWrite(metal,LOW);
}
