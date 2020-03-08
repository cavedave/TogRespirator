
int delaylegnth = 10;
int var = 0;
int var2 = 0;
int var3 = 0;
int inout=0;

void setup() {
  
  //establish motor direction toggle pins
  pinMode(12, OUTPUT); //CH A -- HIGH = forwards and LOW = backwards???
  pinMode(13, OUTPUT); //CH B -- HIGH = forwards and LOW = backwards???
  
  //establish motor brake pins
  pinMode(9, OUTPUT); //brake (disable) CH A
  pinMode(8, OUTPUT); //brake (disable) CH B


  
  
}

void loop(){

//inout++;
//if(inout%2==1){
while (var < 60) {
  // do something repetitive 200 times
  var++;


  digitalWrite(9, LOW);  //ENABLE CH A
  digitalWrite(8, HIGH); //DISABLE CH B

  digitalWrite(12, HIGH);   //Sets direction of CH A
  analogWrite(3, 50);   //Moves CH A
  
  delay(delaylegnth);
  digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B

  digitalWrite(13, LOW);   //Sets direction of CH B
  analogWrite(11, 50);   //Moves CH B
  delay(delaylegnth);
  
  digitalWrite(9, LOW);  //ENABLE CH A
  digitalWrite(8, HIGH); //DISABLE CH B

  digitalWrite(12, LOW);   //Sets direction of CH A
  analogWrite(3, 50);   //Moves CH A
  
  delay(delaylegnth);
    
  digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B

  digitalWrite(13, HIGH);   //Sets direction of CH B
  analogWrite(11, 50);   //Moves CH B
  
  delay(delaylegnth);

//}
inout++;

}


//while (var3 < 100) {
//delay(delaylegnth);
//delay(delaylegnth);
// var3++;
//}

//if(inout%2==0){
  

while (var2 < 60) {
  // do something repetitive 200 times
  var2++;


   digitalWrite(9, LOW);  //ENABLE CH A
  digitalWrite(8, HIGH); //DISABLE CH B

  digitalWrite(12, HIGH);   //Sets direction of CH A
  analogWrite(3, 50);   //Moves CH A
  
  delay(delaylegnth);
   delay(delaylegnth);
  digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B

  digitalWrite(13, HIGH);   //Sets direction of CH B
  analogWrite(11, 50);   //Moves CH B
  
  delay(delaylegnth);
  delay(delaylegnth); 
  digitalWrite(9, LOW);  //ENABLE CH A
  digitalWrite(8, HIGH); //DISABLE CH B

  digitalWrite(12, LOW);   //Sets direction of CH A
  analogWrite(3, 50);   //Moves CH A
  
  delay(delaylegnth);
  delay(delaylegnth);   
  digitalWrite(9, HIGH);  //DISABLE CH A
  digitalWrite(8, LOW); //ENABLE CH B

  digitalWrite(13, LOW);   //Sets direction of CH B
  analogWrite(11, 50);   //Moves CH B
  
  delay(delaylegnth);
  delay(delaylegnth);

}
inout++;
//}


var=0;
var2=0;
var3=0;
}
