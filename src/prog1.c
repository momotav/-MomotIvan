#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>

int main() 
{
   int16_t   _aAAAAAA, _bBBBBBB, _xXXXXXX, _yYYYYYY;
   printf("Enter _aAAAAAA:");
   scanf("%hd", &_aAAAAAA);
   printf("Enter _bBBBBBB:");
   scanf("%hd", &_bBBBBBB);
   printf("%d\n", _aAAAAAA + _bBBBBBB);
   printf("%d\n", _aAAAAAA - _bBBBBBB);
   printf("%d\n", _aAAAAAA * _bBBBBBB);
   printf("%d\n", _aAAAAAA / _bBBBBBB);
   printf("%d\n", _aAAAAAA % _bBBBBBB);
   _xXXXXXX = (_aAAAAAA - _bBBBBBB) * 10 + (_aAAAAAA + _bBBBBBB) / 10;
   _yYYYYYY = _xXXXXXX + (_xXXXXXX % 10);
   printf("%d\n", _xXXXXXX);
   printf("%d\n", _yYYYYYY);
   system("pause");
    return 0;
}
