int sig=2;
int motor_left1=4;
int motor_left2=5;
int motor_right1=6;
int motor_right2=7;
int distance;
void forward(void);
void right(void);
void setup() {
  
  pinMode(motor_left1,OUTPUT);
  pinMode(motor_left2,OUTPUT);
  pinMode(motor_right1,OUTPUT);
  pinMode(motor_right2,OUTPUT);
  pinMode(sig,INPUT);
  Serial.begin(9600);
}

void loop() {
  
  while(digitalRead(sig)){
    Serial.println("GOING");
    forward();
    }  
   while(!digitalRead(sig)){
    right();
    Serial.println("RIGHT");
    Serial.println(digitalRead(sig));
    }delay(700);

}

void right(void){

  digitalWrite(motor_left1,HIGH);
  digitalWrite(motor_left2,LOW);
  digitalWrite(motor_right1,LOW);
  digitalWrite(motor_right2,HIGH);

}
void forward(void){

  digitalWrite(motor_left1,HIGH);
  digitalWrite(motor_left2,LOW);
  digitalWrite(motor_right1,HIGH);
  digitalWrite(motor_right2,LOW);

}
