// rea decompile_all
// name: FUN_100684004
// address: 0x100684004
// body: available
// range: 0x100684004-0x1006840f7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100684004(long *param_1,long *param_2,long param_3)

{
  long lVar1;
  long lVar2;
  code *pcVar3;
  long lVar4;
  uint uVar5;
  long unaff_x20;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  
  if (param_3 < 0) {
                    /* WARNING: Does not return */
    pcVar3 = (code *)SoftwareBreakpoint(1,0x1006840f8);
    (*pcVar3)();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 8);
  uVar7 = (uint)*(byte *)(param_2 + 2);
  lVar1 = *param_2;
  lVar2 = param_2[1];
  FUN_100690ab4(lVar1,lVar2,uVar7);
  do {
    if (param_3 == 0) {
      *param_1 = lVar1;
      param_1[1] = lVar2;
      *(char *)(param_1 + 2) = (char)uVar7;
      return;
    }
    if (uVar7 >> 6 == 0) {
      lVar4 = lVar1 + 1;
      if (SCARRY8(lVar1,1)) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1006840f4);
        (*pcVar3)();
      }
      lVar8 = 0;
      uVar7 = 0;
    }
    else {
      lVar4 = lVar1;
      lVar8 = lVar2;
      if (uVar7 >> 6 == 1) {
        _swift_bridgeObjectRetain(uVar6);
        uVar5 = uVar7 & 1;
        FUN_10068d8f4();
        _swift_bridgeObjectRelease(uVar6);
        FUN_100690ae8(lVar1,lVar2,uVar7);
        uVar7 = uVar5 & 1 | 0x40;
      }
    }
    param_3 = param_3 + -1;
    lVar1 = lVar4;
    lVar2 = lVar8;
  } while( true );
}

