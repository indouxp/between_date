#ifndef BETWEEN_DATE_H
typedef struct {
	char yyyy[4];
	char mm[2];
	char dd[2];
} ymd;

int between_ymd(char *from_ymd, char *to_ymd);
#endif
