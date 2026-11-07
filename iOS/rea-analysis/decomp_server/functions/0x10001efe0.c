// rea decompile_all
// name: FUN_10001efe0
// address: 0x10001efe0
// body: available
// range: 0x10001efe0-0x10001f0e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001efe0(int param_1)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  byte bVar5;
  long unaff_x20;
  long lVar6;
  long lVar7;
  ulong uVar8;
  long lVar9;
  undefined1 local_80 [24];
  undefined1 auStack_68 [24];
  
  _swift_beginAccess(unaff_x20 + 0x88,auStack_68,0,0);
  lVar6 = *(long *)(unaff_x20 + 0x88);
  lVar2 = lVar6;
  _swift_bridgeObjectRetain();
  FUN_100045cc4();
  _swift_bridgeObjectRelease(lVar6);
  lVar6 = *(long *)(lVar2 + 0x10);
  if (lVar6 != 0) {
    lVar9 = 0x20;
    do {
      uVar8 = (ulong)*(uint *)(lVar2 + lVar9);
      uVar4 = 0;
      _swift_beginAccess(unaff_x20 + 0x80,local_80,0x20,0);
      lVar7 = *(long *)(unaff_x20 + 0x80);
      if ((*(long *)(lVar7 + 0x10) == 0) || (uVar3 = uVar8, thunk_FUN_1001a2c34(), (uVar4 & 1) == 0)
         ) {
        _swift_endAccess(local_80);
      }
      else {
        iVar1 = *(int *)(*(long *)(lVar7 + 0x38) + uVar3 * 4);
        _swift_endAccess(local_80);
        if (iVar1 == param_1) {
          _swift_bridgeObjectRelease(lVar2);
          bVar5 = 0;
          goto LAB_10001f0c0;
        }
      }
      lVar9 = lVar9 + 4;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  _swift_bridgeObjectRelease(lVar2);
  uVar8 = 0;
  bVar5 = 1;
LAB_10001f0c0:
  return uVar8 | (ulong)bVar5 << 0x20;
}

