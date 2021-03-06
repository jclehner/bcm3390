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
 * Date:           Generated on               Wed Jun 10 03:09:32 2015
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

#ifndef BCHP_HIF_SPI_INTR2_H__
#define BCHP_HIF_SPI_INTR2_H__

/***************************************************************************
 *HIF_SPI_INTR2 - HIF Level 2 Interrupt Controller Registers for SPI
 ***************************************************************************/
#define BCHP_HIF_SPI_INTR2_CPU_STATUS            0x204a1a00 /* [RO] CPU interrupt Status Register */
#define BCHP_HIF_SPI_INTR2_CPU_SET               0x204a1a04 /* [WO] CPU interrupt Set Register */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR             0x204a1a08 /* [WO] CPU interrupt Clear Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS       0x204a1a0c /* [RO] CPU interrupt Mask Status Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET          0x204a1a10 /* [WO] CPU interrupt Mask Set Register */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR        0x204a1a14 /* [WO] CPU interrupt Mask Clear Register */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS            0x204a1a18 /* [RO] PCI interrupt Status Register */
#define BCHP_HIF_SPI_INTR2_PCI_SET               0x204a1a1c /* [WO] PCI interrupt Set Register */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR             0x204a1a20 /* [WO] PCI interrupt Clear Register */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS       0x204a1a24 /* [RO] PCI interrupt Mask Status Register */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET          0x204a1a28 /* [WO] PCI interrupt Mask Set Register */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR        0x204a1a2c /* [WO] PCI interrupt Mask Clear Register */

/***************************************************************************
 *CPU_STATUS - CPU interrupt Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_reserved0_MASK               0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_reserved0_SHIFT              7

/* HIF_SPI_INTR2 :: CPU_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_HALTED_MASK             0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_HALTED_SHIFT            6
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_HALTED_DEFAULT          0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_DONE_MASK               0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_DONE_SHIFT              5
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_MSPI_DONE_DEFAULT            0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_OVERREAD_MASK         0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_OVERREAD_SHIFT        4
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_OVERREAD_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_DONE_MASK     0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_DONE_SHIFT    3
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_DONE_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_IMPATIENT_MASK        0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_IMPATIENT_SHIFT       2
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_IMPATIENT_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_ABORTED_MASK  0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_CPU_STATUS_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *CPU_SET - CPU interrupt Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_reserved0_MASK                  0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_SET_reserved0_SHIFT                 7

/* HIF_SPI_INTR2 :: CPU_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_HALTED_MASK                0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_HALTED_SHIFT               6
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_HALTED_DEFAULT             0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_DONE_MASK                  0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_DONE_SHIFT                 5
#define BCHP_HIF_SPI_INTR2_CPU_SET_MSPI_DONE_DEFAULT               0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_OVERREAD_MASK            0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_OVERREAD_SHIFT           4
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_OVERREAD_DEFAULT         0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_DONE_MASK        0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_DONE_SHIFT       3
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_DONE_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_IMPATIENT_MASK           0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_IMPATIENT_SHIFT          2
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_IMPATIENT_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_ABORTED_MASK     0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_ABORTED_SHIFT    1
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_SESSION_ABORTED_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: CPU_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_FULLNESS_REACHED_MASK    0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_FULLNESS_REACHED_SHIFT   0
#define BCHP_HIF_SPI_INTR2_CPU_SET_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *CPU_CLEAR - CPU interrupt Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_reserved0_MASK                0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_reserved0_SHIFT               7

/* HIF_SPI_INTR2 :: CPU_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_HALTED_MASK              0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_HALTED_SHIFT             6
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_HALTED_DEFAULT           0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_DONE_MASK                0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_DONE_SHIFT               5
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_MSPI_DONE_DEFAULT             0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_OVERREAD_MASK          0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_OVERREAD_SHIFT         4
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_OVERREAD_DEFAULT       0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_DONE_MASK      0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_DONE_SHIFT     3
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_DONE_DEFAULT   0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_IMPATIENT_MASK         0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_IMPATIENT_SHIFT        2
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_IMPATIENT_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_ABORTED_MASK   0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT  1
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_FULLNESS_REACHED_MASK  0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_CPU_CLEAR_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *CPU_MASK_STATUS - CPU interrupt Mask Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_reserved0_MASK          0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_reserved0_SHIFT         7

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_HALTED_MASK        0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_HALTED_SHIFT       6
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_HALTED_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_DONE_MASK          0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_DONE_SHIFT         5
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_MSPI_DONE_DEFAULT       0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_OVERREAD_MASK    0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_OVERREAD_SHIFT   4
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_OVERREAD_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_DONE_SHIFT 3
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_IMPATIENT_MASK   0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_IMPATIENT_SHIFT  2
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_IMPATIENT_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_CPU_MASK_STATUS_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *CPU_MASK_SET - CPU interrupt Mask Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_reserved0_MASK             0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_reserved0_SHIFT            7

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_HALTED_MASK           0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_HALTED_SHIFT          6
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_HALTED_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_DONE_MASK             0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_DONE_SHIFT            5
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_MSPI_DONE_DEFAULT          0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_OVERREAD_MASK       0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_OVERREAD_SHIFT      4
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_OVERREAD_DEFAULT    0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_DONE_MASK   0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_DONE_SHIFT  3
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_IMPATIENT_MASK      0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_IMPATIENT_SHIFT     2
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_IMPATIENT_DEFAULT   0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_CPU_MASK_SET_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *CPU_MASK_CLEAR - CPU interrupt Mask Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_reserved0_MASK           0xffffff80
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_reserved0_SHIFT          7

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_HALTED_MASK         0x00000040
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_HALTED_SHIFT        6
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_HALTED_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_DONE_MASK           0x00000020
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_DONE_SHIFT          5
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_MSPI_DONE_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_OVERREAD_MASK     0x00000010
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_OVERREAD_SHIFT    4
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_OVERREAD_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_DONE_SHIFT 3
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_IMPATIENT_MASK    0x00000004
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_IMPATIENT_SHIFT   2
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_IMPATIENT_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: CPU_MASK_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_CPU_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_STATUS - PCI interrupt Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_reserved0_MASK               0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_reserved0_SHIFT              7

/* HIF_SPI_INTR2 :: PCI_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_HALTED_MASK             0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_HALTED_SHIFT            6
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_HALTED_DEFAULT          0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_DONE_MASK               0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_DONE_SHIFT              5
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_MSPI_DONE_DEFAULT            0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_OVERREAD_MASK         0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_OVERREAD_SHIFT        4
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_OVERREAD_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_DONE_MASK     0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_DONE_SHIFT    3
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_DONE_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_IMPATIENT_MASK        0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_IMPATIENT_SHIFT       2
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_IMPATIENT_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_ABORTED_MASK  0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_PCI_STATUS_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_SET - PCI interrupt Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_reserved0_MASK                  0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_SET_reserved0_SHIFT                 7

/* HIF_SPI_INTR2 :: PCI_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_HALTED_MASK                0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_HALTED_SHIFT               6
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_HALTED_DEFAULT             0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_DONE_MASK                  0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_DONE_SHIFT                 5
#define BCHP_HIF_SPI_INTR2_PCI_SET_MSPI_DONE_DEFAULT               0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_OVERREAD_MASK            0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_OVERREAD_SHIFT           4
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_OVERREAD_DEFAULT         0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_DONE_MASK        0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_DONE_SHIFT       3
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_DONE_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_IMPATIENT_MASK           0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_IMPATIENT_SHIFT          2
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_IMPATIENT_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_ABORTED_MASK     0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_ABORTED_SHIFT    1
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_SESSION_ABORTED_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: PCI_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_FULLNESS_REACHED_MASK    0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_FULLNESS_REACHED_SHIFT   0
#define BCHP_HIF_SPI_INTR2_PCI_SET_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_CLEAR - PCI interrupt Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_reserved0_MASK                0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_reserved0_SHIFT               7

/* HIF_SPI_INTR2 :: PCI_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_HALTED_MASK              0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_HALTED_SHIFT             6
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_HALTED_DEFAULT           0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_DONE_MASK                0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_DONE_SHIFT               5
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_MSPI_DONE_DEFAULT             0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_OVERREAD_MASK          0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_OVERREAD_SHIFT         4
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_OVERREAD_DEFAULT       0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_DONE_MASK      0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_DONE_SHIFT     3
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_DONE_DEFAULT   0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_IMPATIENT_MASK         0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_IMPATIENT_SHIFT        2
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_IMPATIENT_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_ABORTED_MASK   0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT  1
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_FULLNESS_REACHED_MASK  0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_PCI_CLEAR_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_MASK_STATUS - PCI interrupt Mask Status Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_reserved0_MASK          0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_reserved0_SHIFT         7

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_HALTED_MASK        0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_HALTED_SHIFT       6
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_HALTED_DEFAULT     0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_DONE_MASK          0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_DONE_SHIFT         5
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_MSPI_DONE_DEFAULT       0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_OVERREAD_MASK    0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_OVERREAD_SHIFT   4
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_OVERREAD_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_DONE_SHIFT 3
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_IMPATIENT_MASK   0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_IMPATIENT_SHIFT  2
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_IMPATIENT_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_STATUS :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_PCI_MASK_STATUS_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_MASK_SET - PCI interrupt Mask Set Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_MASK_SET :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_reserved0_MASK             0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_reserved0_SHIFT            7

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_HALTED_MASK           0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_HALTED_SHIFT          6
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_HALTED_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_DONE_MASK             0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_DONE_SHIFT            5
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_MSPI_DONE_DEFAULT          0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_OVERREAD_MASK       0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_OVERREAD_SHIFT      4
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_OVERREAD_DEFAULT    0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_DONE_MASK   0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_DONE_SHIFT  3
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_IMPATIENT_MASK      0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_IMPATIENT_SHIFT     2
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_IMPATIENT_DEFAULT   0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_SET :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_PCI_MASK_SET_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

/***************************************************************************
 *PCI_MASK_CLEAR - PCI interrupt Mask Clear Register
 ***************************************************************************/
/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: reserved0 [31:07] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_reserved0_MASK           0xffffff80
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_reserved0_SHIFT          7

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: MSPI_HALTED [06:06] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_HALTED_MASK         0x00000040
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_HALTED_SHIFT        6
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_HALTED_DEFAULT      0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: MSPI_DONE [05:05] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_DONE_MASK           0x00000020
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_DONE_SHIFT          5
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_MSPI_DONE_DEFAULT        0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: SPI_LR_OVERREAD [04:04] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_OVERREAD_MASK     0x00000010
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_OVERREAD_SHIFT    4
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_OVERREAD_DEFAULT  0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: SPI_LR_SESSION_DONE [03:03] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_DONE_MASK 0x00000008
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_DONE_SHIFT 3
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_DONE_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: SPI_LR_IMPATIENT [02:02] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_IMPATIENT_MASK    0x00000004
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_IMPATIENT_SHIFT   2
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_IMPATIENT_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: SPI_LR_SESSION_ABORTED [01:01] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_ABORTED_MASK 0x00000002
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_ABORTED_SHIFT 1
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_SESSION_ABORTED_DEFAULT 0x00000000

/* HIF_SPI_INTR2 :: PCI_MASK_CLEAR :: SPI_LR_FULLNESS_REACHED [00:00] */
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_MASK 0x00000001
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_SHIFT 0
#define BCHP_HIF_SPI_INTR2_PCI_MASK_CLEAR_SPI_LR_FULLNESS_REACHED_DEFAULT 0x00000000

#endif /* #ifndef BCHP_HIF_SPI_INTR2_H__ */

/* End of File */
