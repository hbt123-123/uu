// rea decompile_all
// name: FUN_1006377bc
// address: 0x1006377bc
// body: available
// range: 0x1006377bc-0x10063792f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_1006377bc(undefined8 param_1)

{
  code *pcVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long unaff_x20;
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
      pcVar1 = (code *)SoftwareBreakpoint(1,0x100637930);
      (*pcVar1)();
    }
    _swift_bridgeObjectRelease(lVar2);
    lVar2 = *(long *)(unaff_x20 + 0x60);
    uVar6 = *(undefined8 *)(unaff_x20 + 0x68);
    uVar7 = *(undefined8 *)(unaff_x20 + 0x70);
    uVar4 = *(undefined8 *)(unaff_x20 + 0x30);
    lVar5 = lVar2;
    FUN_1006337e0(uVar4,lVar2,uVar6,uVar7,*(undefined8 *)(unaff_x20 + 0x78));
    _swift_unknownObjectRetain(lVar2);
    FUN_100636298(lVar5,uVar6,uVar7,lVar3);
    _swift_bridgeObjectRelease(lVar3);
    _swift_unknownObjectRelease(uVar4);
    lVar2 = *(long *)(lVar5 + 0x10);
    _swift_unknownObjectRetain(param_1);
    FUN_100634a40(lVar5,lVar5 + 0x20,0,lVar2 << 1 | 1);
    _swift_bridgeObjectRelease(lVar5);
  }
  else {
    _swift_errorRelease();
    _swift_unknownObjectRetain(param_1);
  }
  return param_1;
}

