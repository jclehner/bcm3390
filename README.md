BCM3390
=======

The chipset itself uses a 1849-lead BGA package (43x43, pad size 0.4mm, pitch 0.8mm). Some intersting pins are shown below (pins are named `A1` to `BC43`).

###### UARTs

 | Name           | Address      | RX pin | TX pin | Function                  |
 |----------------|--------------|--------|--------|---------------------------|
 | UARTA          | `0x2040a900` | `AG5`  | `AH4`  | ARM boot console          |
 | UART0_PER      | `0x03c00640` | `T39`  | `T40`  | CM firmware console       |

 ###### SPI NOR flash

 * SCLK: `AE3`
 * HOLD#: `AD2`
 * WP#: `AC2`
 * CS#: `AC6`
 * MISO: `AD3`
 * MOSI: `AE2`
