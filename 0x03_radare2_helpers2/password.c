#include <stdio.h>
#include <string.h>

/**
 * Pobiera haslo z klawiatury i porownuje z zapisana na stale
 * wartoscia.
 *
 * UWAGA: Zawiera bledy bezpieczenstwa. Do wykorzystania wylacznie
 *        w celach edukacyjnych.
 */
int
check_pass(){
  char buff[80];
  scanf("%s", buff); // WARNING: security vulnerability: buffer overflow

  if( strcmp(buff, "hi") == 0 )
    return 1;
  else
    return 0;
};



int
main(int argc, char* argv[]){
  if( argc < 2 || strcmp(argv[1], "auth") != 0 ){
    printf("USAGE: %s auth\n", argv[0]);
    return 0;
  }

  printf("Enter Password:\n");
  if( check_pass() )
    printf("Access granted! Welcome!\n");
  else
    printf("ACCESS DENIED\n");
  return 0;
}
