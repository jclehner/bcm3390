/****************************************************************************
 *
 * Broadcom Proprietary and Confidential.
 * (c) 2017 Broadcom. All rights reserved.
 * The term "Broadcom" refers to Broadcom Limited and/or its subsidiaries.
 *
 * Unless you and Broadcom execute a separate written software license
 * agreement governing use of this software, this software is licensed to
 * you under the terms of the GNU General Public License version 2 (the
 * "GPL"), available at [http://www.broadcom.com/licenses/GPLv2.php], with
 * the following added to such license:
 *
 * As a special exception, the copyright holders of this software give you
 * permission to link this software with independent modules, and to copy
 * and distribute the resulting executable under terms of your choice,
 * provided that you also meet, for each linked independent module, the
 * terms and conditions of the license of that module. An independent
 * module is a module which is not derived from this software. The special
 * exception does not apply to any modifications of the software.
 *
 * Notwithstanding the above, under no circumstances may you combine this
 * software in any way with any other Broadcom software provided under a
 * license other than the GPL, without Broadcom's express prior written
 * consent.
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on               Wed Jun 10 03:09:39 2015
 *                 Full Compile MD5 Checksum  e8bde4108283f67d401938287dbb6bde
 *                     (minus title and desc)
 *                 MD5 Checksum               56f0f944fbd407545cd964e7b4e7f7b0
 *
 * Compiled with:  RDB Utility                combo_header.pl
 *                 RDB.pm                     15517
 *                 unknown                    unknown
 *                 Perl Interpreter           5.008008
 *                 Operating System           linux
 *
 *
 ***************************************************************************/

#ifndef BCHP_IRQ1_H__
#define BCHP_IRQ1_H__

/***************************************************************************
 *IRQ1 - Level 2 PCI Interrupt Enable/Status
 ***************************************************************************/
#define BCHP_IRQ1_IRQEN                          0x2040a640 /* [RW] Interrupt Enable */
#define BCHP_IRQ1_IRQSTAT                        0x2040a644 /* [RW] Interrupt Status */

/***************************************************************************
 *IRQEN - Interrupt Enable
 ***************************************************************************/
/* IRQ1 :: IRQEN :: reserved0 [31:10] */
#define BCHP_IRQ1_IRQEN_reserved0_MASK                             0xfffffc00
#define BCHP_IRQ1_IRQEN_reserved0_SHIFT                            10

/* IRQ1 :: IRQEN :: gio_irqen [09:09] */
#define BCHP_IRQ1_IRQEN_gio_irqen_MASK                             0x00000200
#define BCHP_IRQ1_IRQEN_gio_irqen_SHIFT                            9
#define BCHP_IRQ1_IRQEN_gio_irqen_DEFAULT                          0x00000000

/* IRQ1 :: IRQEN :: iice_irqen [08:08] */
#define BCHP_IRQ1_IRQEN_iice_irqen_MASK                            0x00000100
#define BCHP_IRQ1_IRQEN_iice_irqen_SHIFT                           8
#define BCHP_IRQ1_IRQEN_iice_irqen_DEFAULT                         0x00000000

/* IRQ1 :: IRQEN :: iicd_irqen [07:07] */
#define BCHP_IRQ1_IRQEN_iicd_irqen_MASK                            0x00000080
#define BCHP_IRQ1_IRQEN_iicd_irqen_SHIFT                           7
#define BCHP_IRQ1_IRQEN_iicd_irqen_DEFAULT                         0x00000000

/* IRQ1 :: IRQEN :: iica_irqen [06:06] */
#define BCHP_IRQ1_IRQEN_iica_irqen_MASK                            0x00000040
#define BCHP_IRQ1_IRQEN_iica_irqen_SHIFT                           6
#define BCHP_IRQ1_IRQEN_iica_irqen_DEFAULT                         0x00000000

/* IRQ1 :: IRQEN :: uc_irqen [05:05] */
#define BCHP_IRQ1_IRQEN_uc_irqen_MASK                              0x00000020
#define BCHP_IRQ1_IRQEN_uc_irqen_SHIFT                             5
#define BCHP_IRQ1_IRQEN_uc_irqen_DEFAULT                           0x00000000

/* IRQ1 :: IRQEN :: ub_irqen [04:04] */
#define BCHP_IRQ1_IRQEN_ub_irqen_MASK                              0x00000010
#define BCHP_IRQ1_IRQEN_ub_irqen_SHIFT                             4
#define BCHP_IRQ1_IRQEN_ub_irqen_DEFAULT                           0x00000000

/* IRQ1 :: IRQEN :: ua_irqen [03:03] */
#define BCHP_IRQ1_IRQEN_ua_irqen_MASK                              0x00000008
#define BCHP_IRQ1_IRQEN_ua_irqen_SHIFT                             3
#define BCHP_IRQ1_IRQEN_ua_irqen_DEFAULT                           0x00000000

/* IRQ1 :: IRQEN :: uartc_irqen [02:02] */
#define BCHP_IRQ1_IRQEN_uartc_irqen_MASK                           0x00000004
#define BCHP_IRQ1_IRQEN_uartc_irqen_SHIFT                          2
#define BCHP_IRQ1_IRQEN_uartc_irqen_DEFAULT                        0x00000000

/* IRQ1 :: IRQEN :: uartb_irqen [01:01] */
#define BCHP_IRQ1_IRQEN_uartb_irqen_MASK                           0x00000002
#define BCHP_IRQ1_IRQEN_uartb_irqen_SHIFT                          1
#define BCHP_IRQ1_IRQEN_uartb_irqen_DEFAULT                        0x00000000

/* IRQ1 :: IRQEN :: uarta_irqen [00:00] */
#define BCHP_IRQ1_IRQEN_uarta_irqen_MASK                           0x00000001
#define BCHP_IRQ1_IRQEN_uarta_irqen_SHIFT                          0
#define BCHP_IRQ1_IRQEN_uarta_irqen_DEFAULT                        0x00000000

/***************************************************************************
 *IRQSTAT - Interrupt Status
 ***************************************************************************/
/* IRQ1 :: IRQSTAT :: reserved0 [31:10] */
#define BCHP_IRQ1_IRQSTAT_reserved0_MASK                           0xfffffc00
#define BCHP_IRQ1_IRQSTAT_reserved0_SHIFT                          10

/* IRQ1 :: IRQSTAT :: gioirq [09:09] */
#define BCHP_IRQ1_IRQSTAT_gioirq_MASK                              0x00000200
#define BCHP_IRQ1_IRQSTAT_gioirq_SHIFT                             9
#define BCHP_IRQ1_IRQSTAT_gioirq_DEFAULT                           0x00000000

/* IRQ1 :: IRQSTAT :: iiceirq [08:08] */
#define BCHP_IRQ1_IRQSTAT_iiceirq_MASK                             0x00000100
#define BCHP_IRQ1_IRQSTAT_iiceirq_SHIFT                            8
#define BCHP_IRQ1_IRQSTAT_iiceirq_DEFAULT                          0x00000000

/* IRQ1 :: IRQSTAT :: iicdirq [07:07] */
#define BCHP_IRQ1_IRQSTAT_iicdirq_MASK                             0x00000080
#define BCHP_IRQ1_IRQSTAT_iicdirq_SHIFT                            7
#define BCHP_IRQ1_IRQSTAT_iicdirq_DEFAULT                          0x00000000

/* IRQ1 :: IRQSTAT :: iicairq [06:06] */
#define BCHP_IRQ1_IRQSTAT_iicairq_MASK                             0x00000040
#define BCHP_IRQ1_IRQSTAT_iicairq_SHIFT                            6
#define BCHP_IRQ1_IRQSTAT_iicairq_DEFAULT                          0x00000000

/* IRQ1 :: IRQSTAT :: ucirq [05:05] */
#define BCHP_IRQ1_IRQSTAT_ucirq_MASK                               0x00000020
#define BCHP_IRQ1_IRQSTAT_ucirq_SHIFT                              5
#define BCHP_IRQ1_IRQSTAT_ucirq_DEFAULT                            0x00000000

/* IRQ1 :: IRQSTAT :: ubirq [04:04] */
#define BCHP_IRQ1_IRQSTAT_ubirq_MASK                               0x00000010
#define BCHP_IRQ1_IRQSTAT_ubirq_SHIFT                              4
#define BCHP_IRQ1_IRQSTAT_ubirq_DEFAULT                            0x00000000

/* IRQ1 :: IRQSTAT :: uairq [03:03] */
#define BCHP_IRQ1_IRQSTAT_uairq_MASK                               0x00000008
#define BCHP_IRQ1_IRQSTAT_uairq_SHIFT                              3
#define BCHP_IRQ1_IRQSTAT_uairq_DEFAULT                            0x00000000

/* IRQ1 :: IRQSTAT :: uartc_irq [02:02] */
#define BCHP_IRQ1_IRQSTAT_uartc_irq_MASK                           0x00000004
#define BCHP_IRQ1_IRQSTAT_uartc_irq_SHIFT                          2
#define BCHP_IRQ1_IRQSTAT_uartc_irq_DEFAULT                        0x00000000

/* IRQ1 :: IRQSTAT :: uartb_irq [01:01] */
#define BCHP_IRQ1_IRQSTAT_uartb_irq_MASK                           0x00000002
#define BCHP_IRQ1_IRQSTAT_uartb_irq_SHIFT                          1
#define BCHP_IRQ1_IRQSTAT_uartb_irq_DEFAULT                        0x00000000

/* IRQ1 :: IRQSTAT :: uarta_irq [00:00] */
#define BCHP_IRQ1_IRQSTAT_uarta_irq_MASK                           0x00000001
#define BCHP_IRQ1_IRQSTAT_uarta_irq_SHIFT                          0
#define BCHP_IRQ1_IRQSTAT_uarta_irq_DEFAULT                        0x00000000

#endif /* #ifndef BCHP_IRQ1_H__ */

/* End of File */
