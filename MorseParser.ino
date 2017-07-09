int buttonIn = 2;
int ledOut = 7;
int redLedOut = 8;
int val;
String message = "Hello World"; //Change this to make new message.

void setup() {
  // put your setup code here, to run once:
  pinMode(buttonIn, INPUT);
  digitalWrite(buttonIn, HIGH); //Use pullout to eliminate noise
  pinMode(ledOut, OUTPUT);
  pinMode(redLedOut, OUTPUT);
  digitalWrite(redLedOut, HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  val = digitalRead(buttonIn);
  if (val == LOW){
    playMessage(message);
  }
}

void playMessage(String msg){
  message.toLowerCase();
  int len = message.length();
  int i;
  digitalWrite(redLedOut, LOW);
  delay(2000);
  for (i = 0; i < len; i++){
    playChar(message.charAt(i));
  }
  digitalWrite(redLedOut, HIGH);
}

void dot(){
  digitalWrite(ledOut, HIGH);
  delay(333);
  digitalWrite(ledOut, LOW);
  delay(540);
}

void dash(){
  digitalWrite(ledOut, HIGH);
  delay(1500);
  digitalWrite(ledOut, LOW);
  delay(540);
}

void playChar(char c){
  switch(c){
    case 'a':
      dot();
      dash();
      break;
    case 'b':
      dash();
      dot();
      dot();
      dot();
      break;
    case 'c':
      dash();
      dot();
      dash();
      dot();
      break;
    case 'd':
      dash();
      dot();
      dot();
      break;
    case 'e':
      dot();
      break;
    case 'f':
      dot();
      dot();
      dash();
      dot();
      break;
    case 'g':
      dash();
      dash();
      dot();
      break;
    case 'h':
      dot();
      dot();
      dot();
      dot();
      break;
    case 'i':
      dot();
      dot();
      break;
    case 'j':
      dot();
      dash();
      dash();
      dash();
      break;
    case 'k':
      dash();
      dot();
      dash();
      break;
    case 'l':
      dot();
      dash();
      dot();
      dot();
      break;
    case 'm':
      dash();
      dash();
      break;
    case 'n':
      dash();
      dot();
      break;
    case 'o':
      dash();
      dash();
      dash();
      break;
    case 'p':
      dot();
      dash();
      dash();
      dot();
      break;
    case 'q':
      dash();
      dash();
      dot();
      dash();
      break;
    case 'r':
      dot();
      dash();
      dot();
      break;
    case 's':
      dot();
      dot();
      dot();
      break;
    case 't':
      dash();
      break;
    case 'u':
      dot();
      dot();
      dash();
      break;
    case 'v':
      dot();
      dot();
      dot();
      dash();
      break;
    case 'w':
      dot();
      dash();
      dash();
      break;
    case 'x':
      dash();
      dot();
      dot();
      dash();
      break;
    case 'y':
      dash();
      dot();
      dash();
      dash();
      break;
    case 'z':
      dash();
      dash();
      dot();
      dot();
      break;
    case '0':
      dash();
      dash();
      dash();
      dash();
      dash();
      break;
    case '1':
      dot();
      dash();
      dash();
      dash();
      dash();
      break;
    case '2':
      dot();
      dot();
      dash();
      dash();
      dash();
      break;
    case '3':
      dot();
      dot();
      dot();
      dash();
      dash();
      break;
    case '4':
      dot();
      dot();
      dot();
      dot();
      dash();
      break;
    case '5':
      dot();
      dot();
      dot();
      dot();
      dot();
      break;
    case '6':
      dash();
      dot();
      dot();
      dot();
      dot();
      break;
    case '7':
      dash();
      dash();
      dot();
      dot();
      dot();
      break;
    case '8':
      dash();
      dash();
      dash();
      dot();
      dot();
      break;
     case '9':
      dash();
      dash();
      dash();
      dash();
      dot();
      break;
   default:
      delay(540);
      break;  
  }
  delay(3000);
}
