#include "mylib.h"
#include "Emic2TTS.h"

void Emic2TtsModule::init() {
    Serial1.begin(9600);
      
    Serial1.print('\n');
    while (Serial1.read() != ':');
    delay(10);

    Serial1.flush();
}

