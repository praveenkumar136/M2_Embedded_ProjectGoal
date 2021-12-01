#include <Activity1.h>
#include <Activity2.h>
#include <Activity3.h>

int main(void)
{
    uint16_t temp;

    while(1)
    {
        if(Activity1_LED()==1)
        {

            TurnLED_ON();
            temp=Activity2_GetADC();
            Activity3_PWM(temp);


        }
        else
        {
            TurnLED_OFF();
		    _delay_ms(200);
        }

    }
    return 0;
}
