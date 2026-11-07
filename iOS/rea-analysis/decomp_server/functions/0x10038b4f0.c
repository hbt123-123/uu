// rea decompile_all
// name: FUN_10038b4f0
// address: 0x10038b4f0
// body: available
// range: 0x10038b4f0-0x10038b8cb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038b4f0(long param_1)

{
  undefined8 *puVar1;
  void *pvVar2;
  ulong uVar3;
  ulong *puVar4;
  long *plVar5;
  long *plVar6;
  undefined8 uVar7;
  char *pcVar8;
  long lVar9;
  long *plVar10;
  char local_a8;
  byte local_a7;
  ulong local_a6;
  ulong *local_9e;
  long local_88;
  long *local_80;
  long *local_78;
  undefined8 *local_70;
  long local_68;
  undefined8 local_60;
  void *local_56;
  
  local_68 = *(long *)(param_1 + 0xb8);
  if (local_68 != 0) {
    FUN_100392994();
  }
  local_70 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_70 != (undefined8 *)0x0) && (*(char *)((long)local_70 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_70,*(undefined4 *)(local_70 + 1));
  }
  FUN_10038774c(param_1);
  lVar9 = param_1;
  FUN_1003805d0();
  if (((((int)lVar9 == 0) || (lVar9 = *(long *)(param_1 + 0xa0), *(int *)(lVar9 + 0x18) < 0)) ||
      (*(long *)(lVar9 + 0x28) == 0)) || (*(long *)(lVar9 + 0x20) == 0)) {
    pcVar8 = "[%s] file not valid";
    uVar7 = 0x6aa;
  }
  else {
    *(undefined4 *)(param_1 + 0xdc) = 0;
    *(undefined1 *)(param_1 + 0xd8) = 0;
    if ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x68) & 1) == 0) {
      param_1 = 1;
      goto LAB_10038b5c8;
    }
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) == 0) {
      FUN_100386734(1,"MMKV_IO.cpp","disableAutoKeyExpire",0x6b8,
                    "erase previous recorded expire date for all keys inside [%s]");
      lVar9 = *(long *)(param_1 + 0xa8);
      *(ulong *)(lVar9 + 0x68) = *(ulong *)(lVar9 + 0x68) & 0xfffffffffffffffe;
      *(undefined4 *)(lVar9 + 4) = 4;
      if ((*(long *)(*(long *)(param_1 + 0x80) + 0x28) == *(long *)(param_1 + 0x78)) &&
         (*(long *)(param_1 + 0x88) == 0)) {
        FUN_100386734(1,"MMKV_IO.cpp","disableAutoKeyExpire",0x6bd,
                      "file is new, don\'t need a full write-back [%s], just update meta file");
        FUN_100387178(param_1,0,0,0,1);
        puVar1 = (undefined8 *)(param_1 + 0xa0);
        param_1 = 1;
        FUN_100390384(*puVar1,1);
      }
      else {
        local_88 = 0;
        local_80 = (long *)0x0;
        local_78 = (long *)0x0;
        lVar9 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
        if (*(long *)(param_1 + 0xb0) == 0) {
          plVar10 = *(long **)(*(long *)(param_1 + 0x68) + 0x10);
          if (plVar10 != (long *)0x0) {
            do {
              FUN_10037e108(&local_a8,plVar10 + 3,lVar9 + 4);
              uVar3 = (ulong)local_a7;
              if (local_a8 != '\0') {
                uVar3 = local_a6;
              }
              thunk_FUN_10037e7cc(&local_60,uVar3 - 4);
              pvVar2 = (void *)((long)&local_60 + 2);
              if ((char)local_60 != '\0') {
                pvVar2 = local_56;
              }
              uVar3 = (ulong)local_a7;
              puVar4 = &local_a6;
              if (local_a8 != '\0') {
                uVar3 = local_a6;
                puVar4 = local_9e;
              }
              _memcpy(pvVar2,puVar4,uVar3 - 4);
              plVar5 = local_80;
              if (local_80 < local_78) {
                plVar6 = local_80 + 5;
                *local_80 = plVar10[2];
                FUN_10037eac4(plVar5 + 1,&local_60);
              }
              else {
                plVar6 = &local_88;
                FUN_10038bc68(plVar6,plVar10 + 2,&local_60);
              }
              local_80 = plVar6;
              thunk_FUN_10037edac(&local_60);
              thunk_FUN_10037edac(&local_a8);
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        else {
          plVar10 = *(long **)(*(long *)(param_1 + 0x70) + 0x10);
          if (plVar10 != (long *)0x0) {
            do {
              FUN_10037e5ac(&local_a8,plVar10 + 3,lVar9 + 4,*(undefined8 *)(param_1 + 0xb0));
              uVar3 = (ulong)local_a7;
              if (local_a8 != '\0') {
                uVar3 = local_a6;
              }
              thunk_FUN_10037e7cc(&local_60,uVar3 - 4);
              pvVar2 = (void *)((long)&local_60 + 2);
              if ((char)local_60 != '\0') {
                pvVar2 = local_56;
              }
              uVar3 = (ulong)local_a7;
              puVar4 = &local_a6;
              if (local_a8 != '\0') {
                uVar3 = local_a6;
                puVar4 = local_9e;
              }
              _memcpy(pvVar2,puVar4,uVar3 - 4);
              plVar5 = local_80;
              if (local_80 < local_78) {
                plVar6 = local_80 + 5;
                *local_80 = plVar10[2];
                FUN_10037eac4(plVar5 + 1,&local_60);
              }
              else {
                plVar6 = &local_88;
                FUN_10038bc68(plVar6,plVar10 + 2,&local_60);
              }
              local_80 = plVar6;
              thunk_FUN_10037edac(&local_60);
              thunk_FUN_10037edac(&local_a8);
              plVar10 = (long *)*plVar10;
            } while (plVar10 != (long *)0x0);
          }
        }
        FUN_10038aec4(param_1,&local_88);
        local_60 = &local_88;
        FUN_10038dda4(&local_60);
      }
      goto LAB_10038b5c8;
    }
    pcVar8 = "[%s] file readonly";
    uVar7 = 0x6b4;
  }
  FUN_100386734(2,"MMKV_IO.cpp","disableAutoKeyExpire",uVar7,pcVar8);
  param_1 = 0;
LAB_10038b5c8:
  FUN_100385fb0(&local_70);
  FUN_100385098(&local_68);
  return param_1;
}

