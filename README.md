BCM3390
=======

The chipset itself uses a 1849-lead BGA package (43x43, pad size 0.4mm, pitch 0.8mm). Some intersting pins are shown below (pins are named `A1` to `BC43`).

###### UARTs

 | Name           | Address      | RX pin | TX pin | Function                  |
 |----------------|--------------|--------|--------|---------------------------|
 | BCHP_UARTA     | `0x2040a900` | `AG5`  | `AH4`  | ARM boot console          |
 | BCHP_UART0_PER | `0x03c00640` | `T39`  | `T40`  | CM firmware console       |

 ###### SPI NOR flash

 | Name           | Address      | SCLK   | HOLD#  | WP#    | CS#    | MOSI   | MISO   |
 |----------------|--------------|--------|--------|--------|--------|--------|--------|
 | BCHP_HIF_MSPI  | `0x204a3400` | `AE3`  | `AD2`  | `AC2`  | `AC6`  | `AE2`  | `AD3`  |

