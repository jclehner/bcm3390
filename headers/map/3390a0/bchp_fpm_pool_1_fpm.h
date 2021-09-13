/***************************************************************************
 *     Copyright (c) 1999-2014, Broadcom Corporation
 *     All Rights Reserved
 *     Confidential Property of Broadcom Corporation
 *
 *
 * THIS SOFTWARE MAY ONLY BE USED SUBJECT TO AN EXECUTED SOFTWARE LICENSE
 * AGREEMENT  BETWEEN THE USER AND BROADCOM.  YOU HAVE NO RIGHT TO USE OR
 * EXPLOIT THIS MATERIAL EXCEPT SUBJECT TO THE TERMS OF SUCH AN AGREEMENT.
 *
 * $brcm_Workfile: $
 * $brcm_Revision: $
 * $brcm_Date: $
 *
 * Module Description:
 *                     DO NOT EDIT THIS FILE DIRECTLY
 *
 * This module was generated magically with RDB from a source description
 * file. You must edit the source file for changes to be made to this file.
 *
 *
 * Date:           Generated on              Wed Dec 24 03:11:34 2014
 *                 Full Compile MD5 Checksum e51833923504e18cf68f41669e5be780
 *                   (minus title and desc)
 *                 MD5 Checksum              0179606075337048309e38c167a9f4cb
 *
 * Compiled with:  RDB Utility               combo_header.pl
 *                 RDB Parser                3.0
 *                 unknown                   unknown
 *                 Perl Interpreter          5.008008
 *                 Operating System          linux
 *
 * Revision History:
 *
 * $brcm_Log: $
 *
 ***************************************************************************/

#ifndef BCHP_FPM_POOL_1_FPM_H__
#define BCHP_FPM_POOL_1_FPM_H__

/***************************************************************************
 *FPM_POOL_1_FPM - FPM Pool Management Registers
 ***************************************************************************/
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC  0x03a00600 /* POOL1 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC  0x03a00608 /* POOL2 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC  0x03a00610 /* POOL3 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC  0x03a00618 /* POOL4 Allocation & De-allocation/Free Management Register */
#define BCHP_FPM_POOL_1_FPM_SPARE                0x03a00620 /* Spare Register for future use */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI           0x03a00624 /* Multi-cast Token Update Control Register */

/***************************************************************************
 *POOL1_ALLOC_DEALLOC - POOL1 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_1_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_MASK   0x80000000
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_SHIFT  31
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL1_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_reserved0_MASK     0x40000000
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_reserved0_SHIFT    30

/* FPM_POOL_1_FPM :: POOL1_ALLOC_DEALLOC :: DDR [29:29] */
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_DDR_MASK           0x20000000
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_DDR_SHIFT          29
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_DDR_DEFAULT        0x00000000

/* FPM_POOL_1_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_INDEX [28:12] */
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_MASK   0x1ffff000
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT  12
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL1_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_MASK    0x00000fff
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT   0
#define BCHP_FPM_POOL_1_FPM_POOL1_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT 0x00000000

/***************************************************************************
 *POOL2_ALLOC_DEALLOC - POOL2 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_1_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_MASK   0x80000000
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_SHIFT  31
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL2_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_reserved0_MASK     0x40000000
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_reserved0_SHIFT    30

/* FPM_POOL_1_FPM :: POOL2_ALLOC_DEALLOC :: DDR [29:29] */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_DDR_MASK           0x20000000
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_DDR_SHIFT          29
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_DDR_DEFAULT        0x00000000

/* FPM_POOL_1_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_INDEX [28:12] */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_MASK   0x1ffff000
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT  12
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL2_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_MASK    0x00000fff
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT   0
#define BCHP_FPM_POOL_1_FPM_POOL2_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT 0x00000000

/***************************************************************************
 *POOL3_ALLOC_DEALLOC - POOL3 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_1_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_MASK   0x80000000
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_SHIFT  31
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL3_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_reserved0_MASK     0x40000000
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_reserved0_SHIFT    30

/* FPM_POOL_1_FPM :: POOL3_ALLOC_DEALLOC :: DDR [29:29] */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_DDR_MASK           0x20000000
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_DDR_SHIFT          29
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_DDR_DEFAULT        0x00000000

/* FPM_POOL_1_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_INDEX [28:12] */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_MASK   0x1ffff000
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT  12
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL3_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_MASK    0x00000fff
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT   0
#define BCHP_FPM_POOL_1_FPM_POOL3_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT 0x00000000

/***************************************************************************
 *POOL4_ALLOC_DEALLOC - POOL4 Allocation & De-allocation/Free Management Register
 ***************************************************************************/
/* FPM_POOL_1_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_MASK   0x80000000
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_SHIFT  31
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_VALID_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL4_ALLOC_DEALLOC :: reserved0 [30:30] */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_reserved0_MASK     0x40000000
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_reserved0_SHIFT    30

/* FPM_POOL_1_FPM :: POOL4_ALLOC_DEALLOC :: DDR [29:29] */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_DDR_MASK           0x20000000
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_DDR_SHIFT          29
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_DDR_DEFAULT        0x00000000

/* FPM_POOL_1_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_INDEX [28:12] */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_MASK   0x1ffff000
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_SHIFT  12
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_INDEX_DEFAULT 0x00000000

/* FPM_POOL_1_FPM :: POOL4_ALLOC_DEALLOC :: TOKEN_SIZE [11:00] */
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_MASK    0x00000fff
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_SHIFT   0
#define BCHP_FPM_POOL_1_FPM_POOL4_ALLOC_DEALLOC_TOKEN_SIZE_DEFAULT 0x00000000

/***************************************************************************
 *SPARE - Spare Register for future use
 ***************************************************************************/
/* FPM_POOL_1_FPM :: SPARE :: SPARE_BITS [31:00] */
#define BCHP_FPM_POOL_1_FPM_SPARE_SPARE_BITS_MASK                  0xffffffff
#define BCHP_FPM_POOL_1_FPM_SPARE_SPARE_BITS_SHIFT                 0
#define BCHP_FPM_POOL_1_FPM_SPARE_SPARE_BITS_DEFAULT               0x00000000

/***************************************************************************
 *POOL_MULTI - Multi-cast Token Update Control Register
 ***************************************************************************/
/* FPM_POOL_1_FPM :: POOL_MULTI :: TOKEN_VALID [31:31] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_VALID_MASK            0x80000000
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_VALID_SHIFT           31
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_VALID_DEFAULT         0x00000000

/* FPM_POOL_1_FPM :: POOL_MULTI :: reserved0 [30:30] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_reserved0_MASK              0x40000000
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_reserved0_SHIFT             30

/* FPM_POOL_1_FPM :: POOL_MULTI :: DDR [29:29] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_DDR_MASK                    0x20000000
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_DDR_SHIFT                   29
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_DDR_DEFAULT                 0x00000000

/* FPM_POOL_1_FPM :: POOL_MULTI :: TOKEN_INDEX [28:12] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_INDEX_MASK            0x1ffff000
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_INDEX_SHIFT           12
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_INDEX_DEFAULT         0x00000000

/* FPM_POOL_1_FPM :: POOL_MULTI :: UPDATE_TYPE [11:11] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_UPDATE_TYPE_MASK            0x00000800
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_UPDATE_TYPE_SHIFT           11
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_UPDATE_TYPE_DEFAULT         0x00000000

/* FPM_POOL_1_FPM :: POOL_MULTI :: reserved1 [10:07] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_reserved1_MASK              0x00000780
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_reserved1_SHIFT             7

/* FPM_POOL_1_FPM :: POOL_MULTI :: TOKEN_MULTI [06:00] */
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_MULTI_MASK            0x0000007f
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_MULTI_SHIFT           0
#define BCHP_FPM_POOL_1_FPM_POOL_MULTI_TOKEN_MULTI_DEFAULT         0x00000000

#endif /* #ifndef BCHP_FPM_POOL_1_FPM_H__ */

/* End of File */