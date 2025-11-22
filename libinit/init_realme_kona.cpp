/*
 * Copyright (C) 2021 The LineageOS Project
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#include <libinit_variant.h>

#include "vendor_init.h"

static const variant_info_t PENM00_CN_info = {
    .prjversion_value = "19101",

    .device = "OP4A9D",
    .model = "PCRM00",
    .name = "OPPO Reno3 Pro 5G",

    .sku = "OP4A9D",
};

static const variant_info_t PENM00_CNLZ_info = {
    .prjversion_value = "20137",

    .device = "OP4E9F",
    .model = "PEXM00",
    .name = "OPPO K9 5G",

    .sku = "OP4E9F",
};

static const variant_info_t PENM00_GLOBAL_info = {
    .prjversion_value = "20351",

    .device = "OP4AF7",
    .model = "PDNM00",
    .name = "OPPO Reno4 Pro 5G",

    .sku = "OP4AF7",
};

static const std::vector<variant_info_t> variants = {
    PENM00_CN_info,
    PENM00_CNLZ_info,
    PENM00_GLOBAL_info,
};

void vendor_load_properties() {
    search_variant(variants);
}
