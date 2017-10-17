#include "p30f3012.h"

_FOSC(CSW_FSCM_OFF & FRC); // Internal 7.37MHz clock
_FWDT(WDT_OFF); // Watchdog Timer OFF
_FBORPOR(MCLR_DIS & PBOR_OFF & BORV27 & PWRT_4); // Reset Condition
_FGS(CODE_PROT_OFF & GWRP_OFF); // Code protection OFF




void Wait1S(void)
// Just wait for a single second (really?)
{
    int i, j;

    for (i = 0; i < 110; i++) {
     
}
}

void Wait1SA(void)
// Just wait for a single second (really?)
{
    int i, j;

    for (i = 0; i < 150; i++) {


}
}


int main(void) {
    TRISB = 0x0000; // RB7 - RB0 all for output
    LATB = 0x0000; // RB7 - RB0 output '0'
    ADPCFG = 0x00ff; // RB7 - RB0 digital input enabled
    TRISC = 0x0000; // RC13 - RC15 all for output
    LATC = 0x0000; // RC13 - RC15 output '0'
    TRISD = 0x0001; // RD0 for input


    while (1) {


     
            LATCbits.LATC14 = 1;
            Wait1S();
            LATCbits.LATC14 = 1;
            Wait1SA();
            LATCbits.LATC14 = 0;
            LATCbits.LATC14 = 1;
            Wait1S();
            LATCbits.LATC14 = 0;
            Wait1S();


    }
    return 0;
}


