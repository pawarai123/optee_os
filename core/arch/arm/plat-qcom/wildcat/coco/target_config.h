/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 */

#ifndef TARGET_CONFIG_H
#define TARGET_CONFIG_H

#define TCSR_BOOT_MISC_DETECT		UL(0x1FD3000)

#define IMEM_BASE			UL(0x14680000)
#define IMEM_SIZE			UL(0x19000)
#define IMEM_DIAG_OFFSET		UL(0x720)
#define DIAG_SIZE			UL(0x3000)
#define DIAG_BASE			(IMEM_BASE + IMEM_SIZE - DIAG_SIZE)
#define DIAG_LOG_START_INFO		(IMEM_BASE + IMEM_DIAG_OFFSET)

#define GICD_BASE			UL(0x17200000)
#define GICR_BASE			UL(0x17260000)

#define GCC_BASE			UL(0x00100000)
#define GCC_SIZE			UL(0x001f0000)

#define AOP_CMD_DB_BASE			UL(0x80eb4000)
#define AOP_CMD_DB_SIZE			UL(0x00020000)

#define CFG_SEC_ELF_DDR_ADDR		UL(0x80f04000)
#define CFG_SEC_ELF_DDR_SIZE		UL(0x000c9000)

#define DRAM0_BASE			UL(0x80000000)
#define DRAM0_SIZE			UL(0x10000000)
#define DRAM1_BASE			ULL(0x0)
#define DRAM1_SIZE			ULL(0x0)

#define RAMBLUR_PIMEM_VAULT_TA_BASE	ULL(0x0)
#define RAMBLUR_PIMEM_VAULT_TA_SIZE	ULL(0x0)

#define GENI_UART_REG_BASE		UL(0x0)

/* Optional PAS subsystem ranges. Required only when CFG_QCOM_PAS_PTA=y. */
#define WPSS_BASE			UL(0x0)
#define WPSS_SIZE			UL(0x0)
#define TURING_BASE			UL(0x0)
#define TURING_SIZE			ULL(0x0)
#define LPASS_BASE			UL(0x0)
#define LPASS_SIZE			ULL(0x0)
#define IRIS_BASE			UL(0x0)
#define IRIS_SIZE			ULL(0x0)

#endif /* TARGET_CONFIG_H */
