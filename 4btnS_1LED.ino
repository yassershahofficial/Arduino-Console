//Movement Push Button Pins
#define btnUp_pin 3
#define btnDown_pin 2
#define btnActA_pin 13
#define btnActB_pin 12

#define ledPower_pin 4
bool pressed = false;

void setup() {
  //Initialize Mov Pins
  pinMode(btnUp_pin, INPUT_PULLUP);
  pinMode(btnDown_pin, INPUT_PULLUP);
  pinMode(btnActA_pin, INPUT_PULLUP);
  pinMode(btnActB_pin, INPUT_PULLUP);
  
  pinMode(ledPower_pin, OUTPUT);
}

void loop() {
  bool btnUp = digitalRead(btnUp_pin);
  bool btnDown = digitalRead(btnDown_pin);
  bool btnActA = digitalRead(btnActA_pin);
  bool btnActB = digitalRead(btnActB_pin);
  
  if(btnUp == pressed){
    digitalWrite(ledPower_pin,1);
    while(!digitalRead(btnUp_pin)){
      //while still pressed, do nothing
    }
  }
  else if(btnDown == pressed){
    digitalWrite(ledPower_pin,1);
    while(!digitalRead(btnDown)){
      //while still pressed, do nothing
    }
  }
  else if(btnActA == pressed){
    digitalWrite(ledPower_pin,1);
    while(!digitalRead(btnActA)){
      //while still pressed, do nothing
    }
  }
  else if(btnActB == pressed){
    digitalWrite(ledPower_pin,1);
    while(!digitalRead(btnActB)){
      //while still pressed, do nothing
    }
  }
  else{
    digitalWrite(ledPower_pin,0);
  }
}
