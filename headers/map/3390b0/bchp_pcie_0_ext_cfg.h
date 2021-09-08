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
 * Date:           Generated on               Wed Jun 10 03:09:40 2015
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

#ifndef BCHP_PCIE_0_EXT_CFG_H__
#define BCHP_PCIE_0_EXT_CFG_H__

/***************************************************************************
 *PCIE_0_EXT_CFG - PCIE EXTERNAL CFG Registers
 ***************************************************************************/
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_0  0x21088000 /* [RW] PCIe External Configuration Space Data[0] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_1023 0x21088ffc /* [RW] PCIe External Configuration Space Data[1023] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX   0x21089000 /* [RW] PCIE External Configuration Access Index */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA    0x21089004 /* [RW] PCIE External Configuration Access Data */
#define BCHP_PCIE_0_EXT_CFG_SCRATCH              0x21089008 /* [RW] Scratch Register */

/***************************************************************************
 *PCIE_EXT_CFG_DATA_0 - PCIe External Configuration Space Data[0]
 ***************************************************************************/
/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_DATA_0 :: DATA [31:00] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_0_DATA_MASK          0xffffffff
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_0_DATA_SHIFT         0

/***************************************************************************
 *PCIE_EXT_CFG_DATA_1023 - PCIe External Configuration Space Data[1023]
 ***************************************************************************/
/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_DATA_1023 :: DATA [31:00] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_1023_DATA_MASK       0xffffffff
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_1023_DATA_SHIFT      0

/***************************************************************************
 *PCIE_EXT_CFG_INDEX - PCIE External Configuration Access Index
 ***************************************************************************/
/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: UNUSED_1 [31:28] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_1_MASK       0xf0000000
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_1_SHIFT      28
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_1_DEFAULT    0x00000000

/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: BUS_NUM [27:20] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_BUS_NUM_MASK        0x0ff00000
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_BUS_NUM_SHIFT       20
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_BUS_NUM_DEFAULT     0x00000000

/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: DEV_NUM [19:15] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_DEV_NUM_MASK        0x000f8000
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_DEV_NUM_SHIFT       15
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_DEV_NUM_DEFAULT     0x00000000

/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: FUNC_NUM [14:12] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_FUNC_NUM_MASK       0x00007000
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_FUNC_NUM_SHIFT      12
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_FUNC_NUM_DEFAULT    0x00000000

/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: REG_NUM [11:02] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_REG_NUM_MASK        0x00000ffc
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_REG_NUM_SHIFT       2
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_REG_NUM_DEFAULT     0x00000000

/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_INDEX :: UNUSED_0 [01:00] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_0_MASK       0x00000003
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_0_SHIFT      0
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_INDEX_UNUSED_0_DEFAULT    0x00000000

/***************************************************************************
 *PCIE_EXT_CFG_DATA - PCIE External Configuration Access Data
 ***************************************************************************/
/* PCIE_0_EXT_CFG :: PCIE_EXT_CFG_DATA :: DATA [31:00] */
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_DATA_MASK            0xffffffff
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_DATA_SHIFT           0
#define BCHP_PCIE_0_EXT_CFG_PCIE_EXT_CFG_DATA_DATA_DEFAULT         0x00000000

/***************************************************************************
 *SCRATCH - Scratch Register
 ***************************************************************************/
/* PCIE_0_EXT_CFG :: SCRATCH :: DATA [31:00] */
#define BCHP_PCIE_0_EXT_CFG_SCRATCH_DATA_MASK                      0xffffffff
#define BCHP_PCIE_0_EXT_CFG_SCRATCH_DATA_SHIFT                     0
#define BCHP_PCIE_0_EXT_CFG_SCRATCH_DATA_DEFAULT                   0x00000000

#endif /* #ifndef BCHP_PCIE_0_EXT_CFG_H__ */

/* End of File */
