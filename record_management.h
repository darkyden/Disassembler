// record_management.h
 
#ifndef RECORD_MANAGEMENT_H
  #define RECORD_MANAGEMENT_H
  #include "text_management.h"
 
  typedef enum {DATA, END} mode;
 
  typedef struct Record {
    unsigned char *bytecode, checksum;
    unsigned short int size, address;
    mode mode;
    struct Record *record;
  } record;
 
  record *create_record(unsigned short int, unsigned short int, mode, unsigned char *, unsigned char, record *);
  extern record *destroy_record(record *);
  record *copy_record(record *);
  record *reverse_records(record *);
  record *build_record_from_string(char *, record *);
  extern record *hex_file_to_records(char *);
  record *align_records(record *);
  extern void print_record(record *);
#endif
