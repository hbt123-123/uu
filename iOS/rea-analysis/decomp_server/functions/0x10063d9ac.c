// rea decompile_all
// name: FUN_10063d9ac
// address: 0x10063d9ac
// body: available
// range: 0x10063d9ac-0x10063dad3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


long FUN_10063d9ac(undefined8 param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long unaff_x20;
  undefined8 uVar4;
  code *pcVar5;
  undefined8 uVar6;
  
  FUN_10063dad4();
  pcVar5 = *(code **)(unaff_x20 + 0x20);
  if (pcVar5 == (code *)0x0) {
                    /* WARNING: Does not return */
    pcVar5 = (code *)SoftwareBreakpoint(1,0x10063dad0);
    (*pcVar5)();
  }
  uVar6 = *(undefined8 *)(unaff_x20 + 0x28);
  uVar4 = *(undefined8 *)(unaff_x20 + 0xa8);
  lVar2 = *(long *)(unaff_x20 + 0xb0);
  _swift_bridgeObjectRetain(lVar2);
  _swift_bridgeObjectRetain(uVar4);
  FUN_10004090c(pcVar5,uVar6);
  lVar1 = lVar2;
  FUN_10063610c(lVar2,uVar4);
  _swift_bridgeObjectRelease(lVar2);
  _swift_bridgeObjectRelease(uVar4);
  lVar3 = *(long *)(lVar1 + 0x10);
  uVar4 = *(undefined8 *)(unaff_x20 + 0x98);
  _swift_bridgeObjectRetain(uVar4);
  lVar2 = lVar1 + 0x20;
  FUN_100636298(lVar2,0,lVar3 << 1 | 1,uVar4);
  _swift_bridgeObjectRelease(uVar4);
  _swift_bridgeObjectRelease(lVar1);
  lVar1 = lVar2;
  (*pcVar5)(lVar2,lVar2 + 0x20,0,*(long *)(lVar2 + 0x10) << 1 | 1);
  _swift_bridgeObjectRelease(lVar2);
  if (lVar1 != 0) {
    FUN_10007ed2c(pcVar5,uVar6);
    lVar2 = lVar1;
    FUN_10063610c(lVar1,param_1);
    _swift_bridgeObjectRelease(param_1);
    _swift_bridgeObjectRelease(lVar1);
    return lVar2;
  }
                    /* WARNING: Does not return */
  pcVar5 = (code *)SoftwareBreakpoint(1,0x10063dad4);
  (*pcVar5)();
}

