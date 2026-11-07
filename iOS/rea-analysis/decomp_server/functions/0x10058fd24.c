// rea decompile_all
// name: FUN_10058fd24
// address: 0x10058fd24
// body: available
// range: 0x10058fd24-0x10058fe4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x00010058fe48) */

void FUN_10058fd24(long param_1,undefined8 param_2,long param_3,ulong param_4)

{
  long lVar1;
  ulong uVar2;
  code *pcVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_68 [24];
  
  pcVar4 = *(code **)(param_4 + 0x10);
  lVar1 = param_3;
  uVar2 = param_4;
  (*pcVar4)();
  if (unaff_x21 == 0) {
    while ((uVar2 & 1) == 0) {
      if (lVar1 == 3) {
        FUN_10058fe4c(param_2,param_1,param_3,param_4,FUN_1005a955c,&DAT_1009d55b8);
      }
      else {
        if (lVar1 == 2) {
          _swift_beginAccess(param_1 + 0x20,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x50);
          lVar1 = param_1 + 0x20;
        }
        else {
          if (lVar1 != 1) goto LAB_10058fdb4;
          _swift_beginAccess(param_1 + 0x10,auStack_68,0x21,0);
          pcVar3 = *(code **)(param_4 + 0x158);
          lVar1 = param_1 + 0x10;
        }
        (*pcVar3)(lVar1,param_3,param_4);
        _swift_endAccess(auStack_68);
      }
LAB_10058fdb4:
      lVar1 = param_3;
      uVar2 = param_4;
      (*pcVar4)();
    }
  }
  return;
}

