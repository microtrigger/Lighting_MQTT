void callback_iobroker(String strTopic, String strPayload) {
  
  if (strTopic == "myhome/lighting2/BathRoom_main") { //Ванная основной
      digitalWrite(out[0], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/BathRoom_main", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/BedRoom_main") { //Спальня основной
      digitalWrite(out[1], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/BedRoom_main", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/BedRoom_sec") { //Спальня доп
      digitalWrite(out[2], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/BedRoom_sec", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/Kitchen_main") {
      digitalWrite(out[3], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/Kitchen_main", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/Kitchen_sec") {
      digitalWrite(out[4], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/Kitchen_sec", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/Hall_main") {
      digitalWrite(out[5], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/Hall_main", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/GuestRoom_main") {
      digitalWrite(out[6], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/GuestRoom_main", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/GuestRoom_main2") {
      digitalWrite(out[7], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/GuestRoom_main2", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/GuestRoom_sec") {
      digitalWrite(out[8], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/lighting2/GuestRoom_sec", pub(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/Cupboard") {
    
    if (pub(strPayload) == "false") {
      analogWrite(PWM_1, 255);
     // flag2_Cupboard = 0;
      client.publish("myhome/lighting2/Cupboard", pub(strPayload));
    } else if (pub(strPayload) == "true") {
      for (int i = 255 ; i >= 0; i--) {
        analogWrite(PWM_1, i);
        delay(10); //TODO
      }
    // flag2_Cupboard = 1;
      client.publish("myhome/lighting2/Cupboard", pub(strPayload));
    }
  }
/////////////////////
  else if (strTopic == "myhome/Bathroom/Ventilator") {
      digitalWrite(out[21], SrtToLvl(strPayload));
      //delay(pause);
      client.publish("myhome/Bathroom/Ventilator", pub(strPayload));
   }
///////////////////
  else if (strTopic == "myhome/lighting2/All_OFF") {
    if (strPayload == "true") {
      for (int i = 0 ; i <= 21; i++) {
        if (out[i] != 21){ //myhome/Bathroom/Ventilator
           digitalWrite (out[i], LOW);
        }
      }
      //PubTopic();
      client.publish("myhome/lighting2/All_OFF", "true");
      //posetitel = 0;
      //bathswitch = 0;
    }
  }
//////////////////////
   else if (strTopic == "myhome/lighting2/Lock") {
      if (pub(strPayload) == "true") {
         lock = true;
      } else {
         //posetitel = 1;
         lock = false;
        }
      //delay(pause);
      client.publish("myhome/lighting2/Lock", pub(strPayload));
    }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_1") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_1, pwm);
      client.publish("myhome/lighting2/PWM_1", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_2") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_2, pwm);
      client.publish("myhome/lighting2/PWM_2", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_3") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_3, pwm);
      client.publish("myhome/lighting2/PWM_3", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_4") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_4, pwm);
      client.publish("myhome/lighting2/PWM_4", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_5") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_5, pwm);
      client.publish("myhome/lighting2/PWM_5", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_6") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_6, pwm);
      client.publish("myhome/lighting2/PWM_6", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_7") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_7, pwm);
      client.publish("myhome/lighting2/PWM_7", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_8") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_8, pwm);
      client.publish("myhome/lighting2/PWM_8", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/PWM_9") {
      int pwm = PWM(strPayload);
      analogWrite(PWM_9, pwm);
      client.publish("myhome/lighting2/PWM_9", IntToChar(255 - pwm));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/RGB_1") {
      int R = strPayload.substring(1,strPayload.indexOf('G')).toInt();
      int G = strPayload.substring(strPayload.indexOf('G')+1, strPayload.lastIndexOf('B')).toInt();
      int B = strPayload.substring(strPayload.lastIndexOf('B')+1).toInt();
      analogWrite(PWM_1, 255 - R);
      analogWrite(PWM_2, 255 - G);
      analogWrite(PWM_3, 255 - B);
      client.publish("myhome/lighting2/PWM_1", IntToChar(R));
      client.publish("myhome/lighting2/PWM_2", IntToChar(G));
      client.publish("myhome/lighting2/PWM_3", IntToChar(B));
      client.publish("myhome/lighting2/RGB_1", RGBToChar(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/RGB_2") {
      int R = strPayload.substring(1,strPayload.indexOf('G')).toInt();
      int G = strPayload.substring(strPayload.indexOf('G')+1, strPayload.lastIndexOf('B')).toInt();
      int B = strPayload.substring(strPayload.lastIndexOf('B')+1).toInt();
      analogWrite(PWM_4, 255 - R);
      analogWrite(PWM_5, 255 - G);
      analogWrite(PWM_6, 255 - B);
      client.publish("myhome/lighting2/PWM_4", IntToChar(R));
      client.publish("myhome/lighting2/PWM_5", IntToChar(G));
      client.publish("myhome/lighting2/PWM_6", IntToChar(B));
      client.publish("myhome/lighting2/RGB_2", RGBToChar(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/RGB_3") {
      int R = strPayload.substring(1,strPayload.indexOf('G')).toInt();
      int G = strPayload.substring(strPayload.indexOf('G')+1, strPayload.lastIndexOf('B')).toInt();
      int B = strPayload.substring(strPayload.lastIndexOf('B')+1).toInt();
      analogWrite(PWM_7, 255 - R);
      analogWrite(PWM_8, 255 - G);
      analogWrite(PWM_9, 255 - B);
      client.publish("myhome/lighting2/PWM_7", IntToChar(R));
      client.publish("myhome/lighting2/PWM_8", IntToChar(G));
      client.publish("myhome/lighting2/PWM_9", IntToChar(B));
      client.publish("myhome/lighting2/RGB_3", RGBToChar(strPayload));
  }
//////////////////////////
  else if (strTopic == "myhome/lighting2/Switch_RGB") {
      Serial2.println(strPayload);
  }
}
char* RGBToChar (String str){
    int len = str.length()+1;
    char a[len+25];
    str.toCharArray(a, len+1);
    return a;
}
 
char* IntToCh (int intV) {
  String str = String(intV, DEC);
  int len = str.length() + 1;
  char b[len+2];
  str.toCharArray(b, len);
  return b;
}

char* IntToChar (int intV) {
  String stringVar = String(intV, DEC);
  int len = stringVar.length() + 1;
  char b[len+1];
  stringVar.toCharArray(b, len);
  return b;
}

void Switch(int i){
  switch (i){
    case 0:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BedRoom_main", state_out);
      break;
    case 1:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 2:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 3:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 4:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 5:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 6:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 7:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 8:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 9:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 10:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 11:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 12:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 13:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 14:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
      break;
    case 15:
        InvertOut(out[i]);
        client.publish("myhome/lighting2/BathRoom_main", state_out);
        posetitel = digitalRead(out[i]);
        bathswitch = posetitel;
      break;
    //default:
    
  }
}

bool InvertOut(int pin){
    //delay(10);
    digitalWrite(pin, !digitalRead(pin)); //инвертируем состояние пина
    bool state = digitalRead(pin);
    if (state > 0){
      state_out = "false";
    } else{
      state_out = "true";
    }
    return state_out;
}

int PWM(String p){
  int pwm = p.toInt();
    if (pwm > 255){
      pwm = 255;
    } else if (pwm < 0){
      pwm = 0;
    }
    pwm = 255 - pwm;
    return pwm;
}

void ReadButton (){
  for(int i = 0; i <= 15; i++){
    btn[i] = mcp.digitalRead(bt[i]);
    if (btn[i] != btn_old[i]){
      btn_old[i] = btn[i];
      Switch(i);
    }
  }
  Bath();
}

void Bath(){
  //////////// Ванная //////////
    if (digitalRead(IN_UP7) == 1 && (millis() - prevMillis2 > 3000)) { //Если кто то зашел в ванную то
      prevMillis2 = millis();
      if (bathswitch == 1) {
        posetitel = 0;
        bathswitch = 0;
      }
      posetitel++;
      if (posetitel > 0) {
        //delay(50);
        digitalWrite(out[15], 1);//Включаем свет
        if (posetitel > 5) {
          posetitel = 5;
        }
        //delay(5);
        client.publish("myhome/lighting2/BathRoom_main", "true");
      }
    }
    if (digitalRead(IN_UP8) == 1 && (millis() - prevMillis2 > 3000) && lock == false) { //Если кто то вышел из ванной то
      prevMillis2 = millis();
      posetitel--;
      if (posetitel <= 0) {
        posetitel = 0;
        //delay(50);
        digitalWrite(out[15], 0);//Выключаем свет
        //delay(5);
        client.publish("myhome/lighting2/BathRoom_main", "false");
      }
    }
}

char* pub(String st){
    if (st == "false" || st == "0" || st == "off"){
      return "false";
    } else{
      return "true";
    }
}
bool SrtToLvl(String st){
    if (st == "false" || st == "0" || st == "off"){
      return HIGH;
    } else{
      return LOW;
    }
}


  



