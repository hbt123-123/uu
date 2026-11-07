// rea decompile_all
// name: FUN_10048c734
// address: 0x10048c734
// body: available
// range: 0x10048c734-0x10048c86f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10048c734(long param_1,undefined8 param_2,undefined8 param_3,long param_4)

{
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  long unaff_x21;
  code *pcVar4;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0x10,auStack_68,0,0);
  if ((*(int *)(param_1 + 0x10) == 0) ||
     ((**(code **)(param_4 + 0x18))(*(int *)(param_1 + 0x10),1,param_3,param_4), unaff_x21 == 0)) {
    _swift_beginAccess(param_1 + 0x18,auStack_80,0,0);
    uVar2 = *(ulong *)(param_1 + 0x18);
    uVar3 = *(ulong *)(param_1 + 0x20);
    uVar1 = uVar2 & 0xffffffffffff;
    if ((uVar3 & 0x2000000000000000) != 0) {
      uVar1 = uVar3 >> 0x38 & 0xf;
    }
    if (uVar1 != 0) {
      pcVar4 = *(code **)(param_4 + 0x70);
      _swift_bridgeObjectRetain(uVar3);
      (*pcVar4)(uVar2,uVar3,2,param_3,param_4);
      _swift_bridgeObjectRelease(uVar3);
      if (unaff_x21 != 0) {
        return;
      }
    }
    FUN_10048c870(param_1,param_2,param_3,param_4);
    if (unaff_x21 == 0) {
      FUN_10048c920(param_1,param_2,param_3,param_4);
      FUN_10048ca0c(param_1,param_2,param_3,param_4);
    }
  }
  return;
}

