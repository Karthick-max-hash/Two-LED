
# Two LEDs Blink with Arduino

This Arduino project blinks *two LEDs alternately* using digital pins 12 and 13. The simulation and circuit were created in Tinkercad.

---

## 🚀 What It Does

- Turns *LED 1 (pin 13)* ON and *LED 2 (pin 12)* OFF
- Waits for 2 second
- Then turns *LED 1 OFF* and *LED 2 ON*
- Repeats the cycle continuously

---

## 🔗 Tinkercad Simulation

👉 [View the Circuit in Tinkercad] <https://www.tinkercad.com/things/isxWvb3bufB-two-led> 

---

## 🔌 Circuit Details

| Arduino Pin | Component | Description        |
|-------------|-----------|--------------------|
| D13         | LED 1     | Long leg to D13, short leg to GND via 220Ω resistor |
| D12         | LED 2     | Long leg to D12, short leg to GND via 220Ω resistor |

---

## 📦 Requirements

- Arduino UNO
- 2 x LEDs (any color)
- 2 x 220Ω resistors
- Jumper wires
- Breadboard (optional)
- USB cable for Arduino

---

## 💾 Arduino Code

```cpp
void setup() {
  pinMode(13, OUTPUT);  // LED 1
  pinMode(12, OUTPUT);  // LED 2
}

void loop() {
   digitalWrite(12, HIGH);
  delay(2000);
  digitalWrite(12,LOW);
  delay(2000);
  digitalWrite(13,HIGH);
  delay(2000);
  
  digitalWrite(13, LOW);
  
} 
}
