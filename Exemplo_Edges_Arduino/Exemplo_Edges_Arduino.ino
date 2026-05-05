#define LED_1 2
#define LED_2 3
#define LED_3 4
#define BT_E 9
#define BT_D 10

void setup() {
  Serial.begin(9600);
  pinMode(LED_1, OUTPUT);
  pinMode(LED_2, OUTPUT);
  pinMode(LED_3, OUTPUT);
  pinMode(BT_D, INPUT_PULLUP);
  pinMode(BT_E, INPUT_PULLUP); 
}

void loop() {
  // Para o botão da direita
  // Detectar a transição negativa do sinal (falling edge ou borda de descida)
  // Quando o sinal passa de HIGH (botão OFF) para LOW (botão ON)
  // Apenas imprimir no Serial Monitor que houve a transição

  // Detectar a transição positiva do sinal (rising edge ou borda de subida)
  // Quando o sinal passa de LOW (botão ON) para HIGH (botão OFF)
  // Imprimir no Serial Monitor que houve a transição, e acender todos os LEDs

  // Para o botão da esquerda
  // Detectar a transição negativa do sinal (falling edge ou borda de descida)
  // Quando o sinal passa de HIGH (botão OFF) para LOW (botão ON)
  // Apenas imprimir no Serial Monitor que houve a transição

  // Detectar a transição positiva do sinal (rising edge ou borda de subida)
  // Quando o sinal passa de LOW (botão ON) para HIGH (botão OFF)
  // Imprimir no Serial Monitor que houve a transição, e apagar todos os LEDs
  
}









