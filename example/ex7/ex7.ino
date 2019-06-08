/////////////////////////////////
// Generated with a lot of love//
// with TUNIOT FOR ESP8266     //
// Website: Easycoding.tn      //
/////////////////////////////////
#include <ESP8266WiFi.h>

#include "DHT.h"

#include <ESP8266HTTPClient.h>

float  temp;
float  humd;
int  light;
DHT dht14(14,DHT11);

WiFiClient client;

String thingSpeakAddress= "http://api.thingspeak.com/update?";
String writeAPIKey;
String tsfield1Name;
String request_string;

HTTPClient http;

void setup()
{
  temp = 0;
humd = 0;
light = 0;
Serial.begin(9600);
  Serial.println("Connect to test1");
   WiFi.begin("test1","1234567890");
  do {
    Serial.print(".");
    delay(500);
  } while ((!(WiFi.status() == WL_CONNECTED)));Serial.println("Connected");
  Serial.print("IP address:");
  Serial.println((WiFi.localIP().toString()));

}


void loop()
{

    humd = (dht14.readHumidity( ));
    temp = (dht14.readTemperature( ));
    light = analogRead(A0);
    Serial.print("Temp: ");
    Serial.println(temp);
    Serial.print("Humd");
    Serial.println(humd);
    Serial.print("Light");
    Serial.println(humd);
    if (client.connect("api.thingspeak.com",80)) {
      request_string = thingSpeakAddress;
      request_string += "key=";
      request_string += "M34Q37U2Y9EWIS89";
      request_string += "&field1=";
      request_string += temp;
      request_string += "&field2=";
      request_string += humd;
      request_string += "&field3=";
      request_string += light;

      http.begin(request_string);
      http.GET();
      http.end();
      request_string="";
      Serial.println("send");

    }
    delay(15000);

}