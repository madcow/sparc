#ifndef SP_SYSTEM_SYS_H
#define SP_SYSTEM_SYS_H

int     sp_sys_init(void);
void    sp_sys_shutdown(int code);

// ==============================================
//   MEMORY SUBSYSTEM
// ==============================================

void *  sp_sys_mem_alloc(int size);
void    sp_sys_mem_free(void *ptr);

// ==============================================
//   MEMORY SUBSYSTEM
// ==============================================

void    sp_sys_input_update(void);
void    sp_sys_input_show_mouse(bool show);

// ==============================================
//   MEMORY SUBSYSTEM
// ==============================================

void    sp_sys_error(const char *fmt, ...);

// ==============================================
//   MEMORY SUBSYSTEM
// ==============================================

void    sp_sys_render_update(void);

#endif // SP_SYSTEM_SYS_H
