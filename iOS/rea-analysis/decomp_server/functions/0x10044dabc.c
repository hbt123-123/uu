// rea decompile_all
// name: FUN_10044dabc
// address: 0x10044dabc
// body: available
// range: 0x10044dabc-0x10044db43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10044dabc(undefined8 *param_1)

{
  void *pvVar1;
  undefined4 uVar2;
  ulong uVar3;
  long unaff_x20;
  undefined1 auVar4 [16];
  
  pvVar1 = (void *)0x50;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    pvVar1 = _malloc(0x50);
  }
  else {
    _swift_coroFrameAlloc(0x50,0xe644);
  }
  *param_1 = pvVar1;
  *(long *)((long)pvVar1 + 0x40) = unaff_x20;
  uVar3 = *(ulong *)(unaff_x20 + 0x58) & 0x3000000000000000;
  if (uVar3 == 0x2000000000000000 && (uVar3 & *(ulong *)(unaff_x20 + 0x48)) != 0x3000000000000000) {
    uVar2 = *(undefined4 *)(unaff_x20 + 0x20);
  }
  else {
    uVar2 = 0;
  }
  *(undefined4 *)((long)pvVar1 + 0x48) = uVar2;
  auVar4._8_8_ = (long)pvVar1 + 0x48;
  auVar4._0_8_ = FUN_10044db44;
  return auVar4;
}

