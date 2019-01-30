#include "mbed.h"
 
InterruptIn btn(A0);
  DigitalOut buzzer(D2);
  DigitalOut led(D6);
  DigitalOut led7(D7);
  DigitalOut led8(D8);
 
void button_pressed() {
  led = !led; // toggle the LED
  led7 = !led7; // toggle the LED
  led8 = !led8; // toggle the LED
  buzzer = !buzzer;
}
 
int main(int, char**) {
  btn.fall(&button_pressed); // whenever the button falls, execute button_pressed function
 
  while (1) {}
