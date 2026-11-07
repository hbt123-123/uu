// rea decompile_all
// name: FUN_1000d8730
// address: 0x1000d8730
// body: available
// range: 0x1000d8730-0x1000d8ac7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000d8ac4 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

long FUN_1000d8730(void)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  code *pcVar4;
  bool bVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  long unaff_x20;
  ulong uVar12;
  ID IVar13;
  long lVar14;
  long lVar15;
  long lVar16;
  long lVar17;
  undefined8 local_a0;
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar3 = _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID;
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::tasksByID,
                     auStack_80,0,0);
  lVar6 = *(long *)(unaff_x20 + lVar3);
  uVar9 = 1L << ((ulong)*(byte *)(lVar6 + 0x20) & 0x3f);
  uVar11 = 0xffffffffffffffff;
  if ((long)uVar9 < 0x40) {
    uVar11 = ~(-1L << (uVar9 & 0x3f));
  }
  uVar11 = uVar11 & *(ulong *)(lVar6 + 0x40);
  _swift_bridgeObjectRetain();
  lVar8 = 0;
  while( true ) {
    while (lVar16 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                    ::files, uVar11 != 0) {
      uVar12 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
      uVar12 = (uVar12 & 0xcccccccccccccccc) >> 2 | (uVar12 & 0x3333333333333333) << 2;
      uVar12 = (uVar12 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar12 & 0xf0f0f0f0f0f0f0f) << 4;
      uVar12 = (uVar12 & 0xff00ff00ff00ff00) >> 8 | (uVar12 & 0xff00ff00ff00ff) << 8;
      uVar12 = (uVar12 & 0xffff0000ffff0000) >> 0x10 | (uVar12 & 0xffff0000ffff) << 0x10;
      uVar11 = uVar11 - 1 & uVar11;
      lVar14 = *(long *)(*(long *)(lVar6 + 0x38) +
                        (lVar8 << 9 | LZCOUNT(uVar12 >> 0x20 | uVar12 << 0x20) << 3));
      _swift_beginAccess(lVar14 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                                  ::files,auStack_98,0,0);
      lVar16 = *(long *)(lVar14 + lVar16);
      uVar10 = 1L << ((ulong)*(byte *)(lVar16 + 0x20) & 0x3f);
      uVar12 = 0xffffffffffffffff;
      if ((long)uVar10 < 0x40) {
        uVar12 = ~(-1L << (uVar10 & 0x3f));
      }
      uVar12 = uVar12 & *(ulong *)(lVar16 + 0x40);
      _swift_bridgeObjectRetain_n(lVar16,2);
      _swift_retain(lVar14);
      _swift_retain(unaff_x20);
      lVar17 = 0;
      while( true ) {
        for (; lVar2 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                       ::handle, uVar12 != 0; uVar12 = uVar12 - 1 & uVar12) {
          uVar1 = (uVar12 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar12 & 0x5555555555555555) << 1;
          uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
          uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
          uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
          uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
          lVar15 = *(long *)(*(long *)(lVar16 + 0x38) +
                            (lVar17 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
          IVar13 = *(ID *)(lVar15 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                    ::handle);
          if (IVar13 == 0) {
            _swift_retain(lVar15);
          }
          else {
            local_a0 = 0;
            _swift_retain(lVar15);
            IVar13 = _objc_msgSend(IVar13,"closeAndReturnError:",&local_a0);
            if ((IVar13 & 1) == 0) {
              uVar7 = local_a0;
              __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF();
              _swift_willThrow(0);
              _swift_errorRelease(uVar7);
            }
          }
          *(undefined8 *)(lVar15 + lVar2) = 0;
          _swift_release(lVar15);
        }
        bVar5 = SCARRY8(lVar17,1);
        lVar17 = lVar17 + 1;
        if (bVar5) {
                    /* WARNING: Does not return */
          pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d8ac0);
          (*pcVar4)();
        }
        if ((long)(uVar10 + 0x3f >> 6) <= lVar17) break;
        uVar12 = ((ulong *)(lVar16 + 0x40))[lVar17];
      }
      _swift_release(unaff_x20);
      _swift_release(lVar14);
      _swift_release(lVar16);
      _swift_bridgeObjectRelease(lVar16);
    }
    bVar5 = SCARRY8(lVar8,1);
    lVar8 = lVar8 + 1;
    if (bVar5) {
                    /* WARNING: Does not return */
      pcVar4 = (code *)SoftwareBreakpoint(1,0x1000d8ac4);
      (*pcVar4)();
    }
    if ((long)(uVar9 + 0x3f >> 6) <= lVar8) break;
    uVar11 = ((ulong *)(lVar6 + 0x40))[lVar8];
  }
  _swift_release(lVar6);
  FUN_100401b14(0);
  FUN_1003fb48c(FUN_1000d8ac8,0,0xd0000000000000ae,0x8000000100886ab0,0x74696e696564,
                0xe600000000000000,0xa4,0);
  lVar6 = _TtC14UURemoteServer28FileTransferReceiveOperation::temporaryRootURL;
  lVar8 = 0;
  __s10Foundation3URLVMa();
  (**(code **)(*(long *)(lVar8 + -8) + 8))(unaff_x20 + lVar6,lVar8);
  _swift_release(*(undefined8 *)
                  (unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::resumeStore));
  _swift_bridgeObjectRelease(*(undefined8 *)(unaff_x20 + lVar3));
  _swift_bridgeObjectRelease
            (*(undefined8 *)
              (unaff_x20 + _TtC14UURemoteServer28FileTransferReceiveOperation::taskIDByUniqueID));
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_x20;
}

