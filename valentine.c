          #define zz            else/*<3*/
       #define p( str )      write(1, str, 1)
     void            s(){  p  (             " ")
    ; }    void h()    {p("#"    );}int a    =79;
   int   b=20;int x[]   ={10   ,10,12,10,10   ,7,
  16,   6,16,7,5,4,12,   4,   2,4,12,4,5,4,3   ,4,
  8,4   ,6,4,8,4,3,4,3,      3,3,12,3,4,3,12   ,3,
 3,3   ,2,3,3,14,3,2 ,3,    14,3,3,2,2,3,3,15   ,6,
 15,   3,3,2,1, 3,3,17,4,  17,3,3,1,1,3,3,18,   2 ,
 18,   3,3,1};int main(){int y[]={1,2,2,3,4,5   ,6,
  8,9   ,11,12,14,15,17,18,19,21,22,24,25} ;   int
  i=0   ;int c=0;for(;i<a;){int j=0;for(;j <   52;
   ) {   int k=0;while(k<x[i]){j++;k++;if(!   c){
    s()   ;}zz{h();}}i++; c=!c;}p("\n");c=   0;}
     for   (int ib=0;ib<b;ib++){int jb=0;   for
      ( ;   jb<52;){int st=y[ib];if(st >   jb)
        {s(   );}zz if(jb<st+3&&jb<26)   {h(
         );}   else if(26>jb&&jb<st+   6){
           s()   ;} else if(jb<26){   h()
            ; }   else if(jb<46-st   ){h
              ();   }zz if(jb<49   -st
               ){s   ();}zz if(   jb<
                 52-   st){h()   ; }
                  zz{   s() ;   }jb
                   ++;   }p   (//
                    "\n"     );}
                      /*<3<3*/
                        } //
                         //
