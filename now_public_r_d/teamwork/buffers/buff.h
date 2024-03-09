/*
 * Written by:
 *	James Ross
 *
 * filename:
 *	buff.h
 *
 * holds the functions that define buffer functionality
 */


typedef struct buffer {
	char *buff
	size_t size;
	long flags;
};


int setup_buff(struct *buffer, size_t size, long flags);

int set_instant_drain(struct *buffer);

int drain_buffer_waves(struct *buffer);

int drain_buffer_sigint(struct *buffer);
