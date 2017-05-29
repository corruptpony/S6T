#define P0_REG 0x40028044
#define P1_REG 0x40028070
#define P2_REG 0x40028010
#define P3_REG 0x40028010

typedef struct PinInfo {
   int bitNr;
   uint32_t reg;
} Pinfo;



Pinfo checkConnectorJ1(int pinNumber)
{
	return new Pinfo{1, P0_REG};
	/*switch(pinNumber)
	{
		case :
			break;
		case :
			break;
		default:
			return false;
	}*/
}

Pinfo checkConnectorJ2(int pinNumber)
{
	return new Pinfo{1, P0_REG};/*
	switch(pinNumber)
	{
		case 15:
			break;
		case :
			break;
		default:
			return false;
	}*/
}

Pinfo checkConnectorJ3(int pinNumber)
{
	return new Pinfo{1, P0_REG};/*
	switch(pinNumber)
	{
		case 11:
			break;
		case 12:
			break;
		case 13:
			break;
		case 14:
			break;
		case 15:
			break;
		case 16:
			break;
		case 17:
			break;
		default:
			return false;
	}*/
}