// rea decompile_all
// name: FUN_1006387a0
// address: 0x1006387a0
// body: available
// range: 0x1006387a0-0x100638943 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006387a0(undefined8 param_1,undefined8 param_2,long param_3,ulong param_4)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long unaff_x20;
  long lVar7;
  long unaff_x21;
  
  lVar2 = 0;
  FUN_100636eb0(0,*(undefined8 *)(unaff_x20 + 0x58),*(undefined1 *)(unaff_x20 + 0x40));
  if (unaff_x21 == 0) {
    pcVar1 = *(code **)(unaff_x20 + 0x18);
    lVar3 = lVar2;
    _swift_bridgeObjectRetain();
    (*pcVar1)();
    _swift_bridgeObjectRelease(lVar2);
    if (lVar3 == 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638944);
      (*pcVar1)();
    }
    _swift_bridgeObjectRelease(lVar2);
    lVar7 = *(long *)(unaff_x20 + 0x30);
    lVar2 = lVar7;
    uVar4 = param_1;
    lVar6 = param_3;
    FUN_100630194(lVar7,param_1,param_2,param_3,param_4);
    _swift_unknownObjectRetain(param_1);
    FUN_100636298(uVar4,param_2,lVar6,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    _swift_unknownObjectRelease(lVar2);
    uVar5 = *(undefined8 *)(unaff_x20 + 0x88);
    *(undefined8 *)(unaff_x20 + 0x88) = uVar4;
    _swift_bridgeObjectRelease(uVar5);
    param_4 = param_4 >> 1;
    if (SBORROW8(param_4,param_3)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638928);
      (*pcVar1)();
    }
    lVar2 = param_4 - param_3;
    if (lVar7 <= (long)(param_4 - param_3)) {
      lVar2 = lVar7;
    }
    if (SBORROW8(0,lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063892c);
      (*pcVar1)();
    }
    lVar3 = param_4 + -lVar2;
    if (SCARRY8(param_4,-lVar2)) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638930);
      (*pcVar1)();
    }
    if (lVar3 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638934);
      (*pcVar1)();
    }
    if ((long)param_4 < param_3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638938);
      (*pcVar1)();
    }
    if ((long)param_4 < lVar3) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10063893c);
      (*pcVar1)();
    }
    if (lVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100638940);
      (*pcVar1)();
    }
  }
  else {
    _swift_errorRelease();
  }
  return param_1;
}

