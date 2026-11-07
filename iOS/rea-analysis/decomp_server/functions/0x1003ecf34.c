// rea decompile_all
// name: FUN_1003ecf34
// address: 0x1003ecf34
// body: available
// range: 0x1003ecf34-0x1003ed367 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retainAutoreleasedReturnValue replaced with injection:
   _objc_retain_fixup */

undefined1  [16] FUN_1003ecf34(long param_1)

{
  uint uVar1;
  ID IVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  ID IVar9;
  undefined8 uVar10;
  char *pcVar11;
  long extraout_x8;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  uint uVar15;
  long extraout_x12;
  ulong uVar16;
  ulong uVar17;
  undefined1 *puVar18;
  long lVar19;
  undefined1 auVar20 [16];
  undefined8 auStack_70 [2];
  
  lVar6 = 0;
  FUN_1005cac3c();
  lVar19 = *(long *)(lVar6 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar19 + 0x40));
  puVar8 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar18 = puVar8 + -extraout_x12;
  FUN_1003ee1c0(0x4020000000000000,0x4020000000000000);
  if (param_1 == 0) {
    (**(code **)(lVar19 + 0x68))(puVar8,4,lVar6);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar2 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar7 = puVar8;
      FUN_1005cc2b8();
      if (((ulong)puVar7 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        IVar9 = 0xd00000000000008d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008d,0x80000001008b4ff0)
        ;
        pcVar11 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        *(undefined8 *)(puVar18 + -0x10) = 0x80000001008b50c0;
        *(undefined8 *)(puVar18 + -8) = 0xe4;
        FUN_1005cc010(FUN_1003feb84,0,puVar8,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar11,
                      0xd00000000000001a);
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(pcVar11);
      }
    }
    _objc_msgSend(IVar2,"unlock");
    pcVar4 = *(code **)(lVar19 + 8);
  }
  else {
    FUN_1003ee3d4();
    if (param_1 != 0) {
      uVar12 = *(ulong *)(param_1 + 0x10);
      if (uVar12 == 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ed368);
        (*pcVar4)();
      }
      uVar13 = 0;
      uVar15 = 0;
      do {
        uVar1 = *(uint *)(param_1 + uVar13 * 4 + 0x20);
        bVar5 = CARRY4(uVar15,uVar1);
        uVar15 = uVar15 + uVar1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ed330);
          (*pcVar4)();
        }
        uVar13 = uVar13 + 1;
      } while (uVar12 != uVar13);
      if (uVar12 >> 0x20 != 0) {
                    /* WARNING: Does not return */
        pcVar4 = (code *)SoftwareBreakpoint(1,0x1003ed334);
        (*pcVar4)();
      }
      uVar17 = 0;
      uVar13 = 0;
      uVar1 = 0;
      if ((uint)uVar12 != 0) {
        uVar1 = uVar15 / (uint)uVar12;
      }
      uVar14 = 0;
      do {
        lVar6 = uVar13 * 4;
        uVar16 = 1L << (uVar13 & 0x3f);
        bVar5 = 0x3f < uVar13;
        uVar13 = uVar13 + 1;
        if (bVar5) {
          uVar16 = 0;
        }
        uVar16 = uVar16 | uVar14;
        if (uVar1 < *(uint *)(param_1 + lVar6 + 0x20)) {
          uVar14 = uVar16;
          uVar17 = uVar16;
        }
      } while (uVar12 != uVar13);
      _swift_bridgeObjectRelease(param_1);
      uVar10 = 0;
      goto LAB_1003ed308;
    }
    (**(code **)(lVar19 + 0x68))(puVar18,4,lVar6);
    if (DAT_100a89358 != -1) {
      _swift_once(&DAT_100a89358,FUN_1003fba60);
    }
    IVar2 = DAT_100a8e090;
    _objc_msgSend(DAT_100a8e090,"lock");
    lVar3 = DAT_100a8e098;
    if (DAT_100a8e098 != 0) {
      _swift_retain(DAT_100a8e098);
      puVar8 = puVar18;
      FUN_1005cc2b8();
      if (((ulong)puVar8 & 1) == 0) {
        _swift_release(lVar3);
      }
      else {
        IVar9 = 0xd00000000000008d;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd00000000000008d,0x80000001008b4ff0)
        ;
        pcVar11 = "lastPathComponent";
        IVar9 = _objc_msgSend(IVar9,"lastPathComponent");
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ(IVar9);
        *(undefined8 *)(puVar18 + -0x10) = 0x80000001008b50c0;
        *(undefined8 *)(puVar18 + -8) = 0xea;
        FUN_1005cc010(FUN_1003feb08,0,puVar18,0x65746f6d65525555,0xe800000000000000,IVar9,pcVar11,
                      0xd00000000000001a);
        _swift_release(lVar3);
        _swift_bridgeObjectRelease(pcVar11);
      }
    }
    _objc_msgSend(IVar2,"unlock");
    pcVar4 = *(code **)(lVar19 + 8);
    puVar8 = puVar18;
  }
  (*pcVar4)(puVar8,lVar6);
  uVar17 = 0;
  uVar10 = 1;
LAB_1003ed308:
  auVar20._8_8_ = uVar10;
  auVar20._0_8_ = uVar17;
  return auVar20;
}

