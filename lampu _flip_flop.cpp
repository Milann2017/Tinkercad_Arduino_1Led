#define L1 4

void setup ()
{
  pinMode(L1,OUTPUT);
  
  digitalWrite(L1,LOW);
}

void loop ()
{
  digitalWrite(L1,HIGH);
  delay(500);
  
  digitalWrite(L1,LOW);
  delay(5000);
}
