#define IR_SENSOR 4
#define LED_PIN 2

void setup()
{
    pinMode(IR_SENSOR, INPUT);
    pinMode(LED_PIN, OUTPUT);

    Serial.begin(115200);
}

void loop()
{
    int sensorState = digitalRead(IR_SENSOR);

    Serial.println(sensorState);

    if (sensorState == LOW)
    {
        digitalWrite(LED_PIN, LOW);
    }
    else
    {
        digitalWrite(LED_PIN, HIGH);
    }

    delay(100);
}
