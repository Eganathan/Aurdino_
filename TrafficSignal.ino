void setup() {

pinMode(13,OUTPUT);
pinMode(12,OUTPUT);
pinMode(7,OUTPUT);
}

void loop() {
blinkLight(13,1000);
blinkLight(12,2500);
blinkLight(7,2500);
}

int blinkLight(int pin, int time) {
digitalWrite(pin,HIGH);
delay(time);
digitalWrite(pin,LOW);
delay(1000);
    return 0;
}
