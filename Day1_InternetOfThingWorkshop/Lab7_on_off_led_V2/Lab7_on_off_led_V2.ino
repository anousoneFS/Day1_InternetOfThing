#define button 7
#define led 2

int num = 0;
bool btnState = LOW;
bool State = 0;

void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  pinMode(button, INPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(button);
 
 while(btnState == LOW){
  
    while(btnState == LOW){
       btnState = digitalRead(button);
    }  

    State = !State;
    digitalWrite(led, State);  
 }

//  while(btnState == LOW){
//    while(btnState == LOW){
//       btnState = digitalRead(button);
//    }  
//   
//    num++;
//    Serial.print("num = ");
//    Serial.println(num);
// }
//
//  if(num % 2 == 0){
//    digitalWrite(led, HIGH);
//  }else{
//    digitalWrite(led, LOW);
//  }
}
