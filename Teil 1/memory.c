/* memory.c */
int global;     // bss
int not;        // bss
	
int main(void)
{
   int a = 10;        // stack
   static int b = 20; // data
   return 0;
}
