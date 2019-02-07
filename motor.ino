void motor_open() {
  pinMode(PIN_DIR_L, OUTPUT);
  pinMode(PIN_PWM_L, OUTPUT);
  pinMode(PIN_DIR_R, OUTPUT);
  pinMode(PIN_PWM_R, OUTPUT);
  analogWrite(PIN_PWM_L, 0);
  analogWrite(PIN_PWM_R, 0);
  
  
  pinMode(PIN_DIR_NECK, OUTPUT);
  pinMode(PIN_PWM_NECK, OUTPUT);
  analogWrite(PIN_PWM_NECK, 0);
}

void motor_set(int pwm_l, int pwm_r) {
  // モータ回転方向の補正
  pwm_l *= -1;
  //pwm_r *= -1;

  if (pwm_l >  255) pwm_l =  255;
  if (pwm_l < -255) pwm_l = -255;
  if (pwm_r >  255) pwm_r =  255;
  if (pwm_r < -255) pwm_r = -255;

  if (pwm_l > 0) {
    digitalWrite(PIN_DIR_L, HIGH);
    analogWrite(PIN_PWM_L, pwm_l);
  } else {
    digitalWrite(PIN_DIR_L, LOW);
    analogWrite(PIN_PWM_L, -pwm_l);
  }
  if (pwm_r > 0) {
    digitalWrite(PIN_DIR_R, HIGH);
    analogWrite(PIN_PWM_R, pwm_r);
  } else {
    digitalWrite(PIN_DIR_R, LOW);
    analogWrite(PIN_PWM_R, -pwm_r);
  }
}

void motor_set_neck(int pwm_neck) {

  if (pwm_neck >  255) pwm_neck =  255;
  if (pwm_neck < -255) pwm_neck = -255;

  if (pwm_neck > 0) {
    digitalWrite(PIN_DIR_NECK, HIGH);
    analogWrite(PIN_PWM_NECK, pwm_neck);
  } else {
    digitalWrite(PIN_DIR_NECK, LOW);
    analogWrite(PIN_PWM_NECK, -pwm_neck);
  }
}
