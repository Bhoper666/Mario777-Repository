int pin = 13;

void setup()
{
    pinMode(pin, OUTPUT);
}

void loop()
{
    digitalWrite(pin, 1);
    delay(1000);
    digitalWrite(pin, 0);
    delay(1000);
}