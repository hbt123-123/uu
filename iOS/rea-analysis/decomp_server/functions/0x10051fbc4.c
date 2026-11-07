// rea decompile_all
// name: FUN_10051fbc4
// address: 0x10051fbc4
// body: available
// range: 0x10051fbc4-0x10051fc7b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10051fbc4(undefined8 *param_1,ulong param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  code *pcVar5;
  undefined8 *puVar6;
  undefined8 uVar7;
  long lVar8;
  long *unaff_x20;
  undefined1 auVar9 [16];
  
  puVar6 = (undefined8 *)0x48;
  if (PTR__swift_coroFrameAlloc_100995ec0 == (undefined *)0x0) {
    puVar6 = _malloc(0x48);
  }
  else {
    _swift_coroFrameAlloc(0x48,0xe48f);
  }
  *param_1 = puVar6;
  puVar6[6] = param_2;
  puVar6[7] = unaff_x20;
  lVar8 = *unaff_x20;
  puVar6[8] = lVar8;
  if (-1 < (long)param_2) {
    if (param_2 < *(ulong *)(lVar8 + 0x10)) {
      lVar8 = lVar8 + param_2 * 0x30;
      uVar2 = *(undefined8 *)(lVar8 + 0x28);
      uVar7 = *(undefined8 *)(lVar8 + 0x30);
      uVar1 = *(undefined8 *)(lVar8 + 0x40);
      uVar3 = *(undefined8 *)(lVar8 + 0x48);
      uVar4 = *(undefined1 *)(lVar8 + 0x38);
      *puVar6 = *(undefined8 *)(lVar8 + 0x20);
      puVar6[1] = uVar2;
      puVar6[2] = uVar7;
      *(undefined1 *)(puVar6 + 3) = uVar4;
      puVar6[4] = uVar1;
      puVar6[5] = uVar3;
      FUN_10051fe90();
      FUN_100008184(uVar1,uVar3);
      auVar9._8_8_ = puVar6;
      auVar9._0_8_ = FUN_10051fc7c;
      return auVar9;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10051fc7c);
    (*pcVar5)();
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10051fc78);
  (*pcVar5)();
}

