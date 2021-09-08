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

#ifndef BCHP_PCIE_0_RC_CFG_VENDOR_H__
#define BCHP_PCIE_0_RC_CFG_VENDOR_H__

/***************************************************************************
 *PCIE_0_RC_CFG_VENDOR
 ***************************************************************************/
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP     0x21080180 /* [RO] vendor_cap */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER 0x21080184 /* [RO] vendor_specific_header */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1 0x21080188 /* [RW] Vendor Specific User Register 1 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG2 0x2108018c /* [RW] Vendor Specific User Register 2 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG3 0x21080190 /* [RW] Vendor Specific User Register 3 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG4 0x21080194 /* [RW] Vendor Specific User Register 4 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG5 0x21080198 /* [RW] Vendor Specific User Register 5 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG6 0x2108019c /* [RW] Vendor Specific User Register 6 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG7 0x210801a0 /* [RW] Vendor Specific User Register 7 */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG8 0x210801a4 /* [RW] Vendor Specific User Register 8 */

/***************************************************************************
 *VENDOR_CAP - vendor_cap
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_CAP :: NEXT [31:20] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_NEXT_MASK             0xfff00000
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_NEXT_SHIFT            20
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_NEXT_DEFAULT          0x00000240

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_CAP :: CAP_VER [19:16] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_CAP_VER_MASK          0x000f0000
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_CAP_VER_SHIFT         16
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_CAP_VER_DEFAULT       0x00000001

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_CAP :: VENDOR_SPEC_CAP_ID [15:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_VENDOR_SPEC_CAP_ID_MASK 0x0000ffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_VENDOR_SPEC_CAP_ID_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_CAP_VENDOR_SPEC_CAP_ID_DEFAULT 0x0000000b

/***************************************************************************
 *VENDOR_SPECIFIC_HEADER - vendor_specific_header
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_HEADER :: VSEC_LENGTH [31:20] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_LENGTH_MASK 0xfff00000
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_LENGTH_SHIFT 20
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_LENGTH_DEFAULT 0x00000028

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_HEADER :: VSEC_REV [19:16] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_REV_MASK 0x000f0000
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_REV_SHIFT 16
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_REV_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_HEADER :: VSEC_ID [15:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_ID_MASK 0x0000ffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_ID_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_HEADER_VSEC_ID_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG1 - Vendor Specific User Register 1
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG1 :: Undefined [31:06] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_Undefined_MASK 0xffffffc0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_Undefined_SHIFT 6
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_Undefined_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG1 :: ENDIAN_MODE_BAR3 [05:04] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR3_MASK 0x00000030
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR3_SHIFT 4
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR3_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG1 :: ENDIAN_MODE_BAR2 [03:02] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR2_MASK 0x0000000c
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR2_SHIFT 2
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR2_DEFAULT 0x00000000

/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG1 :: ENDIAN_MODE_BAR1 [01:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR1_MASK 0x00000003
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR1_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG1_ENDIAN_MODE_BAR1_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG2 - Vendor Specific User Register 2
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG2 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG2_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG2_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG2_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG3 - Vendor Specific User Register 3
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG3 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG3_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG3_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG3_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG4 - Vendor Specific User Register 4
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG4 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG4_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG4_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG4_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG5 - Vendor Specific User Register 5
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG5 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG5_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG5_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG5_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG6 - Vendor Specific User Register 6
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG6 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG6_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG6_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG6_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG7 - Vendor Specific User Register 7
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG7 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG7_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG7_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG7_Undefined_DEFAULT 0x00000000

/***************************************************************************
 *VENDOR_SPECIFIC_REG8 - Vendor Specific User Register 8
 ***************************************************************************/
/* PCIE_0_RC_CFG_VENDOR :: VENDOR_SPECIFIC_REG8 :: Undefined [31:00] */
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG8_Undefined_MASK 0xffffffff
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG8_Undefined_SHIFT 0
#define BCHP_PCIE_0_RC_CFG_VENDOR_VENDOR_SPECIFIC_REG8_Undefined_DEFAULT 0x00000000

#endif /* #ifndef BCHP_PCIE_0_RC_CFG_VENDOR_H__ */

/* End of File */
