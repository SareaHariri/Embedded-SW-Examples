/**
 * @file main.c
 * @author Sarea Alhariri (Sarea.h95@outlook.com)
 * @brief  Testing alarms task activation and call back features.
 * @version 0.1
 * @date 2020-01-12
 *
 * @copyright Sarea Alhariri - All rights reserved
 *
 */

#include <stdint.h>

static uint32_t src[20] = {0u};
void BufferIncrement(uint32_t* src, uint8_t size);

int main(void)
{
  BufferIncrement(src, 10);
  BufferIncrement(src, 20);
  return 0;
}

void BufferIncrement(uint32_t* src, uint8_t size)
{
  uint8_t index = 0u;
 uint32_t dest[10] = {0u};

  for (index = 0u; index < size; index++)
  {
    dest[index] = src[index] + 1u;
  }
}
