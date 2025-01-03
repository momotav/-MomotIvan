#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _aAAAAAA, _aAAAAA2, _bBBBBBB, _xXXXXXX, _cCCCCC1, _cCCCCC2;
   printf("Enter _aAAAAAA:");
   scanf("%hd", &_aAAAAAA);
   printf("Enter _bBBBBBB:");
   scanf("%hd", &_bBBBBBB);
   for (int16_t  _aAAAAA2 = _aAAAAAA; _aAAAAA2 <= _bBBBBBB; _aAAAAA2++)
   printf("%d\n", _aAAAAA2 * _aAAAAA2);
   for (int16_t  _aAAAAA2 = _bBBBBBB; _aAAAAA2 <= _aAAAAAA; _aAAAAA2++)
   printf("%d\n", _aAAAAA2 * _aAAAAA2);
   _xXXXXXX = 0;
   _cCCCCC1 = 0;
   while (_cCCCCC1 < _aAAAAAA)
   {
   {
   _cCCCCC2 = 0;
   while (_cCCCCC2 < _bBBBBBB)
   {
   {
   _xXXXXXX = _xXXXXXX + 1;
   _cCCCCC2 = _cCCCCC2 + 1;
   }
   }
   _cCCCCC1 = _cCCCCC1 + 1;
   }
   }
   printf("%d\n", _xXXXXXX);
   _xXXXXXX = 0;
   _cCCCCC1 = 1;
   do
   {
   _cCCCCC2 = 1;
   do
   {
   _xXXXXXX = _xXXXXXX + 1;
   _cCCCCC2 = _cCCCCC2 + 1;
   }
   while (!(_cCCCCC2 > _bBBBBBB));
   _cCCCCC1 = _cCCCCC1 + 1;
   }
   while (!(_cCCCCC1 > _aAAAAAA));
   printf("%d\n", _xXXXXXX);
   system("pause");
    return 0;
}
