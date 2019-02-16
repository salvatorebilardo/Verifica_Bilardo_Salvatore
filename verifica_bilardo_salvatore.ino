int rosso = 12;
int giallo = 6;
int bianco = 8;
int verde = 10;
int delayrossogiallo;
int delaybiancoverde;


void setup() {
  // put your setup code here, to run once:
Serial.begin(9600);
  pinMode(rosso, OUTPUT);
  pinMode(giallo, OUTPUT);
  pinMode(verde, OUTPUT);
  pinMode(bianco, OUTPUT);
  inputrossogiallo();
  inputbiancoverde();
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(rosso,HIGH);
  digitalWrite(giallo,HIGH);
  digitalWrite ( verde,LOW);
  digitalWrite ( bianco,LOW);
  delay(delayrossogiallo);

  digitalWrite(rosso,LOW);
  digitalWrite (giallo,LOW);
  digitalWrite ( verde,HIGH);
  digitalWrite ( bianco,HIGH);
  delay (delaybiancoverde);
}
void inputrossogiallo() {
  Serial.println("quanti secondi vuoi fare durare il giallo e il rosso?");
  while ( Serial.available() == 0 ){ };
  delayrossogiallo =  Serial.readString().toInt();
}
void inputbiancoverde(){
   Serial.println("quanti secondi vuoi fare durare il bianco e il verde?");
  while ( Serial.available() == 0 ){ };
  delaybiancoverde =  Serial.readString().toInt();
}
