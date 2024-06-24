#include "U8glib.h"
U8GLIB_SSD1306_128X64 u8g(U8G_I2C_OPT_NONE|U8G_I2C_OPT_DEV_0);

// 'NumberOne', 15x15px
const unsigned char numberOne [] PROGMEM = {
  0x08, 0x18, 0x28, 0x08, 0x08, 0x08, 
  0x08, 0x08, 0x08, 0x08, 0x3E
};
// 'NumberThree', 15x15px
const unsigned char numberThree [] PROGMEM = {
  0x3C, 0x02, 0x02, 0x02, 0x02, 0x3C, 
  0x02, 0x02, 0x02, 0x02, 0x3C
};
// 'NumberTwo', 15x15px
const unsigned char numberTwo [] PROGMEM = {
  0x3C, 0x02, 0x02, 0x02, 0x02, 0x3C, 
  0x40, 0x40, 0x40, 0x40, 0x3C
};
// 'NumberZero', 15x15px
const unsigned char numberZero [] PROGMEM = {
  0x3C, 0x42, 0x42, 0x42, 0x42, 0x42, 
  0x42, 0x42, 0x42, 0x42, 0x3C
};
// Array of all bitmaps for convenience. (Total bytes used to store images in PROGMEM = 192)
const int numberLen = 4;
const unsigned char* numbers[4] = {
  numberZero,
  numberOne,
  numberTwo,
  numberThree
};

//Movement Push Button Pins
#define btnUp_pin 4
#define btnDown_pin 2
#define btnActA_pin 13
#define btnActB_pin 12

#define ledPower_pin 7
bool pressed = false;

//Pong Position
int playerX = 10;
int botX = 118;
int playerY = 15;
int botY = 15;
int bothYextend = 15;

//Ball Position
int ballX = 64;
int ballY = 38;
//Pong Scoreboard
int scorePlayer = 0;
int scoreBot = 0;

//Pong Update Direction
int limitPlayerYmin;
int limitPlayerYmax;
int limitballYmin;
int limitballYmax;
int limitballXmin;
int limitballXmax;
int changeOnPlayer = 0;
int changeOnBot = 0;
int changeOnBallX = 0;
int changeOnBallY = 0;
int playerSpd = 3;
int playerYdir = 1;
int botSpd = 3;
int ballXdir = 1;
int ballYdir = 1;
int ballspd = 3;
int botYdir = 1;
int isPressedActA, isPressedActB, isPressedDown, isPressedUp = 0;

void key(){
  bool btnUp = digitalRead(btnUp_pin);
  bool btnDown = digitalRead(btnDown_pin);
  bool btnActA = digitalRead(btnActA_pin);
  bool btnActB = digitalRead(btnActB_pin);

  if(btnActB == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActB == 0){
      scoreboard(1);
    }
    while(!digitalRead(btnActB)){
      //while still pressed, do nothing
    }
    isPressedActB = 1;
  }
  else if(btnUp == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedUp == 0){
    }
    changeOnPlayer = 1;
    while(!digitalRead(btnUp_pin)){
//      playerMov(left);
    }
    isPressedUp = 1;
  }
  else if(btnDown == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedDown == 0){
    }
    changeOnPlayer = 0;
    while(!digitalRead(btnDown)){
//      playerMov(right);
    }
    isPressedDown = 1;
  }
  else if(btnActA == pressed){
    digitalWrite(ledPower_pin,1);
    if(isPressedActA == 0){
      scoreboard(0);
    }
    while(!digitalRead(btnActA)){
      //while still pressed, do nothing
    }
    isPressedActA = 1;
  }
  else{
    digitalWrite(ledPower_pin,0);
    isPressedDown = 0;
    isPressedActA = 0;
    isPressedActB = 0;
    isPressedUp = 0;
  }
}
void playerMov(void){
  if(playerY <= limitPlayerYmax && changeOnPlayer == 0){
    playerY+=playerSpd;
  }
  else if(playerY >= limitPlayerYmin){
    playerY-=playerSpd;
    changeOnPlayer++;
  }
  else{
    changeOnPlayer = 0;
  }
}
void PlayerTrajectory(){
  playerY+= playerYdir*playerSpd;
}
void botMov(void){
  if(botY >= limitPlayerYmax){
    botYdir = -1;
    BotTrajectory();
  }
  else if(botY <= limitPlayerYmin){
    botYdir = 1;
    BotTrajectory();
  }
  else if(botY - 15 >= ballY){
    botYdir = -1;
    BotTrajectory();
  }
  else if(botY + bothYextend + 15 <= ballY){
    botYdir = 1;
    BotTrajectory();
  }
  else{
    BotTrajectory();
  }
}
void BotTrajectory(){
  botY+= botYdir*botSpd;
}
void scoreboard(int res){
  if((res == 1 && scorePlayer >= numberLen - 1) || (res == 0 && scoreBot >= numberLen - 1)){
    scorePlayer = 0;
    scoreBot = 0;
  }
  else if(res == 1){
    scorePlayer++;
  }
  else{
    scoreBot++;
  }
}
void ballMov(void){
  if(isPressedActA){
    ballReset();
  }
  else if(ballY <= limitballYmin){
    ballYdir = 1;
    ballTrajectory();
  }
  else if(ballY >= limitballYmax){
    ballYdir = -1;
    ballTrajectory();
  }
  //player collision
  else if(ballX <= playerX+3 && ballX >= playerX+1 && ballY >= playerY-5 && ballY <= playerY+bothYextend+5){
    ballXdir = 1;
    ballTrajectory();
  }
  //bot collision
  else if(ballX >= botX-3 && ballX <= botX-1 && ballY >= botY-2 && ballY <= botY+bothYextend+2){
    ballXdir = -1;
    ballTrajectory();
  }
  else if(ballX <= limitballXmin){
    ballReset();
    scoreboard(1);
  }
  else if(ballX >= limitballXmax){
    ballReset();
    scoreboard(0);
  }
  else{
    ballTrajectory();
  }
}
void ballTrajectory(){
  ballX+= ballXdir*ballspd;
  ballY+= ballYdir*ballspd;
}
void ballReset(){
  ballX = 64;
  ballY = 38;
  delay(2000);
}
void staticDraw(void){
  //Initialize playing zone
  u8g.drawFrame(1,15,126,48); 
  //Scoreboard
  u8g.drawBitmapP( 40, 1, 15/8, 11, numbers[scoreBot]);
  u8g.drawBitmapP( 80, 1, 15/8, 11, numbers[scorePlayer]);
}
void draw(void) {
  int playerWidth = playerY + bothYextend;
  int botWidth = botY + bothYextend;
  //player
  u8g.drawLine(playerX, playerY, playerX, playerWidth);
  //bot
  u8g.drawLine(botX, botY, botX, botWidth);
  //ball
  u8g.drawCircle(ballX, ballY, 1);
}
void setup() {
  //Initialize Mov Pins
  pinMode(btnUp_pin, INPUT_PULLUP);
  pinMode(btnDown_pin, INPUT_PULLUP);
  pinMode(btnActA_pin, INPUT_PULLUP);
  pinMode(btnActB_pin, INPUT_PULLUP);
  
  pinMode(ledPower_pin, OUTPUT);
  limitPlayerYmin = playerY + 2;
  limitPlayerYmax = 59 - bothYextend;
  limitballYmin = limitPlayerYmin;
  limitballYmax = limitPlayerYmax + bothYextend;
  limitballXmin = 1;
  limitballXmax = 126;
}
void loop() {
  u8g.firstPage();
  playerMov();
  botMov();
  ballMov();
  do {
    key();
    draw();
    staticDraw();
  } while( u8g.nextPage() );
  delay(100);
}
