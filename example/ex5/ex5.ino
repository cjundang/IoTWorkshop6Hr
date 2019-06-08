/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////


float  light;
void setup()
{
  light = 0;
Serial.begin(9600);

}


void loop()
{

    light = analogRead(A0);
    Serial.print("Value = ");
    Serial.println(light);
    delay(1000);

}
