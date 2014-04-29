int IO_DIGIT_A  = 13;
int IO_DIGIT_B  = 12;
int IO_DIGIT_C  = 11;
int IO_DIGIT_D  = 10;
int IO_DIGIT_E  = 9;
int IO_DIGIT_F  = 8;
int IO_DIGIT_G  = 7;
int IO_DIGIT_DP = 6;

int IO_DIGIT_1 = 5;
int IO_DIGIT_2 = 4;
int IO_DIGIT_3 = 3;
int IO_DIGIT_4 = 2;

int IO_DIGIT_PORTS[] = {
  IO_DIGIT_A,
  IO_DIGIT_B,
  IO_DIGIT_C,
  IO_DIGIT_D,
  IO_DIGIT_E,
  IO_DIGIT_F,
  IO_DIGIT_G,
  IO_DIGIT_DP,
};

int IO_DIGITS[] = {
  IO_DIGIT_1,
  IO_DIGIT_2,
  IO_DIGIT_3,
  IO_DIGIT_4,  
};

int LED_ON = LOW;
int LED_OFF = HIGH;

int IO_DIGIT_PORT_COUNT = 8;
int IO_DIGIT_COUNT = 4;

void setup() {
  for(int i = 0;i < IO_DIGIT_PORT_COUNT;i++){
    pinMode(IO_DIGIT_PORTS[i], OUTPUT);
  }
  for(int i = 0;i < IO_DIGIT_COUNT;i++){
    pinMode(IO_DIGITS[i], OUTPUT);
  }
}

void loop() {
  for(int i = 0;i < IO_DIGIT_COUNT;i++){
    digitalWrite(IO_DIGITS[i], LED_OFF);
    for(int j = 0;j < IO_DIGIT_PORT_COUNT;j++){
      delay(300);
      digitalWrite(IO_DIGIT_PORTS[j], LED_ON);
    }
  
    delay(300);
    for(int j = 0;j < IO_DIGIT_PORT_COUNT;j++){
      digitalWrite(IO_DIGIT_PORTS[j], LED_OFF);
    }
    digitalWrite(IO_DIGITS[i], LED_ON);
  }
}
