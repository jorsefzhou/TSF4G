#ifndef _H_TLOG_ROLLING_FILE_H
#define _H_TLOG_ROLLING_FILE_H

#include "tlog_config_reader.h"
#include <stdio.h>

typedef struct tlog_rolling_file_instance_s
{
	FILE *fout;
	uint32_t index;
}tlog_rolling_file_instance_t;


void rolling_file_init(tlog_rolling_file_instance_t *self, const tlog_rolling_file_t *config);

void rolling_file_log(tlog_rolling_file_instance_t *self, 
		const tlog_rolling_file_t *config,
		const char *message, size_t message_size);


void rolling_file_fini(tlog_rolling_file_instance_t *self);

#endif//_H_TLOG_ROLLING_FILE_H
