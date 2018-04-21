#define C 2093
#define D 2349
#define E 2637
#define F 2793
#define G 3135
#define A 3520
#define B 3951
#define CH 4186

void setup() {
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  pinMode(4, INPUT);
  pinMode(5, INPUT);
  pinMode(6, INPUT);
  pinMode(7, INPUT);
  pinMode(8, INPUT);
  pinMode(9, INPUT);
  pinMode(10, OUTPUT);
}

void loop() {
  for(int i = 2; i < 10; i++) digitalWrite(i, HIGH);
  int playing = 0;
  int value = 0;

  value = digitalRead(2);
  if(value == LOW && playing == 0)
  {
    tone(10, C, 10);
    playing = 1;
  }
  value = digitalRead(3);
  if(value == LOW && playing == 0)
  {
    tone(10, D, 10);
    playing = 1;
  }
  value = digitalRead(4);
  if(value == LOW && playing == 0)
  {
    tone(10, E, 10);
    playing = 1;
  }
  value = digitalRead(5);
  if(value == LOW && playing == 0)
  {
    tone(10, F, 10);
    playing = 1;
  }
  value = digitalRead(6);
  if(value == LOW && playing == 0)
  {
    tone(10, G, 10);
    playing = 1;
  }
  value = digitalRead(7);
  if(value == LOW && playing == 0)
  {
    tone(10, A, 10);
    playing = 1;
  }
  value = digitalRead(8);
  if(value == LOW && playing == 0)
  {
    tone(10, B, 10);
    playing = 1;
  }
  value = digitalRead(9);
  if(value == LOW && playing == 0)
  {
    tone(10, CH, 10);
    playing = 1;
  }
}
