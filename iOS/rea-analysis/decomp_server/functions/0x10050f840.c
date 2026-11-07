// rea decompile_all
// name: FUN_10050f840
// address: 0x10050f840
// body: available
// range: 0x10050f840-0x10050f90b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10050f840(long param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *unaff_x20;
  undefined1 auStack_60 [32];
  
  if (*(long *)(param_1 + 0x18) == 0) {
    FUN_100040bb4(param_1,&DAT_100aaa408,&DAT_1008360c8);
    FUN_100520e3c(auStack_60,param_2,param_3);
    _swift_bridgeObjectRelease(param_3);
    FUN_100040bb4(auStack_60,&DAT_100aaa408,&DAT_1008360c8);
  }
  else {
    FUN_10007f3d4(param_1,auStack_60);
    uVar1 = *unaff_x20;
    _swift_isUniquelyReferenced_nonNull_native(uVar1);
    uVar2 = *unaff_x20;
    FUN_100521004(auStack_60,param_2,param_3,uVar1);
    _swift_bridgeObjectRelease(param_3);
    *unaff_x20 = uVar2;
  }
  return;
}

