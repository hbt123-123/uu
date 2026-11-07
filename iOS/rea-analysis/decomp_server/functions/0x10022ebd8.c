// rea decompile_all
// name: FUN_10022ebd8
// address: 0x10022ebd8
// body: available
// range: 0x10022ebd8-0x10022ed0f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022ebd8(ulong param_1,long param_2,ulong param_3)

{
  code *pcVar1;
  ulong uVar2;
  undefined1 uVar3;
  long *plVar4;
  ulong uVar5;
  ulong uVar6;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_2 + 0x10,auStack_68,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  if (param_2 != 0) {
    _swift_release();
    if (param_3 >> 0x3e == 0) {
      uVar5 = *(ulong *)((param_3 & 0xffffffffffffff8) + 0x10);
    }
    else {
      uVar5 = param_3 & 0xffffffffffffff8;
      if ((long)param_3 < 0) {
        uVar5 = param_3;
      }
      __ss18_CocoaArrayWrapperV8endIndexSivg();
    }
    if (uVar5 != 0) {
      if ((long)uVar5 < 1) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x10022ed10);
        (*pcVar1)();
      }
      if ((param_3 & 0xc000000000000001) == 0) {
        plVar4 = (long *)(param_3 + 0x20);
        uVar3 = 2;
        if ((param_1 & 1) == 0) {
          uVar3 = 3;
        }
        do {
          *(undefined1 *)(*plVar4 + FCountEvent::status) = uVar3;
          uVar5 = uVar5 - 1;
          plVar4 = plVar4 + 1;
        } while (uVar5 != 0);
      }
      else {
        uVar6 = 0;
        uVar3 = 2;
        if ((param_1 & 1) == 0) {
          uVar3 = 3;
        }
        do {
          uVar2 = uVar6;
          FUN_10016a54c(uVar6,param_3,FUN_100232e2c,0x746e657645,0xe500000000000000);
          uVar6 = uVar6 + 1;
          *(undefined1 *)(uVar2 + FCountEvent::status) = uVar3;
          _swift_unknownObjectRelease();
        } while (uVar5 != uVar6);
      }
    }
  }
  return;
}

