#include <stdio.h>
int inputPin=11; //定义ECHO为11pin
int outputPin=10; //定义TRIG为10pin
void setup()
{
Serial.begin(9600);
pinMode(inputPin, INPUT);
pinMode(outputPin, OUTPUT);
}
void loop ()
{
digitalWrite(outputPin, LOW);
delayMicroseconds(2);
digitalWrite(outputPin, HIGH);
digitalWrite(outputPin, LOW);
int distance = pulseIn(inputPin, HIGH);
int a = 100;
distance = distance*0.034/2;//计算距离
if (distance>a)
{
  Serial.println("too big");//超出100cm提示
  }
  else
  {
    Serial.print(distance);//打印距离
    Serial.println("cm");
    }
delay(500);
}
