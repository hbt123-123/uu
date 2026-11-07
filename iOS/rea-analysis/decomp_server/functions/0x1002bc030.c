// rea decompile_all
// name: FUN_1002bc030
// address: 0x1002bc030
// body: available
// range: 0x1002bc030-0x1002bc0ef inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1002bc030(undefined8 *param_1,ulong param_2,ulong param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  long *unaff_x20;
  long lVar4;
  undefined8 uVar5;
  undefined1 auVar6 [16];
  
  puVar2 = (undefined8 *)0x30;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar2 = _malloc(0x30);
  }
  else {
    _swift_coroFrameAlloc(0x30,0x126b);
  }
  *param_1 = puVar2;
  puVar2[3] = param_3;
  puVar2[4] = unaff_x20;
  puVar2[2] = param_2;
  lVar4 = *unaff_x20;
  puVar2[5] = lVar4;
  FUN_1002bbc2c(param_2,param_3,lVar4);
  if ((param_3 & 1) == 0) {
    if ((long)param_2 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bc0ec);
      (*pcVar1)();
    }
    if (*(ulong *)(lVar4 + 0x10) <= param_2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x1002bc0f0);
      (*pcVar1)();
    }
    lVar4 = lVar4 + param_2 * 0x20;
    uVar5 = *(undefined8 *)(lVar4 + 0x30);
    uVar3 = *(undefined8 *)(lVar4 + 0x38);
    _swift_bridgeObjectRetain();
  }
  else {
    uVar5 = 0;
    uVar3 = 0;
  }
  *puVar2 = uVar5;
  puVar2[1] = uVar3;
  auVar6._8_8_ = puVar2;
  auVar6._0_8_ = FUN_1002bc0f0;
  return auVar6;
}

