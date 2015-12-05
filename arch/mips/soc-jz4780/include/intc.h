#ifndef	_SOC_INTC_H_
#define	_SOC_INTC_H_

#define	INTC_BASE	0x10001000
#define	INTC_SIZE	0x00000100

#define	INTC_BANK_OFF	      0x20
#define	INTC_ICSR(BANK)		(0x0000 + BANK * INTC_BANK_OFF)
#define	INTC_ICMR(BANK)		(0x0004 + BANK * INTC_BANK_OFF)
#define	INTC_ICMSR(BANK)	(0x0008 + BANK * INTC_BANK_OFF)
#define	INTC_ICMCR(BANK)	(0x000c + BANK * INTC_BANK_OFF)
#define	INTC_ICPR(BANK)		(0x0010 + BANK * INTC_BANK_OFF)


#define	INTC_BANK(IRQ)		(IRQ / 32)
#define	INTC_INDX(IRQ)		(IRQ % 32)
#define	INTC_IRQ(BANK, INDX)	(BANK * 32 + INDX)

#define	INTC_IRQ_TCU2		INTC_IRQ(0, 25)
#define	INTC_IRQ_TCU1		INTC_IRQ(0, 26)
#define	INTC_IRQ_TCU0		INTC_IRQ(0, 27)
#define	INTC_IRQ_RTC		INTC_IRQ(1,  0)

#define	INTC_IRQ_OST		INTC_IRQ_TCU0
#define	INTC_IRQ_TIMER0		INTC_IRQ_TCU2

#endif