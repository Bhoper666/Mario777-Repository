int val;

void setup()
{
    Serial.begin(9600);
    pinMode(13, OUTPUT);
}

void loop()
{
    if (Serial.available()) //check, we dont have any commands on input?
    {
        val = Serial.read(); // variable "val" change to received command
        if (val == '1')
        {
            digitalWrite(13, 1);
            if (val == '0')
            {
                digitalWrite(13, 0);
            }}
            
        
    }
    
}