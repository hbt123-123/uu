// rea decompile_all
// name: FUN_100075dc8
// address: 0x100075dc8
// body: available
// range: 0x100075dc8-0x1000760a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_100075dc8(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  undefined4 uVar4;
  code *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined8 uVar8;
  ulong uVar9;
  long unaff_x20;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  undefined1 auStack_c0 [16];
  uint local_b0;
  int iStack_ac;
  char *local_a0;
  char *pcStack_98;
  long local_90;
  long lStack_88;
  undefined1 auStack_78 [24];
  
  _swift_beginAccess(unaff_x20 + 0x70,auStack_78,0,0);
  lVar10 = *(long *)(unaff_x20 + 0x70);
  lVar7 = lVar10;
  _swift_bridgeObjectRetain();
  FUN_10004b550();
  _swift_bridgeObjectRelease(lVar10);
  lVar10 = lVar7;
  FUN_100074ee0(lVar7,PTR___ss6UInt32VN_100995dc0,PTR___ss6UInt32VSHsWP_100995dd0,&DAT_100a761e0,
                &DAT_10080a978);
  _swift_bridgeObjectRelease();
  FUN_10004c86c();
  uVar13 = *(ulong *)(lVar7 + 0x10);
  if (uVar13 != 0) {
    uVar11 = 0;
    lVar1 = lVar7 + 0x20;
    lVar2 = lVar10 + 0x38;
    local_a0 = "ilable displayID:";
    pcStack_98 = "oncile";
    local_90 = lVar7;
    lStack_88 = lVar10;
    do {
      if (*(ulong *)(lVar7 + 0x10) <= uVar11) {
                    /* WARNING: Does not return */
        pcVar5 = (code *)SoftwareBreakpoint(1,0x1000760a4);
        (*pcVar5)();
      }
      uVar3 = *(uint *)(lVar1 + uVar11 * 4);
      uVar12 = (ulong)uVar3;
      if (*(long *)(lVar10 + 0x10) != 0) {
        uVar6 = *(ulong *)(lVar10 + 0x28);
        __ss6HasherV5_hash4seed5bytes5countS2i_s6UInt64VSitFZ(uVar6,uVar12,4);
        uVar9 = -1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
        uVar6 = uVar6 & (uVar9 ^ 0xffffffffffffffff);
        if ((*(ulong *)(lVar2 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0) {
          do {
            if (*(uint *)(*(long *)(lVar10 + 0x30) + uVar6 * 4) == uVar3) goto LAB_100075ea8;
            uVar6 = uVar6 + 1 & ~uVar9;
          } while ((*(ulong *)(lVar2 + (uVar6 >> 3 & 0xffffffffffffff8)) >> (uVar6 & 0x3f) & 1) != 0
                  );
        }
      }
      uVar6 = uVar12;
      _CGDisplayCreateUUIDFromDisplayID();
      if (uVar6 != 0) {
        lVar7 = 0;
        _CFUUIDCreateString();
        if (lVar7 == 0) {
                    /* WARNING: Does not return */
          pcVar5 = (code *)SoftwareBreakpoint(1,0x1000760a8);
          (*pcVar5)();
        }
        __sSS10FoundationE36_unconditionallyBridgeFromObjectiveCySSSo8NSStringCSgFZ();
        if (*(long *)(param_1 + 0x10) == 0) {
          _swift_bridgeObjectRelease(uVar6);
          lVar10 = lStack_88;
          lVar7 = local_90;
        }
        else {
          _swift_bridgeObjectRetain(param_1);
          uVar9 = uVar6;
          FUN_1001a2c70();
          _swift_bridgeObjectRelease(uVar6);
          if ((uVar9 & 1) == 0) {
            _swift_bridgeObjectRelease(param_1);
            lVar10 = lStack_88;
            lVar7 = local_90;
          }
          else {
            uVar4 = *(undefined4 *)(*(long *)(param_1 + 0x38) + lVar7 * 0x30);
            _swift_bridgeObjectRelease(param_1);
            FUN_100003278(uVar12,uVar4);
            lVar10 = lStack_88;
            lVar7 = local_90;
            if ((int)uVar12 != 0) {
              uVar8 = 0;
              FUN_100401b14(0);
              (*(code *)PTR____chkstk_darwin_100995498)(uVar8);
              local_b0 = uVar3;
              iStack_ac = (int)uVar12;
              FUN_1003fb4bc(FUN_10007ee4c,auStack_c0,0xd0000000000000a5,
                            (ulong)pcStack_98 | 0x8000000000000000,&DAT_d000000000000018,
                            (ulong)local_a0 | 0x8000000000000000,0x57f,0);
            }
          }
        }
      }
LAB_100075ea8:
      uVar11 = uVar11 + 1;
    } while (uVar11 != uVar13);
  }
  _swift_bridgeObjectRelease(lVar10);
  _swift_bridgeObjectRelease(lVar7);
  return;
}

