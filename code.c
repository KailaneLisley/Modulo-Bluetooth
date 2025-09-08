// Declara uma variável do tipo char para armazenar o dado recebido pela Serial 
char buf;   

void setup() { 
  pinMode(3, OUTPUT);   // Define o pino 3 como saída (LED azul) 
  Serial.begin(9600);   // Inicializa a comunicação serial 
} 

void loop() { 
  buf = Serial.read();  // Lê os dados recebidos pela porta serial

  if (buf == '1') { 
    digitalWrite(3, HIGH); 
    Serial.println("LED azul ligado!"); 
  } 

  if (buf == '0') { 
    digitalWrite(3, LOW); 
    Serial.println("LED azul desligado!"); 
  } 
}
