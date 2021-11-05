void main() {
int y;
ANSELD = 0;                   //configure a pin as a digital output,
TRISD=0;                       //  CONFIGURE PORT AS OUTPUT

ANSELA=0b11111111;           //configure a pin as a digital output FOR 8-BITS =
TRISA=0xff;            //identified bits will turn on
UART1_Init(9600);             // baud rate
while(1)
    {
    y=ADC_read(1);           //read analog to digital output
    if(y <= 100){                //if pot; resistance less than or=100
    PORTD= 0X0F;                    //TURN ON FIRST 4 BITS
    UART1_write_Text("y<100");            //WRITE IF() ON UART
    UART1_write(13);                        //WRITE IF() ON EACH LINE
    UART1_write(10);}
    else
    {                                          //if pot; resistance GRATER than100
    PORTD=0xF0;                                   //TURN ON LAST 4 BITS
    UART1_write_Text("y>=100");                    //WRITE IF() ON UART
    UART1_write(13);                                 //WRITE IF() ON EACH LINE
    UART1_write(10);
    }
    }

    }