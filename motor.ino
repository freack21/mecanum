void maju() {
  digitalWrite(IN11, HIGH);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, HIGH);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, HIGH);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, HIGH);
  digitalWrite(IN42, LOW);
}

void mundur() {
  digitalWrite(IN11, LOW);
  digitalWrite(IN21, HIGH);
  digitalWrite(IN31, LOW);
  digitalWrite(IN41, HIGH);

  digitalWrite(IN12, LOW);
  digitalWrite(IN22, HIGH);
  digitalWrite(IN32, LOW);
  digitalWrite(IN42, HIGH);
}

void kiri() {
  digitalWrite(IN11, LOW);
  digitalWrite(IN21, HIGH);
  digitalWrite(IN31, HIGH);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, LOW);
  digitalWrite(IN22, HIGH);
  digitalWrite(IN32, HIGH);
  digitalWrite(IN42, LOW);
}

void kanan() {
  digitalWrite(IN11, HIGH);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, LOW);
  digitalWrite(IN41, HIGH);

  digitalWrite(IN12, HIGH);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, LOW);
  digitalWrite(IN42, HIGH);
}

void maju_kiri() {
  digitalWrite(IN11, LOW);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, HIGH);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, LOW);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, HIGH);
  digitalWrite(IN42, LOW);
}

void maju_kanan() {
  digitalWrite(IN11, HIGH);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, LOW);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, HIGH);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, LOW);
  digitalWrite(IN42, LOW);
}

void geser_kiri() {
  digitalWrite(IN11, LOW);
  digitalWrite(IN21, HIGH);
  digitalWrite(IN31, HIGH);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, HIGH);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, LOW);
  digitalWrite(IN42, HIGH);
}

void geser_kanan() {
  digitalWrite(IN11, HIGH);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, LOW);
  digitalWrite(IN41, HIGH);

  digitalWrite(IN12, LOW);
  digitalWrite(IN22, HIGH);
  digitalWrite(IN32, HIGH);
  digitalWrite(IN42, LOW);
}

void stop() {
  digitalWrite(IN11, LOW);
  digitalWrite(IN21, LOW);
  digitalWrite(IN31, LOW);
  digitalWrite(IN41, LOW);

  digitalWrite(IN12, LOW);
  digitalWrite(IN22, LOW);
  digitalWrite(IN32, LOW);
  digitalWrite(IN42, LOW);
}
