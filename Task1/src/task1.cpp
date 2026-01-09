#include <Arduino.h>
// Define the built-in red LED pin
constexpr int LED_PIN = 13;
void dot(){
    digitalWrite(LED_PIN,HIGH);
    delay(300);
    digitalWrite(LED_PIN,LOW);
    delay(300);
}
void dash(){
    digitalWrite(LED_PIN,HIGH);
    delay(900);
    digitalWrite(LED_PIN,LOW);
    delay(300);
}

void nletter(){
    delay(600);
}
void h(){
    dot();
    dot();
    dot();
    dot();
    nletter();
}

void s(){
    dot();
    dot();
    dot();
    nletter();
}

void i(){
    dot();
    dot();
    nletter();

}

void a(){
    dot();
    dash();
    nletter();
}

void o(){
    dash();
    dash();
    dash();
    nletter();
}

void c(){
    dash();
    dot();
    dash();
    dot();
    nletter();
}

void e(){
    dot();
    nletter();
}

void n(){
    dash();
    dot();
    nletter();
}

void y(){
    dash();
    dot();
    dash();
    dash();
    nletter();
}

void u(){
    dot();
    dot();
    dash();
    nletter();
}
void setup() {
 // Set the LED pin as an output
 pinMode(LED_PIN, OUTPUT);
 
}

void loop() {
    h();
    s();
    i();
    a();
    o();
    y();
    u();

    c();
    h();
    e();
    n();

    delay(1100);
}


