//#include <linux/module.h>	/* Needed by all modules */
//#include <linux/kernel.h>	/* Needed for KERN_INFO */

#define RTC_UCOUNT	0x40024000

int main(int argc, char const *argv[])
{
	int* upcount = RTC_UCOUNT;

	while(1)
	{
		printf("%d\n", *upcount);
		if(getchar() == 'x')
			break;
	}

	/* code */
	return 0;
}