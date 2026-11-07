// rea decompile_all
// name: FUN_10039a580
// address: 0x10039a580
// body: available
// range: 0x10039a580-0x10039a5ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


code * FUN_10039a580(undefined8 *param_1)

{
  void *pvVar1;
  void *pvVar2;
  long unaff_x20;
  undefined8 uVar3;
  
  pvVar1 = (void *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x2bfe);
  }
  *param_1 = pvVar1;
  uVar3 = *(undefined8 *)(unaff_x20 + 0x28);
  *(undefined8 *)((long)pvVar1 + 0x20) = uVar3;
  _swift_retain(uVar3);
  pvVar2 = pvVar1;
  FUN_10039b4d8();
  *(void **)((long)pvVar1 + 0x28) = pvVar2;
  return thunk_FUN_10039a6ec;
}

