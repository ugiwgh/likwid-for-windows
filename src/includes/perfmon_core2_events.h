#define NUM_ARCH_EVENTS_CORE2 295

static PerfmonHashEntry  core2_arch_events[NUM_ARCH_EVENTS_CORE2] = {
    {"LOAD_BLOCK_STA",
        {0x03,0x02}}
    ,{"LOAD_BLOCK_STD",
        {0x03,0x04}}
    ,{"LOAD_BLOCK_OVERLAP_STORE",
        {0x03,0x08}}
    ,{"LOAD_BLOCK_UNTIL_RETIRE",
        {0x03,0x10}}
    ,{"LOAD_BLOCK_L1D",
        {0x03,0x20}}
    ,{"SB_DRAIN_CYCLES",
        {0x04,0x01}}
    ,{"STORE_BLOCK_ORDER",
        {0x04,0x02}}
    ,{"STORE_BLOCK_SNOOP",
        {0x04,0x08}}
    ,{"SEGMENT_REG_LOADS",
        {0x06,0x00}}
    ,{"SSE_PRE_NTA",
        {0x07,0x00}}
    ,{"SSE_PRE_L1",
        {0x07,0x01}}
    ,{"SSE_PRE_L2",
        {0x07,0x02}}
    ,{"SSE_PRE_STORES",
        {0x07,0x03}}
    ,{"DTLB_MISSES_ANY",
        {0x08,0x01}}
    ,{"DTLB_MISSES_MISS_LD",
        {0x08,0x02}}
    ,{"DTLB_MISSES_L0_MISS_LD",
        {0x08,0x04}}
    ,{"DTLB_MISSES_MISS_ST",
        {0x08,0x08}}
    ,{"MEMORY_DISAMBIGUATION_RESET",
        {0x09,0x01}}
    ,{"MEMORY_DISAMBIGUATION_SUCCESS",
        {0x09,0x02}}
    ,{"PAGE_WALK_COUNT",
        {0x0C,0x01}}
    ,{"PAGE_WALK_CYCLES",
        {0x0C,0x02}}
    ,{"FP_COMP_OPS_EXE",
        {0x10,0x00}}
    ,{"FP_ASSIST",
        {0x11,0x00}}
    ,{"MUL",
        {0x12,0x00}}
    ,{"DIV",
        {0x13,0x00}}
    ,{"CYCLES_DIV_BUSY",
        {0x14,0x00}}
    ,{"IDLE_DURING_DIV",
        {0x18,0x00}}
    ,{"DELAYED_BYPASS_FP",
        {0x19,0x00}}
    ,{"DELAYED_BYPASS_SIMD",
        {0x19,0x01}}
    ,{"DELAYED_BYPASS_LOAD",
        {0x19,0x02}}
    ,{"L2_ADS_ALL_CORES",
        {0x21,0xC0}}
    ,{"L2_ADS_THIS_CORE",
        {0x21,0x40}}
    ,{"L2_DBUS_BUSY_RD_ALL_CORES",
        {0x23,0xC0}}
    ,{"L2_DBUS_BUSY_RD_THIS_CORE",
        {0x23,0x40}}
    ,{"L2_LINES_IN_ALL_CORES_ALL",
        {0x24,0xF0}}
    ,{"L2_LINES_IN_THIS_CORE_ALL",
        {0x24,0x70}}
    ,{"L2_LINES_IN_ALL_CORES_PREFETCH_ONLY",
        {0x24,0xD0}}
    ,{"L2_LINES_IN_THIS_CORE_PREFETCH_ONLY",
        {0x24,0x50}}
    ,{"L2_LINES_IN_ALL_CORES_NO_PREFETCH",
        {0x24,0xC0}}
    ,{"L2_LINES_IN_THIS_CORE_NO_PREFETCH",
        {0x24,0x40}}
    ,{"L2_M_LINES_IN_ALL_CORES",
        {0x25,0xC0}}
    ,{"L2_M_LINES_IN_THIS_CORE",
        {0x25,0x40}}
    ,{"L2_LINES_OUT_ALL_CORES_ALL",
        {0x26,0xF0}}
    ,{"L2_LINES_OUT_THIS_CORE_ALL",
        {0x26,0x70}}
    ,{"L2_LINES_OUT_ALL_CORES_PREFETCH_ONLY",
        {0x26,0xD0}}
    ,{"L2_LINES_OUT_THIS_CORE_PREFETCH_ONLY",
        {0x26,0x50}}
    ,{"L2_LINES_OUT_ALL_CORES_NO_PREFETCH",
        {0x26,0xC0}}
    ,{"L2_LINES_OUT_THIS_CORE_NO_PREFETCH",
        {0x26,0x40}}
    ,{"L2_M_LINES_OUT_ALL_CORES_ALL",
        {0x27,0xF0}}
    ,{"L2_M_LINES_OUT_THIS_CORE_ALL",
        {0x27,0x70}}
    ,{"L2_M_LINES_OUT_ALL_CORES_PREFETCH_ONLY",
        {0x27,0xD0}}
    ,{"L2_M_LINES_OUT_THIS_CORE_PREFETCH_ONLY",
        {0x27,0x50}}
    ,{"L2_M_LINES_OUT_ALL_CORES_NO_PREFETCH",
        {0x27,0xC0}}
    ,{"L2_M_LINES_OUT_THIS_CORE_NO_PREFETCH",
        {0x27,0x40}}
    ,{"L2_IFETCH_ALL_CORES_MODIFIED",
        {0x28,0xC8}}
    ,{"L2_IFETCH_ALL_CORES_EXCLUSIVE",
        {0x28,0xC4}}
    ,{"L2_IFETCH_ALL_CORES_SHARED",
        {0x28,0xC2}}
    ,{"L2_IFETCH_ALL_CORES_INVALID",
        {0x28,0xC1}}
    ,{"L2_IFETCH_ALL_CORES_MESI",
        {0x28,0xCF}}
    ,{"L2_IFETCH_THIS_CORE_MODIFIED",
        {0x28,0x48}}
    ,{"L2_IFETCH_THIS_CORE_EXCLUSIVE",
        {0x28,0x44}}
    ,{"L2_IFETCH_THIS_CORE_SHARED",
        {0x28,0x42}}
    ,{"L2_IFETCH_THIS_CORE_INVALID",
        {0x28,0x41}}
    ,{"L2_IFETCH_THIS_CORE_MESI",
        {0x28,0x4F}}
    ,{"L2_LD_ALL_CORES_ALL_MODIFIED",
        {0x29,0xF8}}
    ,{"L2_LD_ALL_CORES_ALL_EXCLUSIVE",
        {0x29,0xF4}}
    ,{"L2_LD_ALL_CORES_ALL_SHARED",
        {0x29,0xF2}}
    ,{"L2_LD_ALL_CORES_ALL_INVALID",
        {0x29,0xF1}}
    ,{"L2_LD_ALL_CORES_ALL_MESI",
        {0x29,0xFF}}
    ,{"L2_LD_THIS_CORE_ALL_MODIFIED",
        {0x29,0x78}}
    ,{"L2_LD_THIS_CORE_ALL_EXCLUSIVE",
        {0x29,0x74}}
    ,{"L2_LD_THIS_CORE_ALL_SHARED",
        {0x29,0x72}}
    ,{"L2_LD_THIS_CORE_ALL_INVALID",
        {0x29,0x71}}
    ,{"L2_LD_THIS_CORE_ALL_MESI",
        {0x29,0x7F}}
    ,{"L2_LD_ALL_CORES_PREFETCH_ONLY_MODIFIED",
        {0x29,0xD8}}
    ,{"L2_LD_ALL_CORES_PREFETCH_ONLY_EXCLUSIVE",
        {0x29,0xD4}}
    ,{"L2_LD_ALL_CORES_PREFETCH_ONLY_SHARED",
        {0x29,0xD2}}
    ,{"L2_LD_ALL_CORES_PREFETCH_ONLY_INVALID",
        {0x29,0xD1}}
    ,{"L2_LD_ALL_CORES_PREFETCH_ONLY_MESI",
        {0x29,0xDF}}
    ,{"L2_LD_THIS_CORE_PREFETCH_ONLY_MODIFIED",
        {0x29,0x58}}
    ,{"L2_LD_THIS_CORE_PREFETCH_ONLY_EXCLUSIVE",
        {0x29,0x54}}
    ,{"L2_LD_THIS_CORE_PREFETCH_ONLY_SHARED",
        {0x29,0x52}}
    ,{"L2_LD_THIS_CORE_PREFETCH_ONLY_INVALID",
        {0x29,0x51}}
    ,{"L2_LD_THIS_CORE_PREFETCH_ONLY_MESI",
        {0x29,0x5F}}
    ,{"L2_LD_ALL_CORES_NO_PREFETCH_MODIFIED",
        {0x29,0xC8}}
    ,{"L2_LD_ALL_CORES_NO_PREFETCH_EXCLUSIVE",
        {0x29,0xC4}}
    ,{"L2_LD_ALL_CORES_NO_PREFETCH_SHARED",
        {0x29,0xC2}}
    ,{"L2_LD_ALL_CORES_NO_PREFETCH_INVALID",
        {0x29,0xC1}}
    ,{"L2_LD_ALL_CORES_NO_PREFETCH_MESI",
        {0x29,0xCF}}
    ,{"L2_LD_THIS_CORE_NO_PREFETCH_MODIFIED",
        {0x29,0x48}}
    ,{"L2_LD_THIS_CORE_NO_PREFETCH_EXCLUSIVE",
        {0x29,0x44}}
    ,{"L2_LD_THIS_CORE_NO_PREFETCH_SHARED",
        {0x29,0x42}}
    ,{"L2_LD_THIS_CORE_NO_PREFETCH_INVALID",
        {0x29,0x41}}
    ,{"L2_LD_THIS_CORE_NO_PREFETCH_MESI",
        {0x29,0x4F}}
    ,{"L2_ST_ALL_CORES_MODIFIED",
        {0x2A,0xC8}}
    ,{"L2_ST_ALL_CORES_EXCLUSIVE",
        {0x2A,0xC4}}
    ,{"L2_ST_ALL_CORES_SHARED",
        {0x2A,0xC2}}
    ,{"L2_ST_ALL_CORES_INVALID",
        {0x2A,0xC1}}
    ,{"L2_ST_ALL_CORES_MESI",
        {0x2A,0xCF}}
    ,{"L2_ST_THIS_CORE_MODIFIED",
        {0x2A,0x48}}
    ,{"L2_ST_THIS_CORE_EXCLUSIVE",
        {0x2A,0x44}}
    ,{"L2_ST_THIS_CORE_SHARED",
        {0x2A,0x42}}
    ,{"L2_ST_THIS_CORE_INVALID",
        {0x2A,0x41}}
    ,{"L2_ST_THIS_CORE_MESI",
        {0x2A,0x4F}}
    ,{"L2_LOCK_ALL_CORES_MODIFIED",
        {0x2B,0xC8}}
    ,{"L2_LOCK_ALL_CORES_EXCLUSIVE",
        {0x2B,0xC4}}
    ,{"L2_LOCK_ALL_CORES_SHARED",
        {0x2B,0xC2}}
    ,{"L2_LOCK_ALL_CORES_INVALID",
        {0x2B,0xC1}}
    ,{"L2_LOCK_ALL_CORES_MESI",
        {0x2B,0xCF}}
    ,{"L2_LOCK_THIS_CORE_MODIFIED",
        {0x2B,0x48}}
    ,{"L2_LOCK_THIS_CORE_EXCLUSIVE",
        {0x2B,0x44}}
    ,{"L2_LOCK_THIS_CORE_SHARED",
        {0x2B,0x42}}
    ,{"L2_LOCK_THIS_CORE_INVALID",
        {0x2B,0x41}}
    ,{"L2_LOCK_THIS_CORE_MESI",
        {0x2B,0x4F}}
    ,{"L2_RQSTS_ALL_CORES_ALL_MODIFIED",
        {0x2E,0xF8}}
    ,{"L2_RQSTS_ALL_CORES_ALL_EXCLUSIVE",
        {0x2E,0xF4}}
    ,{"L2_RQSTS_ALL_CORES_ALL_SHARED",
        {0x2E,0xF2}}
    ,{"L2_RQSTS_ALL_CORES_ALL_INVALID",
        {0x2E,0xF1}}
    ,{"L2_RQSTS_ALL_CORES_ALL_MESI",
        {0x2E,0xFF}}
    ,{"L2_RQSTS_THIS_CORE_ALL_MODIFIED",
        {0x2E,0x78}}
    ,{"L2_RQSTS_THIS_CORE_ALL_EXCLUSIVE",
        {0x2E,0x74}}
    ,{"L2_RQSTS_THIS_CORE_ALL_SHARED",
        {0x2E,0x72}}
    ,{"L2_RQSTS_THIS_CORE_ALL_INVALID",
        {0x2E,0x71}}
    ,{"L2_RQSTS_THIS_CORE_ALL_MESI",
        {0x2E,0x7F}}
    ,{"L2_RQSTS_ALL_CORES_PREFETCH_ONLY_MODIFIED",
        {0x2E,0xD8}}
    ,{"L2_RQSTS_ALL_CORES_PREFETCH_ONLY_EXCLUSIVE",
        {0x2E,0xD4}}
    ,{"L2_RQSTS_ALL_CORES_PREFETCH_ONLY_SHARED",
        {0x2E,0xD2}}
    ,{"L2_RQSTS_ALL_CORES_PREFETCH_ONLY_INVALID",
        {0x2E,0xD1}}
    ,{"L2_RQSTS_ALL_CORES_PREFETCH_ONLY_MESI",
        {0x2E,0xDF}}
    ,{"L2_RQSTS_THIS_CORE_PREFETCH_ONLY_MODIFIED",
        {0x2E,0x58}}
    ,{"L2_RQSTS_THIS_CORE_PREFETCH_ONLY_EXCLUSIVE",
        {0x2E,0x54}}
    ,{"L2_RQSTS_THIS_CORE_PREFETCH_ONLY_SHARED",
        {0x2E,0x52}}
    ,{"L2_RQSTS_THIS_CORE_PREFETCH_ONLY_INVALID",
        {0x2E,0x51}}
    ,{"L2_RQSTS_THIS_CORE_PREFETCH_ONLY_MESI",
        {0x2E,0x5F}}
    ,{"L2_RQSTS_ALL_CORES_NO_PREFETCH_MODIFIED",
        {0x2E,0xC8}}
    ,{"L2_RQSTS_ALL_CORES_NO_PREFETCH_EXCLUSIVE",
        {0x2E,0xC4}}
    ,{"L2_RQSTS_ALL_CORES_NO_PREFETCH_SHARED",
        {0x2E,0xC2}}
    ,{"L2_RQSTS_ALL_CORES_NO_PREFETCH_INVALID",
        {0x2E,0xC1}}
    ,{"L2_RQSTS_ALL_CORES_NO_PREFETCH_MESI",
        {0x2E,0xCF}}
    ,{"L2_RQSTS_THIS_CORE_NO_PREFETCH_MODIFIED",
        {0x2E,0x48}}
    ,{"L2_RQSTS_THIS_CORE_NO_PREFETCH_EXCLUSIVE",
        {0x2E,0x44}}
    ,{"L2_RQSTS_THIS_CORE_NO_PREFETCH_SHARED",
        {0x2E,0x42}}
    ,{"L2_RQSTS_SELF_I_STATE",
        {0x2E,0x41}}
    ,{"L2_RQSTS_SELF_MESI",
        {0x2E,0x4F}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_ALL_MODIFIED",
        {0x30,0xF8}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_ALL_EXCLUSIVE",
        {0x30,0xF4}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_ALL_SHARED",
        {0x30,0xF2}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_ALL_INVALID",
        {0x30,0xF1}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_ALL_MESI",
        {0x30,0xFF}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_ALL_MODIFIED",
        {0x30,0x78}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_ALL_EXCLUSIVE",
        {0x30,0x74}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_ALL_SHARED",
        {0x30,0x72}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_ALL_INVALID",
        {0x30,0x71}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_ALL_MESI",
        {0x30,0x7F}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_PREFETCH_ONLY_MODIFIED",
        {0x30,0xD8}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_PREFETCH_ONLY_EXCLUSIVE",
        {0x30,0xD4}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_PREFETCH_ONLY_SHARED",
        {0x30,0xD2}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_PREFETCH_ONLY_INVALID",
        {0x30,0xD1}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_PREFETCH_ONLY_MESI",
        {0x30,0xDF}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_PREFETCH_ONLY_MODIFIED",
        {0x30,0x58}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_PREFETCH_ONLY_EXCLUSIVE",
        {0x30,0x54}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_PREFETCH_ONLY_SHARED",
        {0x30,0x52}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_PREFETCH_ONLY_INVALID",
        {0x30,0x51}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_PREFETCH_ONLY_MESI",
        {0x30,0x5F}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_NO_PREFETCH_MODIFIED",
        {0x30,0xC8}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_NO_PREFETCH_EXCLUSIVE",
        {0x30,0xC4}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_NO_PREFETCH_SHARED",
        {0x30,0xC2}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_NO_PREFETCH_INVALID",
        {0x30,0xC1}}
    ,{"L2_REJECT_BUSQ_ALL_CORES_NO_PREFETCH_MESI",
        {0x30,0xCF}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_NO_PREFETCH_MODIFIED",
        {0x30,0x48}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_NO_PREFETCH_EXCLUSIVE",
        {0x30,0x44}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_NO_PREFETCH_SHARED",
        {0x30,0x42}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_NO_PREFETCH_INVALID",
        {0x30,0x41}}
    ,{"L2_REJECT_BUSQ_THIS_CORE_NO_PREFETCH_MESI",
        {0x30,0x4F}}
    ,{"L2_NO_REQ_ALL_CORES",
        {0x32,0xC0}}
    ,{"L2_NO_REQ_THIS_CORE",
        {0x32,0x40}}
    ,{"EIST_TRANS",
        {0x3A,0x00}}
    ,{"THERMAL_TRIP",
        {0x3B,0xC0}}
    ,{"CPU_CLK_UNHALTED_CORE_P",
        {0x3C,0x00}}
    ,{"CPU_CLK_UNHALTED_BUS",
        {0x3C,0x01}}
    ,{"CPU_CLK_UNHALTED_NO_OTHER",
        {0x3C,0x02}}
    ,{"L1D_CACHE_LD_MODIFIED",
        {0x40,0x08}}
    ,{"L1D_CACHE_LD_EXCLUSIVE",
        {0x40,0x04}}
    ,{"L1D_CACHE_LD_SHARED",
        {0x40,0x02}}
    ,{"L1D_CACHE_LD_INVALID",
        {0x40,0x01}}
    ,{"L1D_CACHE_LD_MESI",
        {0x40,0x0F}}
    ,{"L1D_CACHE_ST_MODIFIED",
        {0x41,0x08}}
    ,{"L1D_CACHE_ST_EXCLUSIVE",
        {0x41,0x04}}
    ,{"L1D_CACHE_ST_SHARED",
        {0x41,0x02}}
    ,{"L1D_CACHE_ST_INVALID",
        {0x41,0x01}}
    ,{"L1D_CACHE_ST_MESI",
        {0x41,0x0F}}
    ,{"L1D_CACHE_LOCK_MODIFIED",
        {0x42,0x08}}
    ,{"L1D_CACHE_LOCK_EXCLUSIVE",
        {0x42,0x04}}
    ,{"L1D_CACHE_LOCK_SHARED",
        {0x42,0x02}}
    ,{"L1D_CACHE_LOCK_INVALID",
        {0x42,0x01}}
    ,{"L1D_CACHE_LOCK_MESI",
        {0x42,0x0F}}
    ,{"L1D_CACHE_LOCK_DURATION",
        {0x42,0x10}}
    ,{"L1D_ALL_REF",
        {0x43,0x01}}
    ,{"L1D_ALL_CACHE_REF",
        {0x43,0x02}}
    ,{"L1D_REPL",
        {0x45,0x0F}}
    ,{"L1D_M_REPL",
        {0x46,0x00}}
    ,{"L1D_M_EVICT",
        {0x47,0x00}}
    ,{"L1D_PEND_MISS",
        {0x48,0x00}}
    ,{"L1D_SPLIT_LOADS",
        {0x49,0x01}}
    ,{"L1D_SPLIT_STORES",
        {0x49,0x02}}
    ,{"SSE_PRE_MISS_NTA",
        {0x4B,0x00}}
    ,{"SSE_PRE_MISS_L1",
        {0x4B,0x01}}
    ,{"SSE_PRE_MISS_L2",
        {0x4B,0x02}}
    ,{"LOAD_HIT_PRE",
        {0x4C,0x00}}
    ,{"L1D_PREFETCH_REQUESTS",
        {0x4E,0x10}}
    ,{"BUS_REQUEST_OUTSTANDING_ALL_CORES_THIS_A",
        {0x60,0xC0}}
    ,{"BUS_REQUEST_OUTSTANDING_ALL_CORES_ALL_A",
        {0x60,0xE0}}
    ,{"BUS_REQUEST_OUTSTANDING_THIS_CORE_THIS_A",
        {0x60,0x40}}
    ,{"BUS_REQUEST_OUTSTANDING_THIS_CORE_ALL_A",
        {0x60,0x60}}
    ,{"BUS_BNR_DRV_THIS_A",
        {0x61,0x00}}
    ,{"BUS_BNR_DRV_ALL_A",
        {0x61,0x20}}
    ,{"BUS_DRDY_CLOCKS_THIS_A",
        {0x62,0x00}}
    ,{"BUS_DRDY_CLOCKS_ALL_A",
        {0x62,0x20}}
    ,{"BUS_LOCK_CLOCKS_ALL_CORES_THIS_A",
        {0x63,0xC0}}
    ,{"BUS_LOCK_CLOCKS_ALL_CORES_ALL_A",
        {0x63,0xE0}}
    ,{"BUS_LOCK_CLOCKS_THIS_CORE_THIS_A",
        {0x63,0x40}}
    ,{"BUS_LOCK_CLOCKS_THIS_CORE_ALL_A",
        {0x63,0x60}}
    ,{"BUS_DATA_RCV_ALL_CORES",
        {0x64,0xC0}}
    ,{"BUS_DATA_RCV_THIS_CORE",
        {0x64,0x40}}
    ,{"BUS_TRANS_BRD_ALL_CORES_THIS_A",
        {0x65,0xC0}}
    ,{"BUS_TRANS_BRD_ALL_CORES_ALL_A",
        {0x65,0xE0}}
    ,{"BUS_TRANS_BRD_THIS_CORE_THIS_A",
        {0x65,0x40}}
    ,{"BUS_TRANS_BRD_THIS_CORE_ALL_A",
        {0x65,0x60}}
    ,{"BUS_TRANS_RFO_ALL_CORES_THIS_A",
        {0x66,0xC0}}
    ,{"BUS_TRANS_RFO_ALL_CORES_ALL_A",
        {0x66,0xE0}}
    ,{"BUS_TRANS_RFO_THIS_CORE_THIS_A",
        {0x66,0x40}}
    ,{"BUS_TRANS_RFO_THIS_CORE_ALL_A",
        {0x66,0x60}}
    ,{"BUS_TRANS_WB_ALL_CORES_THIS_A",
        {0x67,0xC0}}
    ,{"BUS_TRANS_WB_ALL_CORES_ALL_A",
        {0x67,0xE0}}
    ,{"BUS_TRANS_WB_THIS_CORE_THIS_A",
        {0x67,0x40}}
    ,{"BUS_TRANS_WB_THIS_CORE_ALL_A",
        {0x67,0x60}}
    ,{"BUS_TRANS_IFETCH_ALL_CORES_THIS_A",
        {0x68,0xC0}}
    ,{"BUS_TRANS_IFETCH_ALL_CORES_ALL_A",
        {0x68,0xE0}}
    ,{"BUS_TRANS_IFETCH_THIS_CORE_THIS_A",
        {0x68,0x40}}
    ,{"BUS_TRANS_IFETCH_THIS_CORE_ALL_A",
        {0x68,0x60}}
    ,{"BUS_TRANS_INVAL_ALL_CORES_THIS_A",
        {0x69,0xC0}}
    ,{"BUS_TRANS_INVAL_ALL_CORES_ALL_A",
        {0x69,0xE0}}
    ,{"BUS_TRANS_INVAL_THIS_CORE_THIS_A",
        {0x69,0x40}}
    ,{"BUS_TRANS_INVAL_THIS_CORE_ALL_A",
        {0x69,0x60}}
    ,{"BUS_TRANS_PWR_ALL_CORES_THIS_A",
        {0x6A,0xC0}}
    ,{"BUS_TRANS_PWR_ALL_CORES_ALL_A",
        {0x6A,0xE0}}
    ,{"BUS_TRANS_PWR_THIS_CORE_THIS_A",
        {0x6A,0x40}}
    ,{"BUS_TRANS_PWR_THIS_CORE_ALL_A",
        {0x6A,0x60}}
    ,{"BUS_TRANS_P_ALL_CORES_THIS_A",
        {0x6B,0xC0}}
    ,{"BUS_TRANS_P_ALL_CORES_ALL_A",
        {0x6B,0xE0}}
    ,{"BUS_TRANS_P_THIS_CORE_THIS_A",
        {0x6B,0x40}}
    ,{"BUS_TRANS_P_THIS_CORE_ALL_A",
        {0x6B,0x60}}
    ,{"BUS_TRANS_IO_ALL_CORES_THIS_A",
        {0x6C,0xC0}}
    ,{"BUS_TRANS_IO_ALL_CORES_ALL_A",
        {0x6C,0xE0}}
    ,{"BUS_TRANS_IO_THIS_CORE_THIS_A",
        {0x6C,0x40}}
    ,{"BUS_TRANS_IO_THIS_CORE_ALL_A",
        {0x6C,0x60}}
    ,{"BUS_TRANS_DEF_ALL_CORES_THIS_A",
        {0x6D,0xC0}}
    ,{"BUS_TRANS_DEF_ALL_CORES_ALL_A",
        {0x6D,0xE0}}
    ,{"BUS_TRANS_DEF_THIS_CORE_THIS_A",
        {0x6D,0x40}}
    ,{"BUS_TRANS_DEF_THIS_CORE_ALL_A",
        {0x6D,0x60}}
    ,{"BUS_TRANS_BURST_ALL_CORES_THIS_A",
        {0x6E,0xC0}}
    ,{"BUS_TRANS_BURST_ALL_CORES_ALL_A",
        {0x6E,0xE0}}
    ,{"BUS_TRANS_BURST_THIS_CORE_THIS_A",
        {0x6E,0x40}}
    ,{"BUS_TRANS_BURST_THIS_CORE_ALL_A",
        {0x6E,0x60}}
    ,{"BUS_TRANS_MEM_ALL_CORES_THIS_A",
        {0x6F,0xC0}}
    ,{"BUS_TRANS_MEM_ALL_CORES_ALL_A",
        {0x6F,0xE0}}
    ,{"BUS_TRANS_MEM_THIS_CORE_THIS_A",
        {0x6F,0x40}}
    ,{"BUS_TRANS_MEM_THIS_CORE_ALL_A",
        {0x6F,0x60}}
    ,{"BUS_TRANS_ANY_ALL_CORES_THIS_A",
        {0x70,0xC0}}
    ,{"BUS_TRANS_ANY_ALL_CORES_ALL_A",
        {0x70,0xE0}}
    ,{"BUS_TRANS_ANY_THIS_CORE_THIS_A",
        {0x70,0x40}}
    ,{"BUS_TRANS_ANY_THIS_CORE_ALL_A",
        {0x70,0x60}}
    ,{"BR_INST_EXEC",
        {0x88,0x00}}
    ,{"BR_MISSP_EXEC",
        {0x89,0x00}}
    ,{"INST_RETIRED_ANY_P",
        {0xC0,0x00}}
    ,{"INST_RETIRED_LOADS",
        {0xC0,0x01}}
    ,{"INST_RETIRED_STORES",
        {0xC0,0x02}}
    ,{"UOPS_RETIRED_ANY",
        {0xC2,0x0F}}
    ,{"BR_INST_RETIRED_ANY",
        {0xC4,0x00}}
    ,{"BR_INST_RETIRED_PRED_NOT_TAKEN",
        {0xC4,0x01}}
    ,{"BR_INST_RETIRED_MISPRED_NOT_TAKEN",
        {0xC4,0x02}}
    ,{"BR_INST_RETIRED_PRED_TAKEN",
        {0xC4,0x04}}
    ,{"BR_INST_RETIRED_MISPRED_TAKEN",
        {0xC4,0x08}}
    ,{"BR_INST_RETIRED_TAKEN",
        {0xC4,0x0C}}
    ,{"BR_INST_RETIRED_MISPRED",
        {0xC5,0x00}}
    ,{"SIMD_INST_RETIRED_PACKED_SINGLE",
        {0xC7,0x01}}
    ,{"SIMD_INST_RETIRED_SCALAR_SINGLE",
        {0xC7,0x02}}
    ,{"SIMD_INST_RETIRED_PACKED_DOUBLE",
        {0xC7,0x04}}
    ,{"SIMD_INST_RETIRED_SCALAR_DOUBLE",
        {0xC7,0x08}}
    ,{"SIMD_INST_RETIRED_VECTOR",
        {0xC7,0x10}}
    ,{"SIMD_INST_RETIRED_ANY",
        {0xC7,0x1F}}
    ,{"SIMD_COMP_INST_RETIRED_PACKED_SINGLE",
        {0xCA,0x01}}
    ,{"SIMD_COMP_INST_RETIRED_SCALAR_SINGLE",
        {0xCA,0x02}}
    ,{"SIMD_COMP_INST_RETIRED_PACKED_DOUBLE",
        {0xCA,0x04}}
    ,{"SIMD_COMP_INST_RETIRED_SCALAR_DOUBLE",
        {0xCA,0x08}}
};

