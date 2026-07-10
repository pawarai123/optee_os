# SPDX-License-Identifier: BSD-2-Clause
# Copyright (c) Qualcomm Technologies, Inc. and/or its subsidiaries.

# Qualcomm Cacao platform configuration.

$(call force,CFG_TEE_CORE_NB_CORE,8)

CFG_TZDRAM_START ?= 0x80fcd000
CFG_TEE_RAM_VA_SIZE ?= 0x147000
CFG_TA_RAM_VA_SIZE ?= 0x300000
