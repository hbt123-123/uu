// rea decompile_all
// name: FUN_100505f7c
// address: 0x100505f7c
// body: available
// range: 0x100505f7c-0x100506003 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_100505f7c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  undefined8 uVar2;
  void *pvVar3;
  long lVar4;
  undefined8 *unaff_x20;
  
  pvVar1 = (void *)0x50;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xede5);
  }
  *param_1 = pvVar1;
  uVar2 = *unaff_x20;
  _swift_isUniquelyReferenced_nonNull_native(uVar2);
  pvVar3 = pvVar1;
  FUN_10050626c();
  *(void **)((long)pvVar1 + 0x40) = pvVar3;
  lVar4 = (long)pvVar1 + 0x20;
  FUN_100506040(lVar4,param_2,uVar2);
  *(long *)((long)pvVar1 + 0x48) = lVar4;
  return FUN_100506004;
}

