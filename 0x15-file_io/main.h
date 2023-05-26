#ifndef fileIO_Header
#define fileIO_Header

/*tasks's functions prototypes*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void prnt_hx_byts(unsigned char *byts, size_t numb_byts);
char *gt_lf_typ_strn(uint16_t e_type);
#endif
