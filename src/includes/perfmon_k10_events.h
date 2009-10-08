#define NUM_ARCH_EVENTS_K10 262

static PerfmonHashEntry  k10_arch_events[NUM_ARCH_EVENTS_K10] = {
    {"DISPATCHED_FP_OP_ADD_PIPE",
        {0x00,0x01}}
    ,{"DISPATCHED_FP_OP_MULTIPLY_PIPE",
        {0x00,0x02}}
    ,{"DISPATCHED_FP_OP_STORE_PIPE",
        {0x00,0x04}}
    ,{"DISPATCHED_FP_OP_ADD_PIPE_LOAD",
        {0x00,0x08}}
    ,{"DISPATCHED_FP_OP_MULTIPLY_PIPE_LOAD",
        {0x00,0x10}}
    ,{"DISPATCHED_FP_OP_STORE_PIPE_LOAD",
        {0x00,0x20}}
    ,{"FPU_EMPTY",
        {0x01,0x00}}
    ,{"DISPATCHED_FAST_FPU",
        {0x02,0x00}}
    ,{"SSE_RETIRED_ADD_SINGLE_UOPS",
        {0x03,0x01}}
    ,{"SSE_RETIRED_MULT_SINGLE_UOPS",
        {0x03,0x02}}
    ,{"SSE_RETIRED_DIV_SINGLE_UOPS",
        {0x03,0x04}}
    ,{"SSE_RETIRED_ADD_DOUBLE_UOPS",
        {0x03,0x08}}
    ,{"SSE_RETIRED_MULT_DOUBLE_UOPS",
        {0x03,0x10}}
    ,{"SSE_RETIRED_DIV_DOUBLE_UOPS",
        {0x03,0x20}}
    ,{"SSE_RETIRED_ADD_SINGLE_FLOPS",
        {0x03,0x41}}
    ,{"SSE_RETIRED_MULT_SINGLE_FLOPS",
        {0x03,0x42}}
    ,{"SSE_RETIRED_DIV_SINGLE_FLOPS",
        {0x03,0x44}}
    ,{"SSE_RETIRED_ADD_DOUBLE_FLOPS",
        {0x03,0x48}}
    ,{"SSE_RETIRED_MULT_DOUBLE_FLOPS",
        {0x03,0x50}}
    ,{"SSE_RETIRED_DIV_DOUBLE_FLOPS",
        {0x03,0x60}}
    ,{"MOVE_RETIRED_LOW_MERGE",
        {0x04,0x01}}
    ,{"MOVE_RETIRED_HIGH_MERGE",
        {0x04,0x02}}
    ,{"MOVE_RETIRED_MERGE",
        {0x04,0x04}}
    ,{"MOVE_RETIRED_ALL",
        {0x04,0x08}}
    ,{"SERIAL_RETIRED_SSE_BOTTOM_EXE",
        {0x05,0x01}}
    ,{"SERIAL_RETIRED_SSE_BOTTOM_SERIAL",
        {0x05,0x02}}
    ,{"SERIAL_RETIRED_X87_BOTTOM_EXE",
        {0x05,0x04}}
    ,{"SERIAL_RETIRED_X87_BOTTOM_SERIAL",
        {0x05,0x08}}
    ,{"SERIAL_CYCLES_FP_EXE",
        {0x06,0x01}}
    ,{"SERIAL_CYCLES_FP_SERIAL",
        {0x06,0x02}}
    ,{"PIPELINE_RESTART_SELF_MOD",
        {0x21,0x00}}
    ,{"PIPELINE_RESTART_PROBE_HIT",
        {0x22,0x00}}
    ,{"LS_BUFFER_FULL",
        {0x23,0x00}}
    ,{"LOCKED_OPERATION_INSTRUCTIONS",
        {0x24,0x01}}
    ,{"LOCKED_OPERATION_SPECULATIVE_CYC",
        {0x24,0x02}}
    ,{"LOCKED_OPERATION_NON_SPECULATIVE_CYC",
        {0x24,0x04}}
    ,{"LOCKED_OPERATION_WAIT_CACHE_HIT_CYC",
        {0x24,0x08}}
    ,{"RETIRED_CLFLUSH",
        {0x26,0x00}}
    ,{"RETIRED_CPUID",
        {0x26,0x00}}
    ,{"STORE_TO_LOAD_FORWARD_CANCEL_ADDRESS_MISMATCH",
        {0x2A,0x01}}
    ,{"STORE_TO_LOAD_FORWARD_CANCEL_SIZE_MISMATCH",
        {0x2A,0x02}}
    ,{"STORE_TO_LOAD_FORWARD_CANCEL_MISALIGNED",
        {0x2A,0x04}}
    ,{"NUM_SMI",
        {0x2B,0x00}}
    ,{"DATA_CACHE_ACCESSES",
        {0x40,0x00}}
    ,{"DATA_CACHE_MISSES",
        {0x41,0x00}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE",
        {0x42,0x01}}
    ,{"DATA_CACHE_REFILLS_L2_SHARED",
        {0x42,0x02}}
    ,{"DATA_CACHE_REFILLS_L2_EXCLUSIVE",
        {0x42,0x04}}
    ,{"DATA_CACHE_REFILLS_L2_OWNED",
        {0x42,0x08}}
    ,{"DATA_CACHE_REFILLS_L2_MODIFIED",
        {0x42,0x10}}
    ,{"DATA_CACHE_REFILLS_L2_ALL",
        {0x42,0x1E}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_INVALID",
        {0x43,0x01}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_SHARED",
        {0x43,0x02}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_EXCLUSIVE",
        {0x43,0x04}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_OWNED",
        {0x43,0x08}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_MODIFIED",
        {0x43,0x10}}
    ,{"DATA_CACHE_REFILLS_NORTHBRIDGE_ALL",
        {0x43,0x1F}}
    ,{"DATA_CACHE_EVICTED_INVALID",
        {0x44,0x01}}
    ,{"DATA_CACHE_EVICTED_SHARED",
        {0x44,0x02}}
    ,{"DATA_CACHE_EVICTED_EXCLUSIVE",
        {0x44,0x04}}
    ,{"DATA_CACHE_EVICTED_OWNED",
        {0x44,0x08}}
    ,{"DATA_CACHE_EVICTED_MODIFIED",
        {0x44,0x10}}
    ,{"DATA_CACHE_EVICTED_PREFETCH_NTA",
        {0x44,0x20}}
    ,{"DATA_CACHE_EVICTED_NOT_PREFETCH_NTA",
        {0x44,0x40}}
    ,{"DATA_CACHE_EVICTED_ALL",
        {0x44,0x1F}}
    ,{"DTLB_L2_HIT_4K",
        {0x45,0x01}}
    ,{"DTLB_L2_HIT_2M",
        {0x45,0x02}}
    ,{"DTLB_L2_HIT_1G",
        {0x45,0x04}}
    ,{"DTLB_L2_MISS_4K",
        {0x46,0x01}}
    ,{"DTLB_L2_MISS_2M",
        {0x46,0x02}}
    ,{"DTLB_L2_MISS_1G",
        {0x46,0x04}}
    ,{"MISALIGNED_ACCESS",
        {0x47,0x00}}
    ,{"LATE_CANCEL_ACCESS",
        {0x48,0x00}}
    ,{"EARLY_CANCEL_ACCESS",
        {0x49,0x00}}
    ,{"SINGLE_BIT_ERRORS_SCRUBBER",
        {0x4A,0x01}}
    ,{"SINGLE_BIT_ERRORS_PIGGYBACK",
        {0x4A,0x02}}
    ,{"SINGLE_BIT_ERRORS_LOAD_PIPE",
        {0x4A,0x04}}
    ,{"SINGLE_BIT_ERRORS_STORE_PIPE",
        {0x4A,0x08}}
    ,{"PREFETCH_INSTRUCTION_DISPATCHED_LOAD",
        {0x4B,0x01}}
    ,{"PREFETCH_INSTRUCTION_DISPATCHED_STORE",
        {0x4B,0x02}}
    ,{"PREFETCH_INSTRUCTION_DISPATCHED_NTA",
        {0x4B,0x04}}
    ,{"DCACHE_LOCK_MISS",
        {0x4C,0x02}}
    ,{"DTLB_L1_HIT_4K",
        {0x4D,0x01}}
    ,{"DTLB_L1_HIT_2M",
        {0x4D,0x02}}
    ,{"DTLB_L1_HIT_1G",
        {0x4D,0x04}}
    ,{"SW_PREFETCH_HIT_L1",
        {0x52,0x01}}
    ,{"SW_PREFETCH_HIT_L2",
        {0x52,0x08}}
    ,{"GLOBAL_TLB_FLUSH",
        {0x54,0x00}}
    ,{"MEMORY_REQUEST_NON_CACHEABLE",
        {0x65,0x01}}
    ,{"MEMORY_REQUEST_WRITE_COMBINED",
        {0x65,0x02}}
    ,{"MEMORY_REQUEST_STREAMING_STORE",
        {0x65,0x80}}
    ,{"DATA_PREFETCHER_CANCELED",
        {0x67,0x01}}
    ,{"DATA_PREFETCHER_ATTEMPTS",
        {0x67,0x02}}
    ,{"NORTHBRIDGE_READ_RESPONSE_EXCLUSIVE",
        {0x6C,0x01}}
    ,{"NORTHBRIDGE_READ_RESPONSE_MODIFIED",
        {0x6C,0x02}}
    ,{"NORTHBRIDGE_READ_RESPONSE_SHARED",
        {0x6C,0x04}}
    ,{"NORTHBRIDGE_READ_RESPONSE_OWNED",
        {0x6C,0x08}}
    ,{"NORTHBRIDGE_READ_RESPONSE_DATA_ERROR",
        {0x6C,0x10}}
    ,{"OCTWORDS_WRITE_TRANSFERS",
        {0x6D,0x01}}
    ,{"CPU_CLOCKS_UNHALTED",
        {0x76,0x00}}
    ,{"L2_REQUESTS_ICACHE_FILL",
        {0x7D,0x01}}
    ,{"L2_REQUESTS_DCACHE_FILL",
        {0x7D,0x02}}
    ,{"L2_REQUESTS_TLBCACHE_FILL",
        {0x7D,0x04}}
    ,{"L2_REQUESTS_TAG_SNOOP_REQUEST",
        {0x7D,0x08}}
    ,{"L2_REQUESTS_CANCELLED_REQUEST",
        {0x7D,0x10}}
    ,{"L2_REQUESTS_HARDWARE_PREFETCH",
        {0x7D,0x20}}
    ,{"L2_REQUESTS_ICACHE_FILL",
        {0x7E,0x01}}
    ,{"L2_REQUESTS_DCACHE_FILL",
        {0x7E,0x02}}
    ,{"L2_REQUESTS_TLB_WALK",
        {0x7E,0x04}}
    ,{"L2_REQUESTS_HARDWARE_PREFETCH",
        {0x7E,0x08}}
    ,{"L2_FILL_VICTIMS",
        {0x7F,0x01}}
    ,{"L2_FILL_WRITEBACKS",
        {0x7F,0x02}}
    ,{"ICACHE_FETCHES",
        {0x80,0x00}}
    ,{"ICACHE_MISSES",
        {0x81,0x00}}
    ,{"ICACHE_REFILLS_L2",
        {0x82,0x00}}
    ,{"ICACHE_REFILLS_MEM",
        {0x83,0x00}}
    ,{"ITLB_L2_HIT",
        {0x84,0x00}}
    ,{"ITLB_L2_MISS_4K",
        {0x85,0x01}}
    ,{"ITLB_L2_MISS_2M",
        {0x85,0x02}}
    ,{"PIPELINE_RESTART_STREAM_PROBE",
        {0x86,0x00}}
    ,{"INSTRUCTION_FETCH_STALL",
        {0x87,0x00}}
    ,{"RETURN_STACK_HITS",
        {0x88,0x00}}
    ,{"RETURN_STACK_OVERFLOW",
        {0x89,0x00}}
    ,{"ICACHE_VICTIMS",
        {0x8B,0x00}}
    ,{"ICACHE_LINES_INVALIDATED_NOHIT",
        {0x8C,0x01}}
    ,{"ICACHE_LINES_INVALIDATED_HIT",
        {0x8C,0x02}}
    ,{"ITLB_RELOADS",
        {0x99,0x00}}
    ,{"ITLB_RELOADS_ABORTED",
        {0x9A,0x00}}
    ,{"INSTRUCTIONS_RETIRED",
        {0xC0,0x00}}
    ,{"UOPS_RETIRED",
        {0xC1,0x00}}
    ,{"BRANCH_RETIRED",
        {0xC2,0x00}}
    ,{"BRANCH_MISPREDICT_RETIRED",
        {0xC3,0x00}}
    ,{"BRANCH_TAKEN_RETIRED",
        {0xC4,0x00}}
    ,{"BRANCH_TAKEN_MISPREDICTED_RETIRED",
        {0xC5,0x00}}
    ,{"TRANSFER_FAR_CONTROL_RETIRED",
        {0xC6,0x00}}
    ,{"BRANCH_RESYNCS_RETIRED",
        {0xC7,0x00}}
    ,{"NEAR_RETURNS_RETIRED",
        {0xC8,0x00}}
    ,{"NEAR_RETURNS_MISPREDICTED_RETIRED",
        {0xC8,0x00}}
    ,{"BRANCH_INDIRECT_MISPREDICT_RETIRED",
        {0xC6,0x00}}
    ,{"INSTRUCTIONS_RETIRED_X87",
        {0xCB,0x01}}
    ,{"INSTRUCTIONS_RETIRED_MMX",
        {0xCB,0x02}}
    ,{"INSTRUCTIONS_RETIRED_SSE",
        {0xCB,0x04}}
    ,{"FASTPATH_RETIRED_0",
        {0xCB,0x01}}
    ,{"FASTPATH_RETIRED_1",
        {0xCB,0x02}}
    ,{"FASTPATH_RETIRED_2",
        {0xCB,0x04}}
    ,{"INTERRUPTS_MASKED_CYCLES",
        {0xCE,0x00}}
    ,{"INTERRUPTS_TAKEN",
        {0xCF,0x00}}
    ,{"DECODER_EMPTY_CYCLES",
        {0xD0,0x00}}
    ,{"DISPATCH_STALLS",
        {0xD1,0x00}}
    ,{"DISPATCH_STALLS_BRANCH",
        {0xD2,0x00}}
    ,{"DISPATCH_STALLS_SERIAL",
        {0xD3,0x00}}
    ,{"DISPATCH_STALLS_SEGMENT_LOAD",
        {0xD4,0x00}}
    ,{"DISPATCH_STALLS_ROB_FULL",
        {0xD5,0x00}}
    ,{"DISPATCH_STALLS_RES_FULL",
        {0xD6,0x00}}
    ,{"DISPATCH_STALLS_FPU_FULL",
        {0xD7,0x00}}
    ,{"DISPATCH_STALLS_LS_FULL",
        {0xD8,0x00}}
    ,{"DISPATCH_STALLS_ALL_QUIT",
        {0xD9,0x00}}
    ,{"DISPATCH_STALLS_DRAIN",
        {0xDA,0x00}}
    ,{"FPU_EXCEPTIONS_X87_RECLASS",
        {0xDB,0x01}}
    ,{"FPU_EXCEPTIONS_SSE_RETYPE",
        {0xDB,0x02}}
    ,{"FPU_EXCEPTIONS_SSE_RECLASS",
        {0xDB,0x04}}
    ,{"FPU_EXCEPTIONS_MICROTRAPS",
        {0xDB,0x08}}
    ,{"X87_FLOPS_RETIRED_ADD",
        {0x1C0,0x01}}
    ,{"X87_FLOPS_RETIRED_MULT",
        {0x1C0,0x02}}
    ,{"X87_FLOPS_RETIRED_DIV",
        {0x1C0,0x04}}
    ,{"LFENCE_RETIRED",
        {0x1D3,0x00}}
    ,{"SFENCE_RETIRED",
        {0x1D4,0x00}}
    ,{"MFENCE_RETIRED",
        {0x1D5,0x00}}
    ,{"DRAM_ACCESSES_ALL",
        {0xE0,0x00}}
    ,{"DRAM_ACCESSES_DCT0_HIT",
        {0xE0,0x01}}
    ,{"DRAM_ACCESSES_DCTO_MISS",
        {0xE0,0x02}}
    ,{"DRAM_ACCESSES_DCTO_CONFLICT",
        {0xE0,0x04}}
    ,{"DRAM_ACCESSES_DCT1_HIT",
        {0xE0,0x08}}
    ,{"DRAM_ACCESSES_DCT1_MISS",
        {0xE0,0x10}}
    ,{"DRAM_ACCESSES_DCT1_CONFLICT",
        {0xE0,0x20}}
    ,{"DRAM_PAGE_TABLE_OVERFLOW_ALL",
        {0xE1,0x00}}
    ,{"DRAM_PAGE_TABLE_OVERFLOW_DCT0",
        {0xE1,0x01}}
    ,{"DRAM_PAGE_TABLE_OVERFLOW_DCT1",
        {0xE1,0x02}}
    ,{"DRAM_COMMAND_SLOTS_MISSED_ALL",
        {0xE2,0x00}}
    ,{"DRAM_COMMAND_SLOTS_MISSED_DCT0",
        {0xE2,0x01}}
    ,{"DRAM_COMMAND_SLOTS_MISSED_DCT1",
        {0xE2,0x02}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT0_CHIP_SELECT",
        {0xE3,0x01}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT0_READ_TO_WRITE",
        {0xE3,0x02}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT0_WRITE_TO_READ",
        {0xE3,0x04}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT1_CHIP_SELECT",
        {0xE3,0x08}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT1_READ_TO_WRITE",
        {0xE3,0x10}}
    ,{"DRAM_CONTROLLER_TURNAROUNDS_DCT1_WRITE_TO_READ",
        {0xE3,0x20}}
    ,{"DRAM_CONTROLLER_BYPASS_SATURATION_HIGH",
        {0xE4,0x01}}
    ,{"DRAM_CONTROLLER_BYPASS_SATURATION_MEDIUM",
        {0xE4,0x02}}
    ,{"DRAM_CONTROLLER_BYPASS_SATURATION_DCT0",
        {0xE4,0x04}}
    ,{"DRAM_CONTROLLER_BYPASS_SATURATION_DCT1",
        {0xE4,0x08}}
    ,{"CACHE_BLOCK_COMMANDS_VICTIM",
        {0xEA,0x01}}
    ,{"CACHE_BLOCK_COMMANDS_READ",
        {0xEA,0x04}}
    ,{"CACHE_BLOCK_COMMANDS_READ_SHARED",
        {0xEA,0x08}}
    ,{"CACHE_BLOCK_COMMANDS_READ_MODIFIED",
        {0xEA,0x10}}
    ,{"CACHE_BLOCK_COMMANDS_DIRTY",
        {0xEA,0x20}}
    ,{"MEMORY_REQUESTS_WRITE",
        {0x1F0,0x01}}
    ,{"MEMORY_REQUESTS_READ",
        {0x1F0,0x02}}
    ,{"MEMORY_REQUESTS_PREFETCH",
        {0x1F0,0x04}}
    ,{"MEMORY_REQUESTS_WRITE_32",
        {0x1F0,0x08}}
    ,{"MEMORY_REQUESTS_WRITE_64",
        {0x1F0,0x10}}
    ,{"MEMORY_REQUESTS_READ_32",
        {0x1F0,0x20}}
    ,{"MEMORY_REQUESTS_READ_64",
        {0x1F0,0x40}}
    ,{"MEMORY_REQUESTS_READ_WHILE_WRITE",
        {0x1F0,0x80}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_0",
        {0x4E0,0x11}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_0",
        {0x4E0,0x12}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_0",
        {0x4E0,0x14}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_1",
        {0x4E0,0x21}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_1",
        {0x4E0,0x22}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_1",
        {0x4E0,0x24}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_2",
        {0x4E0,0x41}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_2",
        {0x4E0,0x42}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_2",
        {0x4E0,0x44}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_3",
        {0x4E0,0x81}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_3",
        {0x4E0,0x82}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_3",
        {0x4E0,0x84}}
    ,{"L3_READ_REQUEST_ALL_CORE_0",
        {0x4E0,0x17}}
    ,{"L3_READ_REQUEST_ALL_CORE_1",
        {0x4E0,0x27}}
    ,{"L3_READ_REQUEST_ALL_CORE_2",
        {0x4E0,0x47}}
    ,{"L3_READ_REQUEST_ALL_CORE_3",
        {0x4E0,0x87}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_0",
        {0x4E1,0x11}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_0",
        {0x4E1,0x12}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_0",
        {0x4E1,0x14}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_1",
        {0x4E1,0x21}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_1",
        {0x4E1,0x22}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_1",
        {0x4E1,0x24}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_2",
        {0x4E1,0x41}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_2",
        {0x4E1,0x42}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_2",
        {0x4E1,0x44}}
    ,{"L3_READ_REQUEST_D_EXCLUSIVE_CORE_3",
        {0x4E1,0x81}}
    ,{"L3_READ_REQUEST_I_SHARED_CORE_3",
        {0x4E1,0x82}}
    ,{"L3_READ_REQUEST_MODIFY_CORE_3",
        {0x4E1,0x84}}
    ,{"L3_READ_REQUEST_ALL_CORE_0",
        {0x4E1,0x17}}
    ,{"L3_READ_REQUEST_ALL_CORE_1",
        {0x4E1,0x27}}
    ,{"L3_READ_REQUEST_ALL_CORE_2",
        {0x4E1,0x47}}
    ,{"L3_READ_REQUEST_ALL_CORE_3",
        {0x4E1,0x87}}
    ,{"L3_READ_REQUEST_ALL_ALL_CORES",
        {0x4E1,0xF7}}
    ,{"L3_FILLS_SHARED_CORE_0",
        {0x4E2,0x11}}
    ,{"L3_FILLS_EXCLUSIVE_CORE_0",
        {0x4E2,0x12}}
    ,{"L3_FILLS_OWNED_CORE_0",
        {0x4E2,0x14}}
    ,{"L3_FILLS_MODIFY_CORE_0",
        {0x4E2,0x18}}
    ,{"L3_FILLS_SHARED_CORE_1",
        {0x4E2,0x21}}
    ,{"L3_FILLS_EXCLUSIVE_CORE_1",
        {0x4E2,0x22}}
    ,{"L3_FILLS_OWNED_CORE_1",
        {0x4E2,0x24}}
    ,{"L3_FILLS_MODIFY_CORE_1",
        {0x4E2,0x28}}
    ,{"L3_FILLS_SHARED_CORE_2",
        {0x4E2,0x41}}
    ,{"L3_FILLS_EXCLUSIVE_CORE_2",
        {0x4E2,0x42}}
    ,{"L3_FILLS_OWNED_CORE_2",
        {0x4E2,0x44}}
    ,{"L3_FILLS_MODIFY_CORE_2",
        {0x4E2,0x48}}
    ,{"L3_FILLS_SHARED_CORE_3",
        {0x4E2,0x81}}
    ,{"L3_FILLS_EXCLUSIVE_CORE_3",
        {0x4E2,0x82}}
    ,{"L3_FILLS_OWNED_CORE_3",
        {0x4E2,0x84}}
    ,{"L3_FILLS_MODIFY_CORE_3",
        {0x4E2,0x88}}
    ,{"L3_FILLS_SHARED_ALL_CORES",
        {0x4E2,0xF1}}
    ,{"L3_FILLS_EXCLUSIVE_ALL_CORES",
        {0x4E2,0xF2}}
    ,{"L3_FILLS_OWNED_ALL_CORES",
        {0x4E2,0xF4}}
    ,{"L3_FILLS_MODIFY_ALL_CORES",
        {0x4E2,0xF8}}
    ,{"L3_FILLS_ALL_ALL_CORES",
        {0x4E2,0xFF}}
    ,{"L3_EVICTS_SHARED",
        {0x4E3,0x01}}
    ,{"L3_EVICTS_EXCLUSIVE",
        {0x4E3,0x02}}
    ,{"L3_EVICTS_OWNED",
        {0x4E3,0x04}}
    ,{"L3_EVICTS_MODIFY",
        {0x4E3,0x08}}
};
