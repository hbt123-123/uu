// rea decompile_all
// name: FUN_100592ae4
// address: 0x100592ae4
// body: available
// range: 0x100592ae4-0x100592c37 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_100592ae4(long param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  code *pcVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined8 uVar10;
  undefined1 auStack_a8 [24];
  ulong local_90;
  long lStack_88;
  undefined1 auStack_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(param_1 + 0xc0,auStack_68,0,0);
  uVar8 = *(ulong *)(param_1 + 0xd0);
  if (uVar8 != 0) {
    uVar10 = *(undefined8 *)(param_1 + 0xd8);
    uVar1 = *(undefined8 *)(param_1 + 0xc0);
    uVar2 = *(undefined8 *)(param_1 + 200);
    FUN_100008184(uVar1,uVar2);
    uVar5 = uVar8;
    _swift_bridgeObjectRetain();
    FUN_100510c38();
    FUN_100541944(uVar1,uVar2,uVar8,uVar10);
    if ((uVar5 & 1) == 0) {
      return 0;
    }
  }
  _swift_beginAccess(param_1 + 0xe0,auStack_80,0,0);
  lVar9 = *(long *)(param_1 + 0xe0);
  lVar6 = lVar9;
  _swift_bridgeObjectRetain();
  FUN_10056a264();
  _swift_bridgeObjectRelease(lVar9);
  lVar7 = *(long *)(lVar6 + 0x10);
  uVar8 = 0xffffffffffffffff;
  lVar9 = lVar6 + 0x20;
  while( true ) {
    if (uVar8 - lVar7 == -1) {
      _swift_bridgeObjectRelease(lVar6);
      return 1;
    }
    uVar8 = uVar8 + 1;
    if (*(ulong *)(lVar6 + 0x10) <= uVar8) break;
    FUN_1000b142c(lVar9,auStack_a8);
    lVar3 = lStack_88;
    uVar5 = local_90;
    FUN_10003f030(auStack_a8,local_90);
    (**(code **)(lVar3 + 0x20))(uVar5,lVar3);
    FUN_10003f094(auStack_a8);
    lVar9 = lVar9 + 0x28;
    if ((uVar5 & 1) == 0) {
      _swift_bridgeObjectRelease(lVar6);
      return 0;
    }
  }
                    /* WARNING: Does not return */
  pcVar4 = (code *)SoftwareBreakpoint(1,0x100592c38);
  (*pcVar4)();
}

