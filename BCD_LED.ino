void setup() 
{
    DDRD = 0xFF;

}

void loop() 
{
    uint8_t i = 0;
    
    for(uint8_t i=0; i<=99;i++)
    {
      bcd(i);
      delay(250);
    }
    
    blinken();
    
    for(uint8_t i=99; i<=0;i--)
    {
      bcd(i);
      delay(250);
    }    
}

void bcd(uint8_t zahl)
{
    uint8_t est, zst;
    zst=zahl%10;
    est=zahl/10;
    zst<<4;
    PORTD=~(zst+est);
}

void blinken()
{
   for(uint8_t i=0; i<20; i++)
   {
    PORTD=0xFF;
    delay(100);
    PORTD=0x00;
    delay(100);
   }
}
