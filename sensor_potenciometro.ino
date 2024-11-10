void setup()
   {
      for (int i = 3; i<14 ; i++)
        pinMode(i, OUTPUT);
   }

void loop()
   {
      int v = analogRead(A5);
      int k = map ( v, 0, 1000, 3 , 13);
      for ( int j=3 ; j < 14 ; j++)
        {
          if (j <= k)
            digitalWrite(j, LOW);
          else
            digitalWrite(j, HIGH);
        }
   }
