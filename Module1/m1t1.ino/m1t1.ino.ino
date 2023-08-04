// C++ code
//

const int pot = A0;
const int Piezo = 11;

void setup()
{
  pinMode(Piezo, OUTPUT);
  pinMode(pot, INPUT);
  Serial.begin(9600);
}

void loop()
{
  int freq = analogRead(pot) * 10;
  Serial.println(freq);
  tone(11,freq);
  
}