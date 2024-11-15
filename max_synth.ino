const int button1 = 53;
const int button2 = 51;
const int button3 = 49;
const int button4 = 47;
const int button5 = 45;
const int button6 = 41;

const int P1 = A0;
const int P2 = A1;
const int P3 = A2;
const int P4 = A3;
const int P5 = A4;
const int P6 = A5;
const int P7 = A6;
const int P8 = A7;
const int P9 = A8;
const int P10 = A9;

int button1state = 0;
int button2state = 0;
int button3state = 0;
int button4state = 0;
int button5state = 0;
int button6state = 0;

int P1V = 0;
int P2V = 0;
int P3V = 0;
int P4V = 0;
int P5V = 0;
int P6V = 0;
int P7V = 0;
int P8V = 0;
int P9V = 0;
int P10V = 0;

void setup() {
  
Serial.begin(9600);

pinMode(button1, INPUT_PULLUP);
pinMode(button2, INPUT_PULLUP);
pinMode(button3, INPUT_PULLUP);
pinMode(button4, INPUT_PULLUP);
pinMode(button5, INPUT_PULLUP);
pinMode(button6, INPUT_PULLUP);
}

void loop() {

button1state = digitalRead(button1);
button2state = digitalRead(button2);
button3state = digitalRead(button3);
button4state = digitalRead(button4);
button5state = digitalRead(button5);
button6state = digitalRead(button6);

P1V = analogRead(P1);
Serial.print(P1V);
Serial.print(" ");

P2V = analogRead(P2);
Serial.print(P2V);
Serial.print(" ");

P3V = analogRead(P3);
Serial.print(P3V);
Serial.print(" ");

P4V = analogRead(P4);
Serial.print(P4V);
Serial.print(" ");

P5V = analogRead(P5);
Serial.print(P5V);
Serial.print(" ");

P6V = analogRead(P6);
Serial.print(P6V);
Serial.print(" ");

P7V = analogRead(P7);
Serial.print(P7V);
Serial.print(" ");

P8V = analogRead(P8);
Serial.print(P8V);
Serial.print(" ");

P9V = analogRead(P9);
Serial.print(P9V);
Serial.print(" ");

P10V = analogRead(P10);
Serial.print(P10V);
Serial.print(" ");

if (button1state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }

if (button2state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }

  if (button3state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }

  if (button4state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }

    if (button5state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }

  if (button6state == LOW) {
    Serial.print("1");
    Serial.print(" ");
  } else {
    Serial.print("0");
    Serial.print(" ");
  }
  
  Serial.println();
}
