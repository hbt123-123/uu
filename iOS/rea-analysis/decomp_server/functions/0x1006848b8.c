// rea decompile_all
// name: FUN_1006848b8
// address: 0x1006848b8
// body: available
// range: 0x1006848b8-0x10068495f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006848b8(long *param_1,long *param_2)

{
  code *pcVar1;
  bool bVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  long lVar5;
  byte bVar6;
  
  lVar3 = *param_2;
  bVar6 = *(byte *)(param_2 + 2);
  if (bVar6 >> 6 == 0) {
    bVar2 = SCARRY8(lVar3,1);
    lVar3 = lVar3 + 1;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100684960);
      (*pcVar1)();
    }
    lVar5 = 0;
    bVar6 = 0;
  }
  else {
    lVar5 = param_2[1];
    if (bVar6 >> 6 == 1) {
      uVar4 = *(undefined8 *)(unaff_x20 + 8);
      _swift_bridgeObjectRetain(uVar4);
      bVar6 = bVar6 & 1;
      FUN_10068d8f4();
      _swift_bridgeObjectRelease(uVar4);
      bVar6 = bVar6 & 1 | 0x40;
    }
  }
  *param_1 = lVar3;
  param_1[1] = lVar5;
  *(byte *)(param_1 + 2) = bVar6;
  return;
}

