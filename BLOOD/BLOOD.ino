int touch = 0;                 // pino do Sensor Touch
int sensorSom = 2;             // pino do sensor de som
int leds = 1;                  // pino dos leds
boolean ledStatus = false;     // variavel que vai "guardar" o status dos leds

void setup() {
  pinMode(touch, INPUT);         // declara pino como uma entrada
  pinMode(sensorSom, INPUT);     // ... também
  pinMode(leds, OUTPUT);         // declara pino como uma saida
  digitalWrite(leds, ledStatus); // mantém os leds desligados na inicialização do Arduino
}// fim do setup

void loop() {

  if (digitalRead(touch) == HIGH || digitalRead(sensorSom) == LOW)// verifica se algum dos sensores foi "disparado", SE sim...
  {
    ledStatus =! ledStatus;        // inverte o status dos leds 
    digitalWrite(leds, ledStatus); // executa o acionamento
    delay(500);                    // evita acionamentos multiplos
  }


}// fim do loop
