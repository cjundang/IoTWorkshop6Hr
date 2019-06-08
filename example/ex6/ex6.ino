float  light;
void setup()
{
  light = 0;
pinMode(16, OUTPUT);
Serial.begin(9600);

}


void loop()
{

    light = analogRead(A0);
    if (light > 512) {
      digitalWrite(16,LOW);

    } else {
      digitalWrite(16,HIGH);

    }
    Serial.print("Value = ");
    Serial.println(light);
    delay(1000);

}
