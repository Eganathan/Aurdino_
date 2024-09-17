
void setup() {
pinMode(12,OUTPUT);
}

void loop() {
showCharachter(300,200);
showCharachter(300,200);
showCharachter(300,200);
showCharachter(300,1000);

showCharachter(300,200);
showCharachter(300,1000);

}

int showCharachter(int millies, int lastDelay) {
digitalWrite(12,HIGH);
delay(millies);
digitalWrite(12,LOW);
delay(lastDelay);
    return 0;
}
