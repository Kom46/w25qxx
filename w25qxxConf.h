#ifndef _W25QXXCONFIG_H
#define _W25QXXCONFIG_H

#define _W25QXX_SPI                   hspi1
#define _W25QXX_CS_GPIO               FLASH_CS_GPIO_Port
#define _W25QXX_CS_PIN                FLASH_CS_Pin
// must be in makefile
#ifndef _W25QXX_USE_FREERTOS
#define _W25QXX_USE_FREERTOS          1
#endif

#ifndef _W25QXX_DEBUG
#define _W25QXX_DEBUG                 0
#endif

#endif
