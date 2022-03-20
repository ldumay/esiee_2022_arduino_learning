// C++ code
//
void setup()
{
  pinMode(5, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
}

void loop()
{
  // Feux 1
  digitalWrite(5, HIGH);
  // Feux 2
  digitalWrite(10, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  // Feux 2
  digitalWrite(6, HIGH);
  digitalWrite(5, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // Feux 1
  digitalWrite(7, HIGH);
  digitalWrite(6, LOW);
  // Feux 2
  digitalWrite(10, LOW);
  digitalWrite(8, HIGH);
  delay(5000); // Wait for 5000 millisecond(s)
  // Feux 2
  digitalWrite(9, HIGH);
  digitalWrite(8, LOW);
  delay(2000); // Wait for 2000 millisecond(s)
  // Feux 2
  digitalWrite(10, HIGH);
  digitalWrite(9, LOW);
  delay(1); // Wait for 1 millisecond(s)
  // Feux 1
  digitalWrite(7, LOW);
  digitalWrite(5, HIGH);
}
