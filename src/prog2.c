#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _aAAAAAA, _bBBBBBB, _cCCCCCC;
   printf("Enter _aAAAAAA:");
   scanf("%hd", &_aAAAAAA);
   printf("Enter _bBBBBBB:");
   scanf("%hd", &_bBBBBBB);
   printf("Enter _cCCCCCC:");
   scanf("%hd", &_cCCCCCC);
   if ((_aAAAAAA > _bBBBBBB))
   {
   if ((_aAAAAAA > _cCCCCCC))
   {
   goto aBIGGER;
   }
   else
   {
   printf("%d\n", _cCCCCCC);
   goto oUTOFIF;
aBIGGER:
   printf("%d\n", _aAAAAAA);
   goto oUTOFIF;
   }
   }
   if ((_bBBBBBB < _cCCCCCC))
   {
   printf("%d\n", _cCCCCCC);
   }
   else
   {
   printf("%d\n", _bBBBBBB);
   }
oUTOFIF:
   if (((_aAAAAAA == _bBBBBBB) && (_aAAAAAA == _cCCCCCC) && (_bBBBBBB == _cCCCCCC)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if (((_aAAAAAA < 0) || (_bBBBBBB < 0) || (_cCCCCCC < 0)))
   {
   printf("%d\n", 1);
   }
   else
   {
   printf("%d\n", 0);
   }
   if ((!(_aAAAAAA < (_bBBBBBB + _cCCCCCC))))
   {
   printf("%d\n", (10));
   }
   else
   {
   printf("%d\n", (0));
   }
   system("pause");
    return 0;
}
