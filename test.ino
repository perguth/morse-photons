//D7 LED Flash Example
int LED = D7;

void setup() {
    pinMode(LED, OUTPUT);
}

void loop() {
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);
    delay(1000);
    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);

    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);

    digitalWrite(LED, HIGH);
    delay(1000);
    digitalWrite(LED, LOW);

    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
    delay(1000);
}
