#include <linux/mysyscall.h>



int phase2switchflag = 0;

    asmlinkage int  sys_mysyscall(){
        if(phase2switchflag == 0){
            phase2switchflag = 1;
             return phase2switchflag;
        }
        
        else {
            phase2switchflag = 0;
             return phase2switchflag;
        }
}
        
        
       
   
