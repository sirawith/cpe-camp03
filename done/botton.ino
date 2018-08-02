#define D2 4 
#define button D2
#define pressed HIGH
#define D0 16
#define led D0
void setup(){
Serial.begin(115200); pinMode(button,INPUT_PULLUP);
pinMode(led,OUTPUT);
}
void loop(){
bool ReadSwitch = digitalRead(button);
if(ReadSwitch == pressed)
{
digitalWrite(led,1);
 }
 else{
  digitalWrite(led,0);
 }
}
