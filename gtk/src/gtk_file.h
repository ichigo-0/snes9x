#ifndef __GTK_FILE_H
#define __GTK_FILE_H

char *S9xOpenROMDialog (void);
const char *S9xBasenameNoExt (const char *);

void S9xLoadState (const char *filename);
void S9xSaveState (const char *filename);

void S9xQuickSaveSlot (int slot);
void S9xQuickLoadSlot (int slot);

int S9xPickSlot ();

#define OLD_SLOT_NUM -1

#endif /* __GTK_FILE_H */
