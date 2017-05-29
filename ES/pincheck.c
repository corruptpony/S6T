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
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 27:
			p.bitNr = 7;
			p.reg = P0_REG;
			break;
		case 49:
			p.bitNr = 8;
			p.reg = P2_REG;
			break;
		case 50:
			p.bitNr = 9;
			p.reg = P2_REG
			break;
		case 51:
			p.bitNr = 10;
			p.reg = P2_REG;
			break;
		case 52:
			p.bitNr = 11;
			p.reg = P2_REG;
			break;
		case 53:
			p.bitNr = 12;
			p.reg = P2_REG;
			break;
		case 24:
			p.bitNr = 5;
			p.reg = P3_REG;
			break;

	}
	return p;
}

Pinfo checkConnectorJ2(int pinNumber)
{
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 11:
			p.bitNr = 2;
			p.reg = P0_REG;
			break;
		case 12:
			p.bitNr = 3;
			p.reg = P0_REG;
			break;
		case 13:
			p.bitNr = 4;
			p.reg = P0_REG;
			break;
		case 14:
			p.bitNr = 4;
			p.reg = P0_REG;
			break;
		case 24:
			p.bitNr = 1;
			p.reg = P0_REG;
			break;
	}
	return p;
}

Pinfo checkConnectorJ3(int pinNumber)
{
	Pinfo p = {-1, 0x0};
	
	switch(pinNumber)
	{
		case 40:
			p.bitNr = 0;
			p.reg = P0_REG;
			break;
		case 33:
			p.bitNr = 6;
			p.reg = P0_REG;
			break;
	}
	return p;
}