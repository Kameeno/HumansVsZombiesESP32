#include <Arduino.h>
#include <Human_vs_Zombies.h>

void setup() {
  /* Sweet Singleton */
  HumanVsZombies::getInstance().boot();
  vTaskDelete(NULL);
}

void loop() {}