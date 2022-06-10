#define ldr A0
#define role 3

void setup()
{
  pinMode(role, OUTPUT); 
  pinMode(ldr, INPUT); 
  Serial.begin(9600); 
}

void loop()
{
  int isik = analogRead(ldr);
  //Serial.println(isik);
  
  if(isik>=800){
    Serial.println(isik);
    digitalWrite(role, LOW);
  }
  else if((isik>55) && (isik<800)){
    Serial.println(isik);
    digitalWrite(role,HIGH);
  }
}
