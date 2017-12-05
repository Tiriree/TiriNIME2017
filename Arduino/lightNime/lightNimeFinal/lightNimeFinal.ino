////////////////// TIRI NIME FALL 2017 //////////////
////////////////// lights fun with 12V relay module control from MAX ////////////////////
///////////////// with a lot of helps from Sebastian Morales and Aaron Parsekian////////

int light[] = {6, 7, 8, 9, 10, 11, 12, 13};
int values[8];
int counter = 0;

void setup() {
  for (int i = 0; i < 8; i++) {
    pinMode(light[i], OUTPUT);
    digitalWrite(light[i], HIGH);
  }
  Serial.begin(9600);
  delay(1000);

}
void loop() {

  if (Serial.available()) {
    int inByte  = Serial.read();
    //    Serial.println(inByte);
    if (inByte == 'm') {//new max string
      counter = 0;
    }else {
      values[counter] = (int)inByte - 48;
      //      values[counter] = (int)inByte ;
      counter++;
    }
  }
  if (counter == 8 ) {
    counter = 0;
    lights(values);
    Serial.print("max sent: ");
    for (int i = 0; i < 8; i++) {
      Serial.print(values[i]);
      if (i != 7) {
        Serial.print(',');
      }
    }
    Serial.println(" ");
  }
}


void lights(int maxLights[]) {
  for (int i = 0; i < 8; i++) {
    if (maxLights[i] == 0) {
      digitalWrite(light[i], HIGH);
    }
    if (maxLights[i] == 1) {
      digitalWrite(light[i], LOW);
    }
    delay(10);
  }
}

void lightCycle(int l, int pause) {
  digitalWrite(l, LOW);
  delay(pause);
  digitalWrite(l, HIGH);
  delay(pause);
}

void lightOn(int l) {
  digitalWrite(l, LOW);
}
void lightOff(int l) {
  digitalWrite(l, HIGH);
}
