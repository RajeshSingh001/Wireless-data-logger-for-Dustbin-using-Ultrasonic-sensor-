static int trigger = 7;
static int echo = 6;
float distance, duration;
void setup()
{
  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  Serial.begin(9600);
}

void loop()
{
  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  digitalWrite(trigger, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigger, LOW);
  duration = pulseIn(echo, HIGH); // time taken by the sonic wave to go and return back
  distance = (duration * .0340) / 2; // convert time taken to distance.
  if (distance >= 20 && distance < 50)
  {
    Serial.print('\r');
    Serial.print(1);
    Serial.print('|');
    Serial.print(1);
    Serial.print('|');
    Serial.print(distance);
    Serial.print('\n');
  }
  else if (distance >= 50 && distance < 100)
  {
    Serial.print('\r');
    Serial.print(2);
    Serial.print('|');
    Serial.print(2);
    Serial.print('|');
    Serial.print(distance);
    Serial.print('\n');
  }
  else if (distance >= 100 && distance < 150)
  {
    Serial.print('\r');
    Serial.print(3);
    Serial.print('|');
    Serial.print(3);
    Serial.print('|');
    Serial.print(distance);
    Serial.print('\n');
  }
  else if (distance >= 150 && distance < 200)
  {
    Serial.print('\r');
    Serial.print(4);
    Serial.print('|');
    Serial.print(4);
    Serial.print('|');
    Serial.print(distance);
    Serial.print('\n');
  }
  else
  {
    Serial.print('\r');
    Serial.print(5);
    Serial.print('|');
    Serial.print(5);
    Serial.print('|');
    Serial.print(distance);
    Serial.print('\n');
  }
}
