String inputString = "";         // a String to hold incoming data
String buff;
bool stringComplete = false;  // whether the string is complete
bool id;
int f,buf;
char x;
void setup() {
  pinMode(2,OUTPUT);
 // initialize serial:
 Serial.begin(9600);
 // reserve 200 bytes for the inputString:
 inputString.reserve(200);
}
void loop() {
 Serial.println(inputString);

 // print the string when a newline arrives:
 if (stringComplete) {
   while (f < 100)
   { if (inputString.substring(f) == "id")
     {
       id = true;
       break;
     } f++;
   }
   if (id == true)
   {
     x = inputString.charAt(f + 4);
   }
   if (x == '4')
   { f = 0;
     while (f < 100)
     { if (inputString.substring(f) == "number")
       { f += 9;
         for (int i = 0; i < 3; i++)
         { if (inputString.charAt(f + i) == '"') i = 3;
           else buff += inputString.charAt(f + i);
         }
         buf = buff.toInt();
         analogWrite(9, buf);
         break;
       }
       f++;
     }
   }
   // clear the string:
   inputString = "";
   stringComplete = false;
 }
}
void serialEvent() {
 while (Serial.available()) {
   // get the new byte:
   char inChar = (char)Serial.read();
   // add it to the inputString:
   inputString += inChar;
   // if the incoming character is a newline, set a flag so the main loop can
   // do something about it:

   if (inChar == '\n') {35
     if (inputString=="Turn red light on"){
      digitalWrite(2,HIGH);
      }
      if (inputString=="Turn red light off"){
      digitalWrite(2,LOW);
      }
     stringComplete = true;
   }
 }
}
