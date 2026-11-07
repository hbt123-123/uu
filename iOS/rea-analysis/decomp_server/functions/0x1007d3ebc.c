// rea decompile_all
// name: FUN_1007d3ebc
// address: 0x1007d3ebc
// body: available
// range: 0x1007d3ebc-0x1007d3f9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007d3ebc(undefined8 *param_1,long param_2,ulong param_3)

{
  ulong uVar1;
  ulong *unaff_x20;
  ulong uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [32];
  
  uVar2 = *unaff_x20;
  _swift_bridgeObjectRetain(uVar2);
  FUN_1001a2c70();
  _swift_bridgeObjectRelease(uVar2);
  if ((param_3 & 1) == 0) {
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
  }
  else {
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native();
    *unaff_x20 = 0x8000000000000000;
    if ((uVar1 & 1) == 0) {
      FUN_100063670();
    }
    uVar3 = *(undefined8 *)(*(long *)(uVar2 + 0x30) + param_2 * 0x10 + 8);
    FUN_10007f3d4(*(long *)(uVar2 + 0x38) + param_2 * 0x20,auStack_60);
    FUN_100265bfc(param_2,uVar2);
    _swift_bridgeObjectRelease(uVar3);
    uVar1 = *unaff_x20;
    *unaff_x20 = uVar2;
    _swift_bridgeObjectRelease(uVar1);
    FUN_10007f3d4(auStack_60,param_1);
  }
  return;
}

