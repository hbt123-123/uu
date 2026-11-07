// rea decompile_all
// name: FUN_100021190
// address: 0x100021190
// body: available
// range: 0x100021190-0x1000213e7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100021190(ID param_1,ulong param_2)

{
  int iVar1;
  ulong uVar2;
  ID IVar3;
  ID IVar4;
  undefined1 *puVar5;
  undefined8 uVar6;
  long unaff_x20;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long lVar10;
  uint *puVar11;
  undefined1 auStack_e0 [16];
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x80,auStack_78,0,0);
  lVar7 = *(long *)(unaff_x20 + 0x80);
  lVar10 = lVar7;
  _swift_bridgeObjectRetain();
  FUN_10003a168();
  _swift_bridgeObjectRelease(lVar7);
  lVar7 = lVar10;
  FUN_100013b54();
  _swift_release(lVar10);
  lVar10 = *(long *)(lVar7 + 0x10);
  if (lVar10 != 0) {
    puVar11 = (uint *)(lVar7 + 0x20);
    do {
      uVar9 = (ulong)*puVar11;
      puVar5 = auStack_98;
      _swift_beginAccess(unaff_x20 + 0x80,puVar5,0x21,0);
      uVar2 = uVar9;
      thunk_FUN_1001a2c34(uVar9);
      if (((ulong)puVar5 & 1) != 0) {
        iVar1 = (int)*(undefined8 *)(unaff_x20 + 0x80);
        _swift_isUniquelyReferenced_nonNull_native();
        uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
        *(undefined8 *)(unaff_x20 + 0x80) = 0x8000000000000000;
        if (iVar1 == 0) {
          FUN_100062dac();
        }
        FUN_10006bfd0(uVar2,uVar8);
        *(undefined8 *)(unaff_x20 + 0x80) = uVar8;
      }
      _swift_endAccess(auStack_98);
      _swift_beginAccess(unaff_x20 + 0x88,auStack_98,0x21,0);
      FUN_1001df648(uVar9);
      _swift_endAccess(auStack_98);
      lVar10 = lVar10 + -1;
      puVar11 = puVar11 + 1;
    } while (lVar10 != 0);
  }
  _swift_bridgeObjectRelease(lVar7);
  IVar3 = _objc_msgSend(param_1,"screenId");
  IVar4 = _objc_msgSend(param_1,"videoTrackIndex");
  _swift_beginAccess(unaff_x20 + 0x80,auStack_98,0x21,0);
  uVar8 = *(undefined8 *)(unaff_x20 + 0x80);
  _swift_isUniquelyReferenced_nonNull_native(uVar8);
  uVar6 = *(undefined8 *)(unaff_x20 + 0x80);
  *(undefined8 *)(unaff_x20 + 0x80) = 0x8000000000000000;
  FUN_100060bbc(IVar4,IVar3,uVar8);
  *(undefined8 *)(unaff_x20 + 0x80) = uVar6;
  _swift_endAccess(auStack_98);
  if ((param_2 & 1) != 0) {
    FUN_100039cd0(param_1,*(undefined8 *)(unaff_x20 + 0x10));
  }
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  FUN_1003fb48c(FUN_10003f794,auStack_e0,0xd0000000000000a9,0x8000000100877660,0xd000000000000029,
                0x8000000100878630,0x8f0,0);
  return;
}

