#define D0 16
#define led3 D0

#define D1 05
#define led2 D1

#define D2 04
#define led1 D2

#define D4 02
#define buz D4

#define sensor A0

void setup() {
 Serial.begin(9600);
  pinMode(led1,OUTPUT); //RED
  pinMode(led2,OUTPUT); //GREEN
  pinMode(led3,OUTPUT); //BLUE
  pinMode(buz,OUTPUT);
}

void loop() {
   int A = analogRead(sensor);
   int value = map(A , 0 , 1023 , 100 , 0 );

     Serial.print("Value : ");
  Serial.print(value);
  Serial.println("%");
  
  if( value > 65){
   Hight();
  }
  if( value < 65 and value>59){
   Medium();

  }
  if( value <59){
     Low();
  }
}
  void Low()  {
  digitalWrite(led1, 0);
  digitalWrite(led2, 0);
  digitalWrite(led3, 1);
  analogWrite(buz, 10);
  delay(1000);
  analogWrite(buz, 0);
  delay(1000);
}
void Medium() {
  digitalWrite(led1, 0);
  digitalWrite(led2, 1);
  digitalWrite(led3, 0);
  analogWrite(buz, 100);
  delay(500);
  analogWrite(buz, 0);
  delay(500);
}
void Hight()  {
  digitalWrite(led1, 1);
  digitalWrite(led2, 0);
  digitalWrite(led3, 0);
  analogWrite(buz, 200);
  delay(100);
  analogWrite(buz, 0);
  delay(100);
}
  

