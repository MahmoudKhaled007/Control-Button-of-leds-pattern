const int buttonPin=4;
int buttonState=0;
long randNumber;

void func1();
void func2();
void func3();
void func4();
void func5();
void func6();
void func7();
void func8();
void func9();
void (*functionPtr[])() = {func1,func2,func3,func4,func5,func6,func7,func8,func9};

void setup() {
Serial.begin(9600);

for (int i =7; i<=12;i++){
  pinMode(i,OUTPUT);
  }
  
pinMode(buttonPin,INPUT);
}

void loop() {

long rnd = random(0, 9);
buttonState= digitalRead(buttonPin);

if(buttonState==HIGH){
  
  Serial.println("ON");
  Serial.println(rnd);
  functionPtr[rnd]();
  
  }
  else{
    Serial.println("OFF");
    }


}


void func1(){
for (int i =7; i<=12;i++){
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
  
  }  
  }
void func2(){
for (int i =7; i<=12;i++){
  digitalWrite(i,HIGH);
  digitalWrite(i+1,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  digitalWrite(i+1,LOW);
  delay(500);
  
  }  
  }
  void func3(){
for (int i =7; i<=12;i++){
  digitalWrite(i,HIGH);
  digitalWrite(i+2,HIGH);
  digitalWrite(i+4,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  digitalWrite(i+2,LOW);
  digitalWrite(i+4,LOW);
  delay(500);
  
  }  
  }
  void func4(){
for (int i =7; i<=12;i++){
  for (int j=12; j>=7;j--){
  digitalWrite(i,HIGH);
  digitalWrite(j,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  digitalWrite(j,LOW);
  delay(500);
  }
  }  
  }
  
  void func5(){
    int i=7;
while(i==7){
  digitalWrite(i,HIGH);
  digitalWrite(i+2,HIGH);
  digitalWrite(i+4,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  digitalWrite(i+2,LOW);
  digitalWrite(i+4,LOW);
  delay(500);
  
  } 
  }
  void func6(){
for (int i =12; i>=7;i--){
  digitalWrite(i,HIGH);
  delay(500);
  digitalWrite(i,LOW);
  delay(500);
  
  }  
  }
  
  void func7(){
for (int i =7; i<=12;i++){
  digitalWrite(i,HIGH);
  delay(200);
  digitalWrite(i,LOW);
  delay(200);
 digitalWrite(i+2,HIGH);
  delay(200);
  digitalWrite(i+2,LOW);
  delay(200);
  }  
  }
  void func8(){
for (int i =7; i<=12;i++){
  
  digitalWrite(i,HIGH);
  delay(150);
  digitalWrite(i,LOW);
  delay(150);
  if (i==12){
for (int i =12; i>=7;i--){
  
  digitalWrite(i,HIGH);
  delay(150);
  digitalWrite(i,LOW);
  delay(150); 
}
    
    }
  }  
  }
  void func9(){
for (int i =7; i<=12;i++){
  if(i%2==0){
  digitalWrite(i,HIGH);
  delay(200);
  digitalWrite(i,LOW);
  delay(200);
  }
  }  
  }
  
