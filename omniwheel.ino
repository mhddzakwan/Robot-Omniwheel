//MECANUM WHEELS ROBOT
//ROBOT LK

#define IN_11  2        // L298N #1 in 4 motor Front Right
#define IN_12  3        // L298N #1 in 3 motor Front Right
#define IN_13  4        // L298N #1 in 2 motor Front Left
#define IN_14  5        // L298N #1 in 1 motor Front Left

#define IN_21  6        // L298N #2 in 4 motor Back Left
#define IN_22  7       // L298N #2 in 3 motor Back Left
#define IN_23  8       // L298N #2 in 2 motor Back Right
#define IN_24  9      // L298N #2 in 1 motor Back Right

//ROBOT LK


int command;             //Int to store app command state.
boolean state = 1;


void stopRobot() {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, LOW);

  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, LOW);
  
  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, LOW);
  
  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, LOW);
  
}
void back() {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, HIGH);

  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, HIGH);
 
  digitalWrite(IN_24, HIGH);
  digitalWrite(IN_23, LOW);
  
  digitalWrite(IN_22, HIGH);
  digitalWrite(IN_21, LOW);
 
}
void forward (int speed) {
  analogWrite(IN_11, speed); // Kecepatan motor Front Right
  digitalWrite(IN_12, LOW);

  analogWrite(IN_13, speed); // Kecepatan motor Front Left
  digitalWrite(IN_14, LOW);
  
  digitalWrite(IN_24, LOW);
  analogWrite(IN_23, speed); // Kecepatan motor Back Right
 
  digitalWrite(IN_22, LOW);
  analogWrite(IN_21, speed); // Kecepatan motor Back Left
}

void left() {
  digitalWrite(IN_11, HIGH);
  digitalWrite(IN_12, LOW);
  
  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, HIGH);
  
  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, HIGH);
  
  digitalWrite(IN_22, HIGH);
  digitalWrite(IN_21, LOW);
  
}
void right() {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, HIGH);
  
  digitalWrite(IN_13, HIGH);
  digitalWrite(IN_14, LOW);

  digitalWrite(IN_24, HIGH);
  digitalWrite(IN_23, LOW);
 
  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, HIGH);
  
}
void superleft () {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, HIGH);
  
  digitalWrite(IN_13, HIGH);
  digitalWrite(IN_14, LOW);

  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, HIGH);

  digitalWrite(IN_22, HIGH);
  digitalWrite(IN_21, LOW);
 
}
void superright () {
  digitalWrite(IN_11, HIGH);
  digitalWrite(IN_12, LOW);
 
  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, HIGH);
 
  digitalWrite(IN_24, HIGH);
  digitalWrite(IN_23, LOW);
 
  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, HIGH);

}
void forwardright () {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, LOW);

  digitalWrite(IN_13, HIGH);
  digitalWrite(IN_14, LOW);

  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, LOW);

  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, HIGH);
  
}
void forwardleft () {
  digitalWrite(IN_11, HIGH);
  digitalWrite(IN_12, LOW);
  
  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, LOW);
  
  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, HIGH);
 
  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, LOW);
  
}
void backleft () {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, HIGH);

  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, LOW);
 
  digitalWrite(IN_24, HIGH);
  digitalWrite(IN_23, LOW);
  
  digitalWrite(IN_22, LOW);
  digitalWrite(IN_21, LOW);
  
}
void backright () {
  digitalWrite(IN_11, LOW);
  digitalWrite(IN_12, LOW);
  
  digitalWrite(IN_13, LOW);
  digitalWrite(IN_14, HIGH);
  
  digitalWrite(IN_24, LOW);
  digitalWrite(IN_23, LOW);
  
  digitalWrite(IN_22, HIGH);
  digitalWrite(IN_21, LOW);
  
}
void setup() {
  Serial.begin (9600);
  
  pinMode(IN_11, OUTPUT);
  pinMode(IN_12, OUTPUT);
  pinMode(IN_13, OUTPUT);
  pinMode(IN_14, OUTPUT);

  pinMode(IN_21, OUTPUT);
  pinMode(IN_22, OUTPUT);
  pinMode(IN_23, OUTPUT);
  pinMode(IN_24, OUTPUT);

   
}
//ROBOT LK

void loop() {
  forward(255);delay(2000);
  forward(200);delay(2000);
  forward(150);delay(2000);
  forward(100);delay(2000);
  forward(50);delay(2000);
  stopRobot();delay(5000);
}