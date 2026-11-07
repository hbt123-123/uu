// rea decompile_all
// name: FUN_1007c17e4
// address: 0x1007c17e4
// body: available
// range: 0x1007c17e4-0x1007c18ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007c17e4(ulong param_1,uint param_2,code *param_3)

{
  ulong *unaff_x20;
  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  
  uVar1 = *unaff_x20;
  uVar3 = uVar1;
  _swift_isUniquelyReferencedNonObjC_nonNull_bridgeObject();
  *unaff_x20 = uVar1;
  uVar2 = 0;
  if ((((int)uVar3 != 0) && (-1 < (long)uVar1)) && ((uVar1 >> 0x3e & 1) == 0)) {
    if ((long)param_1 <= (long)(*(ulong *)((uVar1 & 0xffffffffffffff8) + 0x18) >> 1)) {
      return;
    }
    uVar2 = 1;
  }
  if (uVar1 >> 0x3e == 0) {
    uVar3 = *(ulong *)((uVar1 & 0xffffffffffffff8) + 0x10);
  }
  else {
    uVar3 = uVar1 & 0xffffffffffffff8;
    if ((long)uVar1 < 0) {
      uVar3 = uVar1;
    }
    _swift_bridgeObjectRetain(uVar1);
    __ss18_CocoaArrayWrapperV8endIndexSivg();
    _swift_bridgeObjectRelease(uVar1);
  }
  if ((long)uVar3 <= (long)param_1) {
    uVar3 = param_1;
  }
  (*param_3)(uVar2,uVar3,param_2 & 1,uVar1);
  *unaff_x20 = uVar2;
  return;
}

