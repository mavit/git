#include "builtin.h"
#include "parse-options.h"
#include "lockfile.h"
#include "apply.h"
static const char * const apply_usage[] = {
	N_("git apply [<options>] [<patch>...]"),
	NULL
};
	if (init_apply_state(&state, prefix, &lock_file))
		exit(128);
	argc = apply_parse_options(argc, argv,
				   &state, &force_apply, &options,
				   apply_usage);
	if (check_apply_state(&state, force_apply))
		exit(128);