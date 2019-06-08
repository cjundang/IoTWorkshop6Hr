/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include "DHT.h"

float  temp;
float  humd;
DHT dht14(14,DHT11);

void setup()
{
  temp = 0;
humd = 0;
Serial.begin(9600);

}


void loop()
{

    humd = (dht14.readHumidity( ));
    temp = (dht14.readTemperature( ));
    Serial.print("Temperature : ");
    Serial.println(temp);
    Serial.print("Humidity : ");
    Serial.println(humd);
    delay(1000);

}