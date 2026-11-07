// rea decompile_all
// name: FUN_10038ab8c
// address: 0x10038ab8c
// body: available
// range: 0x10038ab8c-0x10038ae0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010038ade0) */
/* WARNING: Removing unreachable block (ram,0x00010038acf4) */
/* WARNING: Removing unreachable block (ram,0x00010038add0) */
/* WARNING: Removing unreachable block (ram,0x00010038adf0) */

uint FUN_10038ab8c(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  long lVar2;
  uint uVar3;
  uint **local_f0;
  uint *local_e8;
  undefined4 local_e0;
  undefined1 local_dc;
  uint local_d8 [2];
  undefined8 local_d0;
  undefined8 uStack_c8;
  void *local_c0;
  undefined8 uStack_b8;
  char cStack_a9;
  undefined1 auStack_a0 [24];
  uint local_88;
  long local_80;
  void *local_78;
  undefined8 uStack_70;
  char cStack_61;
  char local_60 [24];
  undefined1 local_48 [24];
  
  if (DAT_100b366d8 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_10037fd50(local_48);
    FUN_10037f1a0(local_60,param_1,1,param_2);
    uVar1 = 0;
    FUN_100390428();
    if ((uVar1 & 1) == 0) {
      FUN_100386734(2,"MMKV_IO.cpp","removeStorage",0x618,"file not exist %s");
      uVar3 = 0;
    }
    else {
      FUN_10037f388(&local_78,param_1,1,param_2);
      uVar1 = 0;
      FUN_100390428();
      if ((uVar1 & 1) == 0) {
        FUN_100386734(2,"MMKV_IO.cpp","removeStorage",0x61d,"file not exist %s");
        uVar3 = 0;
      }
      else {
        FUN_100386734(1,"MMKV_IO.cpp","removeStorage",0x621,"remove storage [%s]");
        local_80 = DAT_100b366d8;
        if (DAT_100b366d8 != 0) {
          FUN_100392994();
        }
        uStack_b8 = uStack_70;
        local_c0 = local_78;
        cStack_a9 = cStack_61;
        thunk_FUN_10038f858(auStack_a0,&local_c0,1);
        if (cStack_a9 < '\0') {
          operator_delete(local_c0);
        }
        if (-1 < (int)local_88) {
          local_d8[0] = local_88;
          local_d0 = 0;
          uStack_c8 = 0;
          local_e8 = local_d8;
          local_e0 = 1;
          local_dc = 1;
          local_f0 = &local_e8;
          FUN_10037dd20(local_d8,1);
          lVar2 = DAT_100b366d0;
          FUN_1003850cc(DAT_100b366d0,local_48);
          if (lVar2 != 0) {
            FUN_1003801c8(*(undefined8 *)(lVar2 + 0x28));
          }
          _unlink(local_60);
          _unlink((char *)&local_78);
          FUN_100385fb0(&local_f0);
        }
        uVar3 = ~local_88 >> 0x1f;
        FUN_100384c70(auStack_a0);
        FUN_100385098(&local_80);
      }
    }
  }
  return uVar3;
}

