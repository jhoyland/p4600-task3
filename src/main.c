#include <stdio.h>
#include <stdlib.h>  

int initialization(void)
{
 
  return 0;
}

int 
setup(void)
{

  return 0;
}

int
loop(void)
{

  return 0;
}

int
cleanup(void)
{
  return 0;
}

  
int  
main(void)  
{  

  int r = 0;
  r = initialization();
  if(!r) r = setup();
  if(!r) r = loop();
  r = cleanup();
  
  return(0);  
}  