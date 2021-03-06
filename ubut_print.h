#ifndef UBUT_PRINT_INC_
#define UBUT_PRINT_INC_

#ifdef DBJ_UBUT_SIMPLE_LOG
// NOTE: host app must include dbj_simple_log_host.h
// for dbj simplelog setup and init
// to use your macros
#define DBJ_SIMPLELOG_USER_DEFINED_MACRO_NAMES
#include <simplelog/dbj_simple_log.h>

#undef UBUT_TRACE
#undef UBUT_DEBUG
#undef UBUT_INFO
#undef UBUT_WARN
#undef UBUT_ERROR
#undef UBUT_FATAL

#define UBUT_TRACE(...) dbj_log_trace(__VA_ARGS__)
#define UBUT_DEBUG(...) dbj_log_debug(__VA_ARGS__)
#define UBUT_INFO(...) dbj_log_info(__VA_ARGS__)
#define UBUT_WARN(...) dbj_log_warn(__VA_ARGS__)
#define UBUT_ERROR(...) dbj_log_error(__VA_ARGS__)
#define UBUT_FATAL(...) dbj_log_fatal(__VA_ARGS__)
#endif // ! DBJ_UBUT_SIMPLE_LOG

#endif // UBUT_PRINT_INC_
