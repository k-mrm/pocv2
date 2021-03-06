#ifndef MVMM_VM_H
#define MVMM_VM_H

#include "types.h"
#include "param.h"
#include "vgic.h"
#include "spinlock.h"
#include "guest.h"

struct mmio_access;
struct mmio_info;
struct vcpu;

struct vmmap_entry {
  u64 start_ipa; 
  u64 size; 
};

struct vmconfig {
  struct guest *guest_img;
  struct guest *fdt_img;
  struct guest *initrd_img;
  int nvcpu;
  u64 nallocate;
  u64 entrypoint;
  struct vmmap_entry *vmmap;
};


#endif
