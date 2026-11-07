// rea decompile_all
// name: FUN_100510b18
// address: 0x100510b18
// body: available
// range: 0x100510b18-0x100510bb3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_100510b18(undefined8 *param_1,ulong param_2)

{
  undefined8 *puVar1;
  ulong uVar2;
  long *unaff_x20;
  long lVar3;
  undefined1 auVar4 [16];
  
  puVar1 = (undefined8 *)0x88;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    uVar2 = param_2;
    puVar1 = _malloc(0x88);
  }
  else {
    uVar2 = 0x2d1b;
    _swift_coroFrameAlloc();
  }
  *param_1 = puVar1;
  puVar1[0xf] = param_2;
  puVar1[0x10] = unaff_x20;
  lVar3 = *unaff_x20;
  if ((*(long *)(lVar3 + 0x10) == 0) || (FUN_1003618e4(param_2), (uVar2 & 1) == 0)) {
    puVar1[4] = 0;
    puVar1[1] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    puVar1[2] = 0;
  }
  else {
    FUN_1000b142c(*(long *)(lVar3 + 0x38) + param_2 * 0x28,puVar1);
  }
  auVar4._8_8_ = puVar1;
  auVar4._0_8_ = FUN_100510bb4;
  return auVar4;
}

