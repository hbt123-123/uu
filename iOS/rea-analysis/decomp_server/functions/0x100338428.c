// rea decompile_all
// name: FUN_100338428
// address: 0x100338428
// body: available
// range: 0x100338428-0x10033851f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_100338428(void)

{
  code *pcVar1;
  bool bVar2;
  ulong uVar3;
  ulong uVar4;
  long unaff_x20;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x38,auStack_68,0,0);
  uVar4 = *(ulong *)(unaff_x20 + 0x38);
  uVar8 = uVar4 & 0xffffffffffffff8;
  if (uVar4 >> 0x3e == 0) {
    uVar5 = *(ulong *)(uVar8 + 0x10);
  }
  else {
    uVar5 = uVar8;
    if ((long)uVar4 < 0) {
      uVar5 = uVar4;
    }
    __ss18_CocoaArrayWrapperV8endIndexSivg();
  }
  _swift_bridgeObjectRetain(uVar4);
  uVar7 = 0;
  uVar6 = 0;
  while( true ) {
    if (uVar5 == uVar7) {
      _swift_bridgeObjectRelease(uVar4);
      return uVar6;
    }
    if ((uVar4 & 0xc000000000000001) == 0) {
      if (*(ulong *)(uVar8 + 0x10) <= uVar7) {
                    /* WARNING: Does not return */
        pcVar1 = (code *)SoftwareBreakpoint(1,0x100338508);
        (*pcVar1)();
      }
      uVar3 = *(ulong *)(uVar4 + uVar7 * 8 + 0x20);
      _swift_retain();
    }
    else {
      uVar3 = uVar7;
      FUN_1002d3c7c(uVar7,uVar4);
    }
    if (SCARRY8(uVar7,1)) break;
    uVar3 = *(ulong *)(uVar3 + 0x20);
    _swift_release();
    uVar7 = uVar7 + 1;
    bVar2 = CARRY8(uVar6,uVar3);
    uVar6 = uVar6 + uVar3;
    if (bVar2) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)SoftwareBreakpoint(1,0x10033850c);
      (*pcVar1)();
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)SoftwareBreakpoint(1,0x1003384dc);
  (*pcVar1)();
}

