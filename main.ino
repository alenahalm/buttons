#define d3 3
#define d4 4
#define d5 5
#define d6 6

void setup() {
  pinMode(d3, INPUT);
  pinMode(d4, INPUT);
  pinMode(d5, OUTPUT);
  pinMode(d6, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  
  digitalWrite(d5, HIGH);
  int b1 = digitalRead(d3);
  int b2 = digitalRead(d4);
  digitalWrite(d5, LOW);
  if (b1 == 1) {
    Serial.print(1);
  } else {
    Serial.print("_");
  }
  if (b2 == 1) {
    Serial.print(2);
  } else {
    Serial.print("_");
  }


  digitalWrite(d6, HIGH);
  int b3 = digitalRead(d3);
  int b4 = digitalRead(d4);
  digitalWrite(d6, LOW);
  if (b3 == 1) {
    Serial.print(3);
  } else {
    Serial.print("_");
  }
  if (b4 == 1) {
    Serial.print(4);
  } else {
    Serial.print("_");
  }

  Serial.println();
}
