#include<function.h>

int main()
{
 int deposit, wd, res, balance=0;                                                                                                                
 char op;                                                                      
                                                                         
 while(1)                                                                      
 {                                                                              
  printf("\nBanking System");                                                  
  printf("\n................");                                                
  printf("\nD ->Deposit");                                                    
  printf("\nW ->Withdraw");                                                    
  printf("\nB ->Balance");                                                                                                       
  printf("\nQ ->Quit");                                                        
  printf("\nEnter operation: ");                                                
  scanf(" %c", &op);                                                            
  switch(op)                                                                    
  {                                                                            
   case 'D':                                                                    
     printf("\nEnter deposit amount: ");                                        
     scanf("%d", &deposit);                                                    
     res=addmoney(deposit,balance);   
	printf("%d",res);	
     break;                                                                    
   case 'W':                                                                    
     printf("\nEnter withdraw amount: ");                                      
     scanf("%d", &wd);                                                    
      res=withdraw(wd,balance);   
	printf("%d",res);	                                                  
     break;                                                                    
   case 'B':                                                                    
     res=view(balance);         
     printf("%d",res);
     break;                                                                                                                                  
   case 'Q':                                                                    
     return;                                                                    
   default:                                                                    
     printf("Invalid Operation!");                                              
  }                                                                            
 }   
return 0; 
}
