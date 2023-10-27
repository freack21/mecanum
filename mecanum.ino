/* Fill-in information from Blynk Device Info here */
#define BLYNK_TEMPLATE_ID "TMPL65MiRe6Dt"
#define BLYNK_TEMPLATE_NAME "Mobil Robot Blynk"
#define BLYNK_AUTH_TOKEN "hETugI7oN5LnvK7eL6EBVo6DSIXDNILe"

/* Comment this out to disable prints and save space */
#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>
#include <Servo.h>

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "SSO_UNRI";
char pass[] = "";

// driver motor depan
int IN11 = D1;
int IN21 = D2;
int IN31 = D3;
int IN41 = D4;

// driver motor belakang
int IN12 = D5;
int IN22 = D6;
int IN32 = D7;
int IN42 = D8;

// This function is called every time the Virtual Pin 0 state changes
BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if(value == 1) maju();
  else stop();
}

BLYNK_WRITE(V1)
{
  if(param.asInt() == 1) mundur();
  else stop();
}

BLYNK_WRITE(V2)
{
  if(param.asInt() == 1) kiri();
  else stop();
}

BLYNK_WRITE(V3)
{
  if(param.asInt() == 1) kanan();
  else stop();
}

BLYNK_WRITE(V4)
{
  if(param.asInt() == 1) geser_kiri();
  else stop();
}

BLYNK_WRITE(V5)
{
  if(param.asInt() == 1) geser_kanan();
  else stop();
}

BLYNK_WRITE(V6)
{
  if(param.asInt() == 1) maju_kiri();
  else stop();
}

BLYNK_WRITE(V7)
{
  if(param.asInt() == 1) maju_kanan();
  else stop();
}

void setup()
{
  // Debug console
  Serial.begin(115200);

  pinMode(IN11, OUTPUT);
  pinMode(IN21, OUTPUT);
  pinMode(IN31, OUTPUT);
  pinMode(IN41, OUTPUT);

  pinMode(IN12, OUTPUT);
  pinMode(IN22, OUTPUT);
  pinMode(IN32, OUTPUT);
  pinMode(IN42, OUTPUT);

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);
}

void loop()
{
  Blynk.run();
}
