// rea decompile_all
// name: FUN_100684960
// address: 0x100684960
// body: available
// range: 0x100684960-0x100684a27 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100684960(long *param_1)

{
  code *pcVar1;
  long lVar2;
  byte bVar3;
  long lVar4;
  long unaff_x20;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  byte bVar8;
  
  lVar4 = *param_1;
  bVar8 = *(byte *)(param_1 + 2);
  if (bVar8 >> 6 == 0) {
    lVar2 = lVar4 + 1;
    if (SCARRY8(lVar4,1)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100684a28);
      (*pcVar1)();
    }
    lVar7 = 0;
    bVar8 = 0;
  }
  else {
    lVar6 = param_1[1];
    lVar2 = lVar4;
    lVar7 = lVar6;
    if (bVar8 >> 6 == 1) {
      uVar5 = *(undefined8 *)(unaff_x20 + 8);
      _swift_bridgeObjectRetain(uVar5);
      bVar3 = bVar8 & 1;
      FUN_10068d8f4();
      _swift_bridgeObjectRelease(uVar5);
      FUN_100690ae8(lVar4,lVar6,bVar8);
      bVar8 = bVar3 & 1 | 0x40;
    }
  }
  *param_1 = lVar2;
  param_1[1] = lVar7;
  *(byte *)(param_1 + 2) = bVar8;
  return;
}

