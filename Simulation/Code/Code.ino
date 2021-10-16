int n_state = 0;
int state = 0;
String data = "";


void setup()
{
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);

}

void loop()
{

  if (Serial.available() > 0)
  {
    data = Serial.readString();
  }
  switch (state) {
    case 0:
      digitalWrite(2, LOW);
      digitalWrite(3, LOW);
      digitalWrite(4, LOW);
      digitalWrite(5, LOW);

      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 1:
      digitalWrite(2, HIGH);
      digitalWrite(5, HIGH);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 2:
      digitalWrite(2, LOW);
      digitalWrite(5, LOW);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 3:
      digitalWrite(3, HIGH);
      digitalWrite(5, HIGH);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 4:
      digitalWrite(3, LOW);
      digitalWrite(5, LOW);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 5:
      digitalWrite(4, HIGH);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 6:
      digitalWrite(4, LOW);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 7:
      digitalWrite(5, HIGH);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    case 8:
      digitalWrite(5, LOW);
      if (data == "turn on TV")
        n_state = 1;
      if (data == "turn off TV")
        n_state = 2;
      if (data == "turn on radio")
        n_state = 3;
      if (data == "turn off radio")
        n_state = 4;
      if (data == "turn on lamp")
        n_state = 5;
      if (data == "turn off lamp")
        n_state = 6;
      if (data == "turn on audio system")
        n_state = 7;
      if (data == "turn off audio system")
        n_state = 8;
      break;
    default:
      break;
  }

  //      if (data=="turn on TV")
  //        digitalWrite(2,HIGH);
  //      if (data=="turn off TV")
  //        digitalWrite(2,LOW);
  //      if (data=="turn on radio")
  //        digitalWrite(3,HIGH);
  //      if (data=="turn off radio")
  //        digitalWrite(3,LOW);
  //      if (data=="turn on lamp")
  //        digitalWrite(4,HIGH);
  //      if (data=="turn off lamp")
  //        digitalWrite(4,LOW);
  state = n_state;

  delay(50);
}
