// rea decompile_all
// name: FUN_10038b044
// address: 0x10038b044
// body: available
// range: 0x10038b044-0x10038b377 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10038b044(long param_1,int param_2)

{
  int iVar1;
  undefined8 uVar2;
  char *pcVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  undefined8 *local_90 [4];
  int *local_70;
  undefined8 *puStack_68;
  undefined8 local_60;
  undefined8 uStack_58;
  undefined8 local_50;
  int local_44;
  undefined8 *local_40;
  long local_38;
  
  local_38 = *(long *)(param_1 + 0xb8);
  if (local_38 != 0) {
    FUN_100392994();
  }
  local_40 = *(undefined8 **)(param_1 + 0xd0);
  if ((local_40 != (undefined8 *)0x0) && (*(char *)((long)local_40 + 0xc) == '\x01')) {
    FUN_10037dd20(*local_40,*(undefined4 *)(local_40 + 1));
  }
  FUN_10038774c(param_1);
  lVar4 = param_1;
  FUN_1003805d0();
  if (((((int)lVar4 == 0) || (lVar4 = *(long *)(param_1 + 0xa0), *(int *)(lVar4 + 0x18) < 0)) ||
      (*(long *)(lVar4 + 0x28) == 0)) || (*(long *)(lVar4 + 0x20) == 0)) {
    pcVar3 = "[%s] file not valid";
    uVar2 = 0x662;
  }
  else {
    if (*(char *)(param_1 + 0xe0) == '\x01') {
      FUN_100386734(3,"MMKV_IO.cpp","enableAutoKeyExpire",0x667,
                    "enableCompareBeforeSet will be invalid when Expiration is on");
      *(undefined1 *)(param_1 + 0xe0) = 0;
    }
    if (*(int *)(param_1 + 0xdc) != param_2) {
      FUN_100386734(1,"MMKV_IO.cpp","enableAutoKeyExpire",0x66c,"expiredInSeconds: %u");
      *(int *)(param_1 + 0xdc) = param_2;
    }
    lVar4 = 1;
    *(undefined1 *)(param_1 + 0xd8) = 1;
    if ((*(byte *)(*(long *)(param_1 + 0xa8) + 0x68) & 1) != 0) goto LAB_10038b1a0;
    if ((*(byte *)(param_1 + 0x30) >> 5 & 1) == 0) {
      if (param_2 == 0) {
        local_44 = 0;
      }
      else {
        iVar1 = 0;
        _time();
        local_44 = *(int *)(param_1 + 0xdc) + iVar1;
      }
      FUN_100386734(1,"MMKV_IO.cpp","enableAutoKeyExpire",0x67a,
                    "turn on recording expire date for all keys inside [%s] from now %u");
      lVar5 = *(long *)(param_1 + 0xa8);
      *(ulong *)(lVar5 + 0x68) = *(ulong *)(lVar5 + 0x68) | 1;
      *(undefined4 *)(lVar5 + 4) = 4;
      if ((*(long *)(*(long *)(param_1 + 0x80) + 0x28) == *(long *)(param_1 + 0x78)) &&
         (*(long *)(param_1 + 0x88) == 0)) {
        FUN_100386734(1,"MMKV_IO.cpp","enableAutoKeyExpire",0x67f,
                      "file is new, don\'t need a full writeback [%s], just update meta file");
        FUN_100387178(param_1,0,0,0,1);
        FUN_100390384(*(undefined8 *)(param_1 + 0xa0),1);
      }
      else {
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        local_70 = &local_44;
        puStack_68 = &local_60;
        lVar4 = *(long *)(*(long *)(param_1 + 0x80) + 0x20);
        if (*(long *)(param_1 + 0xb0) == 0) {
          for (plVar6 = *(long **)(*(long *)(param_1 + 0x68) + 0x10); plVar6 != (long *)0x0;
              plVar6 = (long *)*plVar6) {
            FUN_10037e108(local_90,plVar6 + 3,lVar4 + 4);
            FUN_10038b3d4(&local_70,plVar6 + 2,local_90);
            thunk_FUN_10037edac(local_90);
          }
        }
        else {
          for (plVar6 = *(long **)(*(long *)(param_1 + 0x70) + 0x10); plVar6 != (long *)0x0;
              plVar6 = (long *)*plVar6) {
            FUN_10037e5ac(local_90,plVar6 + 3,lVar4 + 4,*(undefined8 *)(param_1 + 0xb0));
            FUN_10038b3d4(&local_70,plVar6 + 2,local_90);
            thunk_FUN_10037edac(local_90);
          }
        }
        FUN_10038aec4(param_1,&local_60);
        local_90[0] = &local_60;
        FUN_10038dda4(local_90);
        lVar4 = param_1;
      }
      goto LAB_10038b1a0;
    }
    pcVar3 = "[%s] file readonly";
    uVar2 = 0x674;
  }
  FUN_100386734(2,"MMKV_IO.cpp","enableAutoKeyExpire",uVar2,pcVar3);
  lVar4 = 0;
LAB_10038b1a0:
  FUN_100385fb0(&local_40);
  FUN_100385098(&local_38);
  return lVar4;
}

