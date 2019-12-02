#define CR 13 // carriage return char
#define LF 10 // linefeed char


void UART_init(void);
signed int UART_printf(size_t length, const char *pFormat, ...);
void UART_INT_init(void);
void UART_putchar(char c);
void UART_puts(char *s);
void UART_putnum(unsigned int num, unsigned char deel);
void UART_putint(unsigned int num);
char UART_get(void);
void UART_gets(char *s, int echo);

void UART3_init(void);
void UART3_puts(char *s);
void UART3_putchar(char c);
void UART3_putnum(unsigned int num, unsigned char deel);
void UART3_putint(unsigned int num);
char UART3_get(void);
