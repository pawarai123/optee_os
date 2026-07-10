/* SPDX-License-Identifier: BSD-2-Clause */
/*
 * Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.
 */

#ifndef ARCH_CONFIG_H
#define ARCH_CONFIG_H

/*
 * GICD_BASE and GICR_BASE are intentionally absent here: Wildcat chips
 * use different GIC versions and bases. Define them in each chip's
 * target_config.h. Any driver needing them must include platform_config.h
 * rather than arch_config.h directly.
 */

/* Pending hardware validation — set to 0 until register map is confirmed. */
#define RAMBLUR_PIMEM_REG_BASE		UL(0x0)
#define SEC_PRNG_REG_BASE		UL(0x0)

/* Pending hardware validation — set to 0 until register map is confirmed. */
#define AOP_MSG_RAM_BASE		UL(0x0)
#define AOP_MSG_RAM_SIZE		UL(0x0)

#define RPMH_BASE_ADDR			UL(0x0b280000)
#define RPMH_RSC_SIZE			UL(0x01008000)

#define SECURITY_CONTROL_BASE		UL(0x22200000)
#define SECURITY_CONTROL_SIZE		UL(0x0000c000)

#define TCSR_MUTEX_BASE			UL(0x01f40000)
#define TCSR_MUTEX_SIZE			UL(0x0)

#endif /* ARCH_CONFIG_H */
