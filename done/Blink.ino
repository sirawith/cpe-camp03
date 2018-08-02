#define D0 16
#define led D0

void setup(){
  pinMode(led,OUTPUT);
}


void loop(){

  for(int i=0 ; i<3 ; i++){
    digitalWrite(led,1);
    delay(1000);
    digitalWrite(led,0);
    delay(1000);
  }
  for( int j=0 ; j<3 ; j++){
    digitalWrite(led,1);
    delay(500);
    digitalWrite(led,0);
    delay(500);
  }
}

