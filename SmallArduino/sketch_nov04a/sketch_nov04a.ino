void setup() {
 
  pinMode(2, INPUT_PULLUP);
  pinMode(3, OUTPUT);
}

boolean stan = 1;

void loop() {
if (digitalRead(2) == HIGH)
{
delay(20);
stan =! stan;
digitalWrite(3,stan);
while(digitalRead(2) == HIGH);
delay(20);
}



}
