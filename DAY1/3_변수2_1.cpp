#include <iostream>

// 26page - Áß¿äÇÑ º¯È­.!

int main()
{
	// °¡µ¶¼º Ãø¸é¿¡¼­ ±Â : ¾ÈÁ¤¼º À§Çè
	int n1 = 3.4; // ÀÏ´Ü ½ÇÇàÀº µÊ
	std::cout << n1 << std::endl;

	// ¾ÈÁ¤¼º Ãø¸é¿¡¼­ ±Â
	// prevent narrow : {} ÃÊ±âÈ­ ´Â µ¥ÀÌÅÍ ¼Õ½Ç, ¿À¹ö ÇÃ·Î¿ì´Â ¸ğµÎ ¿¡·¯
	//int n2{ 3.3 }; // error 

	//char c1{ 400 }; // error : 1 byte ¿¡ 500 ´ãÀ» ¼ö ¾øÀ½



}

/*
3_ë³€??_1.cpp: In function 'int main()':
3_ë³€??_1.cpp:10:17: error: narrowing conversion of '3.2999999999999998e+0' from 'double' to 'int' [-Wnarrowing]
   10 |         int n2{ 3.3 };
	  |                 ^~~

3_ë³€??_1.cpp:12:18: error: narrowing conversion of '400' from 'int' to 'char' [-Wnarrowing]
   12 |         char c1{ 400 };
	  |                  ^~~
K

C:\DAY1>
*/

