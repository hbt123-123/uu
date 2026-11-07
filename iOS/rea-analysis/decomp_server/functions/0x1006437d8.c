// rea decompile_all
// name: FUN_1006437d8
// address: 0x1006437d8
// body: available
// range: 0x1006437d8-0x100643877 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_1006437d8(void)

{
  code *pcVar1;
  undefined8 *puVar2;
  long lVar3;
  long lVar4;
  undefined8 *unaff_x20;
  undefined1 auStack_a8 [40];
  undefined1 auStack_80 [48];
  undefined8 local_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined1 local_30;
  
  uStack_48 = unaff_x20[1];
  local_50 = *unaff_x20;
  uStack_38 = unaff_x20[3];
  uStack_40 = unaff_x20[2];
  local_30 = *(undefined1 *)(unaff_x20 + 4);
  puVar2 = &local_50;
  FUN_1006612a4(auStack_80);
  FUN_100660be4();
  if (puVar2 == (undefined8 *)0x0) {
    FUN_100643424(&local_50,auStack_a8);
    FUN_100644548(auStack_80);
    lVar3 = 0;
  }
  else {
    lVar3 = 0;
    FUN_10065fa88();
    lVar4 = lVar3;
    FUN_100660be4();
    FUN_100643424(&local_50,auStack_a8);
    FUN_100644548(auStack_80);
    if (lVar4 < 1) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10064384c);
      (*pcVar1)();
    }
  }
  return lVar3;
}

