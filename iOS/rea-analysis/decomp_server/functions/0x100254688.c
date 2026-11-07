// rea decompile_all
// name: FUN_100254688
// address: 0x100254688
// body: available
// range: 0x100254688-0x1002546ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100254688(undefined8 param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  undefined1 auVar5 [16];
  
  lVar1 = *(long *)(unaff_x20 + 0x18);
  if (lVar1 == 0) {
    FUN_1002546f0();
    uVar4 = *(undefined8 *)(unaff_x20 + 0x18);
    *(long *)(unaff_x20 + 0x10) = lVar1;
    *(long *)(unaff_x20 + 0x18) = param_2;
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRelease(uVar4);
    lVar2 = 0;
    lVar3 = lVar1;
  }
  else {
    lVar2 = lVar1;
    lVar3 = *(long *)(unaff_x20 + 0x10);
    param_2 = lVar1;
  }
  _swift_bridgeObjectRetain(lVar2);
  auVar5._8_8_ = param_2;
  auVar5._0_8_ = lVar3;
  return auVar5;
}

