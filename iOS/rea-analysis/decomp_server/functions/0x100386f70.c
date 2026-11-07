// rea decompile_all
// name: FUN_100386f70
// address: 0x100386f70
// body: available
// range: 0x100386f70-0x10038713f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100386f70(ulong param_1,undefined8 param_2,int param_3)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  undefined1 *puVar4;
  undefined1 auStack_b0 [32];
  long local_90;
  undefined1 auStack_88 [32];
  long local_68;
  undefined1 auStack_60 [32];
  long local_40;
  undefined8 *local_38;
  
  if (((*(byte *)(param_1 + 0x99) & 1) == 0) && ((*(byte *)(param_1 + 0x98) & 1) == 0)) {
    uVar3 = param_1;
    FUN_1003805d0();
    if ((uVar3 & 1) == 0) {
      FUN_100386734(2,"MMKV_IO.cpp","fullWriteback",0x427,"[%s] file not valid");
      return 0;
    }
    if (((*(char *)(param_1 + 0xd8) != '\x01') || (uVar3 = param_1, FUN_100387b24(), param_3 == 0))
       || (uVar3 != 0)) {
      lVar1 = *(long *)(param_1 + 0xb0);
      if (lVar1 == 0) {
        lVar2 = *(long *)(param_1 + 0x68);
      }
      else {
        lVar2 = *(long *)(param_1 + 0x70);
      }
      if (*(long *)(lVar2 + 0x18) != 0) {
        local_38 = *(undefined8 **)(param_1 + 0xd0);
        if ((local_38 != (undefined8 *)0x0) && (*(char *)((long)local_38 + 0xc) == '\x01')) {
          FUN_10037dd20(*local_38,*(undefined4 *)(local_38 + 1));
          lVar1 = *(long *)(param_1 + 0xb0);
        }
        if (lVar1 == 0) {
          FUN_100387fd4(auStack_60,*(undefined8 *)(param_1 + 0x68));
        }
        else {
          FUN_100387e10(auStack_60,*(undefined8 *)(param_1 + 0x70));
        }
        if (local_40 == 0) {
          uVar3 = 0;
        }
        else {
          uVar3 = *(ulong *)(*(long *)(param_1 + 0x80) + 0x28);
          lVar1 = (local_40 + 4U) - uVar3;
          if (local_40 + 4U < uVar3 || lVar1 == 0) {
            puVar4 = auStack_88;
            FUN_10037eac4(auStack_88,auStack_60);
            local_68 = local_40;
            uVar3 = 1;
            FUN_1003881f4(param_1,auStack_88,param_2,1);
          }
          else {
            puVar4 = auStack_b0;
            FUN_10037eac4(auStack_b0,auStack_60);
            local_90 = local_40;
            FUN_100388048(param_1,lVar1,auStack_b0,1);
            uVar3 = param_1;
          }
          thunk_FUN_10037edac(puVar4);
        }
        thunk_FUN_10037edac(auStack_60);
        FUN_100385fb0(&local_38);
        return uVar3;
      }
      FUN_10038a14c(param_1,0);
    }
  }
  return 1;
}

