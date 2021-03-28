#include <stdio.h>

const unsigned char CRC7_POLY               = 0x91;
unsigned char CRCTable[256];

int result;

unsigned char GetCRC(unsigned char val)
{
    unsigned char j;

    for (j = 0; j < 8; j++)
    {
        if (val & 1)
            val ^= CRC7_POLY;
        val >>= 1;
    }

    return val;
}

void GenerateCRCTable()
{
    int i, j;

    // generate a table value for all 256 possible byte values
    for (i = 0; i < 256; i++)
    {
        CRCTable[i] = GetCRC(i);
    }
}

unsigned char CRC(unsigned char message[], unsigned char length)
{
    unsigned char i, crc = 0;

    for (i = 0; i < length; i++)
        crc = CRCTable[crc ^ message[i]];
    return crc;
}

int get_crc7(int param0, int param1)
{
  unsigned char message[2] = {param0, param1};

  GenerateCRCTable();
  result = CRC(message, 2);
  return result;
}

int main() {
  return 0;
}