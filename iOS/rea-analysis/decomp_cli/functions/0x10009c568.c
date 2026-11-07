// rea decompile_all
// name: FUN_10009c568
// address: 0x10009c568
// body: available
// range: 0x10009c568-0x10009c5cf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10009c568(void)

{
  undefined8 *puVar1;
  ulong uVar2;
  code *pcVar3;
  ulong uVar4;
  undefined8 uVar5;
  long unaff_x20;
  undefined8 uVar6;
  undefined1 auVar7 [16];
  
  uVar2 = *(ulong *)(unaff_x20 + 0x10);
  uVar4 = *(ulong *)(unaff_x20 + 0x18) >> 1;
  if (uVar2 == uVar4) {
    uVar5 = 0;
    uVar6 = 0;
  }
  else {
    if ((long)uVar4 <= (long)uVar2) {
                    /* WARNING: Does not return */
      pcVar3 = (code *)SoftwareBreakpoint(1,0x10009c5d0);
      (*pcVar3)();
    }
    puVar1 = (undefined8 *)(*(long *)(unaff_x20 + 8) + uVar2 * 0x10);
    uVar5 = *puVar1;
    uVar6 = puVar1[1];
    *(ulong *)(unaff_x20 + 0x10) = uVar2 + 1;
    _swift_bridgeObjectRetain(uVar6);
  }
  auVar7._8_8_ = uVar6;
  auVar7._0_8_ = uVar5;
  return auVar7;
}

