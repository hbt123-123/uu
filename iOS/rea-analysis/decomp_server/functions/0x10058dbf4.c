// rea decompile_all
// name: thunk_FUN_10058fbd0
// address: 0x10058dbf4
// body: available
// range: 0x10058dbf4-0x10058dbf7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 thunk_FUN_10058fbd0(void)

{
  long lVar1;
  code *pcVar2;
  ulong uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  long *unaff_x20;
  long lVar7;
  undefined1 auStack_78 [24];
  ulong uStack_60;
  long lStack_58;
  
  uVar3 = unaff_x20[3];
  FUN_100510c38();
  if ((uVar3 & 1) != 0) {
    uVar3 = unaff_x20[7];
    if (uVar3 != 0) {
      lVar7 = unaff_x20[8];
      lVar6 = unaff_x20[5];
      lVar5 = unaff_x20[6];
      FUN_100008184(lVar6,lVar5);
      uVar4 = uVar3;
      _swift_bridgeObjectRetain();
      FUN_100510c38();
      FUN_100541944(lVar6,lVar5,uVar3,lVar7);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
    }
    lVar5 = *unaff_x20;
    FUN_10056a264();
    lVar7 = *(long *)(lVar5 + 0x10);
    uVar3 = 0xffffffffffffffff;
    lVar6 = lVar5 + 0x20;
    do {
      if (uVar3 - lVar7 == -1) {
        _swift_bridgeObjectRelease(lVar5);
        return 1;
      }
      uVar3 = uVar3 + 1;
      if (*(ulong *)(lVar5 + 0x10) <= uVar3) {
                    /* WARNING: Does not return */
        pcVar2 = (code *)SoftwareBreakpoint(1,0x10058fcf4);
        (*pcVar2)();
      }
      FUN_1000b142c(lVar6,auStack_78);
      lVar1 = lStack_58;
      uVar4 = uStack_60;
      FUN_10003f030(auStack_78,uStack_60);
      (**(code **)(lVar1 + 0x20))(uVar4,lVar1);
      FUN_10003f094(auStack_78);
      lVar6 = lVar6 + 0x28;
    } while ((uVar4 & 1) != 0);
    _swift_bridgeObjectRelease(lVar5);
  }
  return 0;
}

