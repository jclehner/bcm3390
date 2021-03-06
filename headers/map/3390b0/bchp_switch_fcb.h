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
 * Date:           Generated on               Mon May  4 10:42:19 2015
 *                 Full Compile MD5 Checksum  3fa71b7874a727210919dce012235db9
 *                     (minus title and desc)
 *                 MD5 Checksum               354cf45b714a5565197034df92d073c7
 *
 * Compiled with:  RDB Utility                combo_header.pl
 *                 RDB.pm                     15517
 *                 unknown                    unknown
 *                 Perl Interpreter           5.008005
 *                 Operating System           linux
 *
 *
 ***************************************************************************/

#ifndef BCHP_SWITCH_FCB_H__
#define BCHP_SWITCH_FCB_H__

/***************************************************************************
 *SWITCH_FCB
 ***************************************************************************/
#define BCHP_SWITCH_FCB_FCB_CONTROL              0x04e40400 /* [RW] Tx Pause Enable Register */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL 0x04e40404 /* [RW] P8 Failover Release Control Register */
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT       0x04e40408 /* [RW] P8 Failover Release Control Register */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL 0x04e4040c /* [RW] P5 Failover Release Control Register */
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT       0x04e40410 /* [RW] P5 Release Timeout Register */
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT 0x04e40414 /* [RW] P5 Release Delay Timeout Register */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL 0x04e40418 /* [RW] P4 Failover Release Control Register */
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT       0x04e4041c /* [RW] P4 Release Timeout Register */
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT 0x04e40420 /* [RW] P4 Release Delay Timeout Register */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL 0x04e40424 /* [RW] LAN Failover Release Control Register */
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT      0x04e40428 /* [RW] LAN Release Timeout Register */
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT 0x04e4042c /* [RW] LAN Release Delay Timeout Register */
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL 0x04e40430 /* [RW] FCB Pause Override Control Register */

/***************************************************************************
 *FCB_CONTROL - Tx Pause Enable Register
 ***************************************************************************/
/* SWITCH_FCB :: FCB_CONTROL :: reserved0 [31:10] */
#define BCHP_SWITCH_FCB_FCB_CONTROL_reserved0_MASK                 0xfffffc00
#define BCHP_SWITCH_FCB_FCB_CONTROL_reserved0_SHIFT                10

/* SWITCH_FCB :: FCB_CONTROL :: fcb_en [09:09] */
#define BCHP_SWITCH_FCB_FCB_CONTROL_fcb_en_MASK                    0x00000200
#define BCHP_SWITCH_FCB_FCB_CONTROL_fcb_en_SHIFT                   9
#define BCHP_SWITCH_FCB_FCB_CONTROL_fcb_en_DEFAULT                 0x00000000

/* SWITCH_FCB :: FCB_CONTROL :: failover_dis [08:00] */
#define BCHP_SWITCH_FCB_FCB_CONTROL_failover_dis_MASK              0x000001ff
#define BCHP_SWITCH_FCB_FCB_CONTROL_failover_dis_SHIFT             0
#define BCHP_SWITCH_FCB_FCB_CONTROL_failover_dis_DEFAULT           0x00000000

/***************************************************************************
 *P8_FAILOVER_RELEASE_CONTROL - P8 Failover Release Control Register
 ***************************************************************************/
/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: reserved0 [31:24] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_reserved0_MASK 0xff000000
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_reserved0_SHIFT 24

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: queue_release_mask [23:16] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_queue_release_mask_MASK 0x00ff0000
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_queue_release_mask_SHIFT 16
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_queue_release_mask_DEFAULT 0x00000000

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q7_release_state [15:14] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q7_release_state_MASK 0x0000c000
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q7_release_state_SHIFT 14
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q7_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q6_release_state [13:12] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q6_release_state_MASK 0x00003000
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q6_release_state_SHIFT 12
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q6_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q5_release_state [11:10] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q5_release_state_MASK 0x00000c00
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q5_release_state_SHIFT 10
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q5_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q4_release_state [09:08] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q4_release_state_MASK 0x00000300
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q4_release_state_SHIFT 8
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q4_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q3_release_state [07:06] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q3_release_state_MASK 0x000000c0
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q3_release_state_SHIFT 6
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q3_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q2_release_state [05:04] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q2_release_state_MASK 0x00000030
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q2_release_state_SHIFT 4
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q2_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q1_release_state [03:02] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q1_release_state_MASK 0x0000000c
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q1_release_state_SHIFT 2
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q1_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P8_FAILOVER_RELEASE_CONTROL :: Q0_release_state [01:00] */
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q0_release_state_MASK 0x00000003
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q0_release_state_SHIFT 0
#define BCHP_SWITCH_FCB_P8_FAILOVER_RELEASE_CONTROL_Q0_release_state_DEFAULT 0x00000001

/***************************************************************************
 *P8_RELEASE_TIMEOUT - P8 Failover Release Control Register
 ***************************************************************************/
/* SWITCH_FCB :: P8_RELEASE_TIMEOUT :: reserved0 [31:17] */
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_reserved0_MASK          0xfffe0000
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_reserved0_SHIFT         17

/* SWITCH_FCB :: P8_RELEASE_TIMEOUT :: release_timer_en [16:16] */
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timer_en_MASK   0x00010000
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timer_en_SHIFT  16
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: P8_RELEASE_TIMEOUT :: release_timeout [15:00] */
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timeout_MASK    0x0000ffff
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timeout_SHIFT   0
#define BCHP_SWITCH_FCB_P8_RELEASE_TIMEOUT_release_timeout_DEFAULT 0x000001ff

/***************************************************************************
 *P5_FAILOVER_RELEASE_CONTROL - P5 Failover Release Control Register
 ***************************************************************************/
/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: reserved0 [31:24] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_reserved0_MASK 0xff000000
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_reserved0_SHIFT 24

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: queue_release_mask [23:16] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_queue_release_mask_MASK 0x00ff0000
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_queue_release_mask_SHIFT 16
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_queue_release_mask_DEFAULT 0x00000000

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q7_release_state [15:14] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q7_release_state_MASK 0x0000c000
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q7_release_state_SHIFT 14
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q7_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q6_release_state [13:12] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q6_release_state_MASK 0x00003000
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q6_release_state_SHIFT 12
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q6_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q5_release_state [11:10] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q5_release_state_MASK 0x00000c00
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q5_release_state_SHIFT 10
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q5_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q4_release_state [09:08] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q4_release_state_MASK 0x00000300
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q4_release_state_SHIFT 8
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q4_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q3_release_state [07:06] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q3_release_state_MASK 0x000000c0
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q3_release_state_SHIFT 6
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q3_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q2_release_state [05:04] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q2_release_state_MASK 0x00000030
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q2_release_state_SHIFT 4
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q2_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q1_release_state [03:02] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q1_release_state_MASK 0x0000000c
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q1_release_state_SHIFT 2
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q1_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P5_FAILOVER_RELEASE_CONTROL :: Q0_release_state [01:00] */
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q0_release_state_MASK 0x00000003
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q0_release_state_SHIFT 0
#define BCHP_SWITCH_FCB_P5_FAILOVER_RELEASE_CONTROL_Q0_release_state_DEFAULT 0x00000001

/***************************************************************************
 *P5_RELEASE_TIMEOUT - P5 Release Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: P5_RELEASE_TIMEOUT :: reserved0 [31:17] */
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_reserved0_MASK          0xfffe0000
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_reserved0_SHIFT         17

/* SWITCH_FCB :: P5_RELEASE_TIMEOUT :: release_timer_en [16:16] */
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timer_en_MASK   0x00010000
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timer_en_SHIFT  16
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: P5_RELEASE_TIMEOUT :: release_timeout [15:00] */
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timeout_MASK    0x0000ffff
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timeout_SHIFT   0
#define BCHP_SWITCH_FCB_P5_RELEASE_TIMEOUT_release_timeout_DEFAULT 0x000001ff

/***************************************************************************
 *P5_RELEASE_DELAY_TIMEOUT - P5 Release Delay Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: P5_RELEASE_DELAY_TIMEOUT :: reserved0 [31:09] */
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_reserved0_MASK    0xfffffe00
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_reserved0_SHIFT   9

/* SWITCH_FCB :: P5_RELEASE_DELAY_TIMEOUT :: release_timer_en [08:08] */
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timer_en_MASK 0x00000100
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timer_en_SHIFT 8
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: P5_RELEASE_DELAY_TIMEOUT :: release_timeout [07:00] */
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timeout_MASK 0x000000ff
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timeout_SHIFT 0
#define BCHP_SWITCH_FCB_P5_RELEASE_DELAY_TIMEOUT_release_timeout_DEFAULT 0x0000000f

/***************************************************************************
 *P4_FAILOVER_RELEASE_CONTROL - P4 Failover Release Control Register
 ***************************************************************************/
/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: reserved0 [31:24] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_reserved0_MASK 0xff000000
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_reserved0_SHIFT 24

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: queue_release_mask [23:16] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_queue_release_mask_MASK 0x00ff0000
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_queue_release_mask_SHIFT 16
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_queue_release_mask_DEFAULT 0x00000000

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q7_release_state [15:14] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q7_release_state_MASK 0x0000c000
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q7_release_state_SHIFT 14
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q7_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q6_release_state [13:12] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q6_release_state_MASK 0x00003000
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q6_release_state_SHIFT 12
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q6_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q5_release_state [11:10] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q5_release_state_MASK 0x00000c00
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q5_release_state_SHIFT 10
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q5_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q4_release_state [09:08] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q4_release_state_MASK 0x00000300
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q4_release_state_SHIFT 8
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q4_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q3_release_state [07:06] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q3_release_state_MASK 0x000000c0
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q3_release_state_SHIFT 6
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q3_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q2_release_state [05:04] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q2_release_state_MASK 0x00000030
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q2_release_state_SHIFT 4
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q2_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q1_release_state [03:02] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q1_release_state_MASK 0x0000000c
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q1_release_state_SHIFT 2
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q1_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: P4_FAILOVER_RELEASE_CONTROL :: Q0_release_state [01:00] */
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q0_release_state_MASK 0x00000003
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q0_release_state_SHIFT 0
#define BCHP_SWITCH_FCB_P4_FAILOVER_RELEASE_CONTROL_Q0_release_state_DEFAULT 0x00000001

/***************************************************************************
 *P4_RELEASE_TIMEOUT - P4 Release Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: P4_RELEASE_TIMEOUT :: reserved0 [31:17] */
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_reserved0_MASK          0xfffe0000
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_reserved0_SHIFT         17

/* SWITCH_FCB :: P4_RELEASE_TIMEOUT :: release_timer_en [16:16] */
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timer_en_MASK   0x00010000
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timer_en_SHIFT  16
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: P4_RELEASE_TIMEOUT :: release_timeout [15:00] */
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timeout_MASK    0x0000ffff
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timeout_SHIFT   0
#define BCHP_SWITCH_FCB_P4_RELEASE_TIMEOUT_release_timeout_DEFAULT 0x000001ff

/***************************************************************************
 *P4_RELEASE_DELAY_TIMEOUT - P4 Release Delay Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: P4_RELEASE_DELAY_TIMEOUT :: reserved0 [31:09] */
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_reserved0_MASK    0xfffffe00
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_reserved0_SHIFT   9

/* SWITCH_FCB :: P4_RELEASE_DELAY_TIMEOUT :: release_timer_en [08:08] */
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timer_en_MASK 0x00000100
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timer_en_SHIFT 8
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: P4_RELEASE_DELAY_TIMEOUT :: release_timeout [07:00] */
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timeout_MASK 0x000000ff
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timeout_SHIFT 0
#define BCHP_SWITCH_FCB_P4_RELEASE_DELAY_TIMEOUT_release_timeout_DEFAULT 0x0000000f

/***************************************************************************
 *LAN_FAILOVER_RELEASE_CONTROL - LAN Failover Release Control Register
 ***************************************************************************/
/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: reserved0 [31:24] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_reserved0_MASK 0xff000000
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_reserved0_SHIFT 24

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: queue_release_mask [23:16] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_queue_release_mask_MASK 0x00ff0000
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_queue_release_mask_SHIFT 16
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_queue_release_mask_DEFAULT 0x00000000

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q7_release_state [15:14] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q7_release_state_MASK 0x0000c000
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q7_release_state_SHIFT 14
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q7_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q6_release_state [13:12] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q6_release_state_MASK 0x00003000
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q6_release_state_SHIFT 12
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q6_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q5_release_state [11:10] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q5_release_state_MASK 0x00000c00
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q5_release_state_SHIFT 10
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q5_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q4_release_state [09:08] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q4_release_state_MASK 0x00000300
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q4_release_state_SHIFT 8
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q4_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q3_release_state [07:06] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q3_release_state_MASK 0x000000c0
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q3_release_state_SHIFT 6
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q3_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q2_release_state [05:04] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q2_release_state_MASK 0x00000030
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q2_release_state_SHIFT 4
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q2_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q1_release_state [03:02] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q1_release_state_MASK 0x0000000c
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q1_release_state_SHIFT 2
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q1_release_state_DEFAULT 0x00000001

/* SWITCH_FCB :: LAN_FAILOVER_RELEASE_CONTROL :: Q0_release_state [01:00] */
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q0_release_state_MASK 0x00000003
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q0_release_state_SHIFT 0
#define BCHP_SWITCH_FCB_LAN_FAILOVER_RELEASE_CONTROL_Q0_release_state_DEFAULT 0x00000001

/***************************************************************************
 *LAN_RELEASE_TIMEOUT - LAN Release Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: LAN_RELEASE_TIMEOUT :: reserved0 [31:17] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_reserved0_MASK         0xfffe0000
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_reserved0_SHIFT        17

/* SWITCH_FCB :: LAN_RELEASE_TIMEOUT :: release_timer_en [16:16] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timer_en_MASK  0x00010000
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timer_en_SHIFT 16
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: LAN_RELEASE_TIMEOUT :: release_timeout [15:00] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timeout_MASK   0x0000ffff
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timeout_SHIFT  0
#define BCHP_SWITCH_FCB_LAN_RELEASE_TIMEOUT_release_timeout_DEFAULT 0x000001ff

/***************************************************************************
 *LAN_RELEASE_DELAY_TIMEOUT - LAN Release Delay Timeout Register
 ***************************************************************************/
/* SWITCH_FCB :: LAN_RELEASE_DELAY_TIMEOUT :: reserved0 [31:09] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_reserved0_MASK   0xfffffe00
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_reserved0_SHIFT  9

/* SWITCH_FCB :: LAN_RELEASE_DELAY_TIMEOUT :: release_timer_en [08:08] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timer_en_MASK 0x00000100
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timer_en_SHIFT 8
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timer_en_DEFAULT 0x00000000

/* SWITCH_FCB :: LAN_RELEASE_DELAY_TIMEOUT :: release_timeout [07:00] */
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timeout_MASK 0x000000ff
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timeout_SHIFT 0
#define BCHP_SWITCH_FCB_LAN_RELEASE_DELAY_TIMEOUT_release_timeout_DEFAULT 0x0000000f

/***************************************************************************
 *FCB_PAUSE_OVERRIDE_CONTROL - FCB Pause Override Control Register
 ***************************************************************************/
/* SWITCH_FCB :: FCB_PAUSE_OVERRIDE_CONTROL :: reserved0 [31:18] */
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_reserved0_MASK  0xfffc0000
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_reserved0_SHIFT 18

/* SWITCH_FCB :: FCB_PAUSE_OVERRIDE_CONTROL :: tx_pause_ovrd_en [17:09] */
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_en_MASK 0x0003fe00
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_en_SHIFT 9
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_en_DEFAULT 0x00000000

/* SWITCH_FCB :: FCB_PAUSE_OVERRIDE_CONTROL :: tx_pause_ovrd [08:00] */
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_MASK 0x000001ff
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_SHIFT 0
#define BCHP_SWITCH_FCB_FCB_PAUSE_OVERRIDE_CONTROL_tx_pause_ovrd_DEFAULT 0x00000000

#endif /* #ifndef BCHP_SWITCH_FCB_H__ */

/* End of File */
