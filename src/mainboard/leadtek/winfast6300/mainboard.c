#include <printk.h>

void
mainboard_fixup(void)
{
}

void
final_mainboard_fixup(void)
{
    void final_southbridge_fixup(void);
    void final_superio_fixup(void);

    printk(KERN_INFO 
	   "Winfast 6300 (and similar)...");

    final_southbridge_fixup();
    final_superio_fixup();
}
