Módulo Bluetooth – Robô Autônomo 🤖📡

Este repositório apresenta o desenvolvimento de um sistema de acionamento de LED utilizando o módulo Bluetooth HC-05 conectado ao Arduino Uno, controlado por meio de um aplicativo instalado em dispositivo móvel.

O projeto foi desenvolvido como parte da disciplina de Robótica Inclusiva, com foco em demonstrar a integração entre hardware e software de forma acessível, prática e educativa

Relatório_Robótica_Inclusiva

.

🎯 Objetivo

Demonstrar a comunicação entre smartphones e microcontroladores via Bluetooth.

Controlar remotamente o acionamento de um LED azul.

Introduzir conceitos básicos de eletrônica, programação e automação.

🛠️ Materiais Utilizados

Arduino Uno

Módulo Bluetooth HC-05

LED Azul

4 Jumpers

🔌 Montagem do Circuito

GND (Bluetooth) → GND (Arduino)

VCC (Bluetooth) → 3.3V (Arduino)

TXD (Bluetooth) → RX (Arduino - pino 0)

LED positivo → Pino digital 3 (PWM)

LED negativo → GND (Arduino)

📷 Veja o esquema no ThinkerCAD:


💻 Código Arduino
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

📱 Funcionamento

O controle foi feito utilizando o aplicativo Arduino Bluetooth Controller, permitindo ligar e desligar o LED em tempo real.

🎥 Vídeo do funcionamento

⚠️ Possíveis Problemas Encontrados

Conexão com o Bluetooth – dificuldade no pareamento, solucionada ajustando a alimentação e a configuração de RX/TX.

Ligação incorreta do LED – polaridade invertida; corrigido conectando o ânodo ao pino digital e o cátodo ao GND.

✅ Resultados

O sistema funcionou corretamente em tempo real.

Permitiu aprendizado prático sobre comunicação serial, controle via Bluetooth e integração hardware/software.

Servirá como base para projetos futuros (carros robóticos, braços robóticos, etc).

📚 Referências

F. Vieira, Módulo Bluetooth HC-06 para Arduino, YouTube, 2018. Disponível em: link
.

Arduino Ômega, Robótica para Iniciantes, E-book, pp. 61–74. Disponível em: link
.

👩‍💻 Autores

Kailane Lisley de Araújo Silva

Dayvson Henrique da Silva Mendes

Luciano Henrique Pereira Cordeiro

Samuel Ponciano Marques da Silva
