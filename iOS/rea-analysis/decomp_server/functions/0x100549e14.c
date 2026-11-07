// rea decompile_all
// name: FUN_100549e14
// address: 0x100549e14
// body: available
// range: 0x100549e14-0x100549f27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100549e14(undefined8 *param_1,long param_2,ulong param_3,long param_4,long param_5)

{
  long lVar1;
  code *pcVar2;
  long lVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  undefined1 auStack_88 [24];
  long local_70;
  long lStack_68;
  
  if ((*(long *)(param_5 + 0x10) != 0) && (FUN_1003618e4(), (param_3 & 1) != 0)) {
    lVar4 = *(long *)(*(long *)(param_5 + 0x38) + param_4 * 8);
    uVar6 = *(ulong *)(lVar4 + 0x10);
    _swift_bridgeObjectRetain(lVar4);
    if (uVar6 != 0) {
      uVar7 = 0;
      lVar5 = lVar4 + 0x20;
      do {
        if (*(ulong *)(lVar4 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)SoftwareBreakpoint(1,0x100549f28);
          (*pcVar2)();
        }
        FUN_1000b142c(lVar5,auStack_88);
        lVar1 = lStack_68;
        lVar3 = local_70;
        FUN_10003f030(auStack_88,local_70);
        (**(code **)(lVar1 + 0x18))(lVar3,lVar1);
        if (lVar3 == param_2) {
          _swift_bridgeObjectRelease(lVar4);
          FUN_1000b142c(auStack_88,param_1);
          FUN_10003f094(auStack_88);
          return;
        }
        uVar7 = uVar7 + 1;
        FUN_10003f094(auStack_88);
        lVar5 = lVar5 + 0x28;
      } while (uVar6 != uVar7);
    }
    _swift_bridgeObjectRelease(lVar4);
  }
  param_1[4] = 0;
  param_1[1] = 0;
  *param_1 = 0;
  param_1[3] = 0;
  param_1[2] = 0;
  return;
}

