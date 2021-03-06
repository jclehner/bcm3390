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

#ifndef BCHP_PCIE_0_RGR1_H__
#define BCHP_PCIE_0_RGR1_H__

/***************************************************************************
 *PCIE_0_RGR1 - PCIe RBUS-GISB-RBUS Bridge Registers
 ***************************************************************************/
#define BCHP_PCIE_0_RGR1_REVISION                0x21089200 /* [RO] RGR Bridge Revision */
#define BCHP_PCIE_0_RGR1_CTRL                    0x21089204 /* [RW] RGR Bridge Control Register */
#define BCHP_PCIE_0_RGR1_RBUS_TIMER              0x21089208 /* [RW] RGR Bridge RBUS Timer Register */
#define BCHP_PCIE_0_RGR1_SW_INIT_0               0x2108920c /* [RW] RGR Bridge Software Reset 0 Register */
#define BCHP_PCIE_0_RGR1_SW_INIT_1               0x21089210 /* [RW] RGR Bridge Software Reset 1 Register */

/***************************************************************************
 *REVISION - RGR Bridge Revision
 ***************************************************************************/
/* PCIE_0_RGR1 :: REVISION :: reserved0 [31:16] */
#define BCHP_PCIE_0_RGR1_REVISION_reserved0_MASK                   0xffff0000
#define BCHP_PCIE_0_RGR1_REVISION_reserved0_SHIFT                  16

/* PCIE_0_RGR1 :: REVISION :: MAJOR [15:08] */
#define BCHP_PCIE_0_RGR1_REVISION_MAJOR_MASK                       0x0000ff00
#define BCHP_PCIE_0_RGR1_REVISION_MAJOR_SHIFT                      8
#define BCHP_PCIE_0_RGR1_REVISION_MAJOR_DEFAULT                    0x00000002

/* PCIE_0_RGR1 :: REVISION :: MINOR [07:00] */
#define BCHP_PCIE_0_RGR1_REVISION_MINOR_MASK                       0x000000ff
#define BCHP_PCIE_0_RGR1_REVISION_MINOR_SHIFT                      0
#define BCHP_PCIE_0_RGR1_REVISION_MINOR_DEFAULT                    0x00000000

/***************************************************************************
 *CTRL - RGR Bridge Control Register
 ***************************************************************************/
/* PCIE_0_RGR1 :: CTRL :: reserved0 [31:02] */
#define BCHP_PCIE_0_RGR1_CTRL_reserved0_MASK                       0xfffffffc
#define BCHP_PCIE_0_RGR1_CTRL_reserved0_SHIFT                      2

/* PCIE_0_RGR1 :: CTRL :: rbus_error_intr [01:01] */
#define BCHP_PCIE_0_RGR1_CTRL_rbus_error_intr_MASK                 0x00000002
#define BCHP_PCIE_0_RGR1_CTRL_rbus_error_intr_SHIFT                1
#define BCHP_PCIE_0_RGR1_CTRL_rbus_error_intr_DEFAULT              0x00000000
#define BCHP_PCIE_0_RGR1_CTRL_rbus_error_intr_INTR_DISABLE         0
#define BCHP_PCIE_0_RGR1_CTRL_rbus_error_intr_INTR_ENABLE          1

/* PCIE_0_RGR1 :: CTRL :: gisb_error_intr [00:00] */
#define BCHP_PCIE_0_RGR1_CTRL_gisb_error_intr_MASK                 0x00000001
#define BCHP_PCIE_0_RGR1_CTRL_gisb_error_intr_SHIFT                0
#define BCHP_PCIE_0_RGR1_CTRL_gisb_error_intr_DEFAULT              0x00000000
#define BCHP_PCIE_0_RGR1_CTRL_gisb_error_intr_INTR_DISABLE         0
#define BCHP_PCIE_0_RGR1_CTRL_gisb_error_intr_INTR_ENABLE          1

/***************************************************************************
 *RBUS_TIMER - RGR Bridge RBUS Timer Register
 ***************************************************************************/
/* PCIE_0_RGR1 :: RBUS_TIMER :: timer_value [31:00] */
#define BCHP_PCIE_0_RGR1_RBUS_TIMER_timer_value_MASK               0xffffffff
#define BCHP_PCIE_0_RGR1_RBUS_TIMER_timer_value_SHIFT              0
#define BCHP_PCIE_0_RGR1_RBUS_TIMER_timer_value_DEFAULT            0x0e297d00

/***************************************************************************
 *SW_INIT_0 - RGR Bridge Software Reset 0 Register
 ***************************************************************************/
/* PCIE_0_RGR1 :: SW_INIT_0 :: reserved0 [31:01] */
#define BCHP_PCIE_0_RGR1_SW_INIT_0_reserved0_MASK                  0xfffffffe
#define BCHP_PCIE_0_RGR1_SW_INIT_0_reserved0_SHIFT                 1

/* PCIE_0_RGR1 :: SW_INIT_0 :: SPARE_SW_INIT [00:00] */
#define BCHP_PCIE_0_RGR1_SW_INIT_0_SPARE_SW_INIT_MASK              0x00000001
#define BCHP_PCIE_0_RGR1_SW_INIT_0_SPARE_SW_INIT_SHIFT             0
#define BCHP_PCIE_0_RGR1_SW_INIT_0_SPARE_SW_INIT_DEFAULT           0x00000000
#define BCHP_PCIE_0_RGR1_SW_INIT_0_SPARE_SW_INIT_DEASSERT          0
#define BCHP_PCIE_0_RGR1_SW_INIT_0_SPARE_SW_INIT_ASSERT            1

/***************************************************************************
 *SW_INIT_1 - RGR Bridge Software Reset 1 Register
 ***************************************************************************/
/* PCIE_0_RGR1 :: SW_INIT_1 :: reserved0 [31:02] */
#define BCHP_PCIE_0_RGR1_SW_INIT_1_reserved0_MASK                  0xfffffffc
#define BCHP_PCIE_0_RGR1_SW_INIT_1_reserved0_SHIFT                 2

/* PCIE_0_RGR1 :: SW_INIT_1 :: PCIE_BRIDGE_SW_INIT [01:01] */
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_BRIDGE_SW_INIT_MASK        0x00000002
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_BRIDGE_SW_INIT_SHIFT       1
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_BRIDGE_SW_INIT_DEFAULT     0x00000001
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_BRIDGE_SW_INIT_DEASSERT    0
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_BRIDGE_SW_INIT_ASSERT      1

/* PCIE_0_RGR1 :: SW_INIT_1 :: PCIE_SW_PERST [00:00] */
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_SW_PERST_MASK              0x00000001
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_SW_PERST_SHIFT             0
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_SW_PERST_DEFAULT           0x00000001
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_SW_PERST_DEASSERT          0
#define BCHP_PCIE_0_RGR1_SW_INIT_1_PCIE_SW_PERST_ASSERT            1

#endif /* #ifndef BCHP_PCIE_0_RGR1_H__ */

/* End of File */
