#ifndef _LINUX_PTCACHE_H
#define _LINUX_PTCACHE_H

#include <linux/types.h>
#include <linux/gfp_types.h>

struct mm_struct;
struct page;

struct page *ptcache_alloc(struct mm_struct *mm, gfp_t gfp);
bool ptcache_return_page(struct page *page);

#endif /* _LINUX_PTCACHE_H */
