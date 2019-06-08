/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////


String  str;
void setup()
{
  str = "";

Serial.begin(9600);
  Serial.println("Loading Completed");

}


void loop()
{

    if (Serial.available() > 0) {
      str = Serial.readStringUntil('\n');
      Serial.print("Hello ");
      Serial.println(str);

    }
    delay(1000);

}
