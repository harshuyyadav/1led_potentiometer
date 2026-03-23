#define pot A1    // potentiometer
#define led 12     // LED pin

void setup(){
  Serial.begin(9600);
  pinMode(pot, INPUT);
  pinMode(led, OUTPUT);
}

void loop(){
  int x = analogRead(pot);

  Serial.print("Pot Reading = ");
  Serial.println(x);

  if(x > 0){
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(500);
  }
}
