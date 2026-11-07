// rea decompile_all
// name: FUN_1000dbca4
// address: 0x1000dbca4
// body: available
// range: 0x1000dbca4-0x1000dbea3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x1000dbea0 to 0x1007de0bc ___stack_chk_fail (external=false, thunk=true, hasNoReturn=true); fallthrough is excluded by Ghidra's flow model. This records Ghidra's FunctionManager flag, not an independent verification that the callee cannot return.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000dbca4(long param_1)

{
  ulong uVar1;
  long lVar2;
  code *pcVar3;
  bool bVar4;
  undefined8 uVar5;
  ulong uVar6;
  undefined8 unaff_x20;
  long lVar7;
  ID IVar8;
  long lVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_88;
  undefined1 auStack_80 [24];
  long local_68;
  
  lVar10 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask::files;
  local_68 = *(long *)PTR____stack_chk_guard_1009954a0;
  if (param_1 != 0) {
    _swift_beginAccess(param_1 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveTask
                                 ::files,auStack_80,0,0);
    lVar10 = *(long *)(param_1 + lVar10);
    uVar6 = 1L << ((ulong)*(byte *)(lVar10 + 0x20) & 0x3f);
    uVar11 = 0xffffffffffffffff;
    if ((long)uVar6 < 0x40) {
      uVar11 = ~(-1L << (uVar6 & 0x3f));
    }
    uVar11 = uVar11 & *(ulong *)(lVar10 + 0x40);
    _swift_bridgeObjectRetain_n(lVar10,2);
    _swift_retain();
    lVar7 = 0;
    while( true ) {
      for (; lVar2 = _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                     ::handle, uVar11 != 0; uVar11 = uVar11 - 1 & uVar11) {
        uVar1 = (uVar11 & 0xaaaaaaaaaaaaaaaa) >> 1 | (uVar11 & 0x5555555555555555) << 1;
        uVar1 = (uVar1 & 0xcccccccccccccccc) >> 2 | (uVar1 & 0x3333333333333333) << 2;
        uVar1 = (uVar1 & 0xf0f0f0f0f0f0f0f0) >> 4 | (uVar1 & 0xf0f0f0f0f0f0f0f) << 4;
        uVar1 = (uVar1 & 0xff00ff00ff00ff00) >> 8 | (uVar1 & 0xff00ff00ff00ff) << 8;
        uVar1 = (uVar1 & 0xffff0000ffff0000) >> 0x10 | (uVar1 & 0xffff0000ffff) << 0x10;
        lVar9 = *(long *)(*(long *)(lVar10 + 0x38) +
                         (lVar7 << 9 | LZCOUNT(uVar1 >> 0x20 | uVar1 << 0x20) << 3));
        IVar8 = *(ID *)(lVar9 + _TtC14UURemoteServerP33_E9AC25CD2D2507953C57E1028B2827B123FileTransferReceiveFile
                                ::handle);
        if (IVar8 == 0) {
          _swift_retain(lVar9);
        }
        else {
          local_88 = 0;
          _swift_retain(lVar9);
          IVar8 = _objc_msgSend(IVar8,"closeAndReturnError:",&local_88);
          if ((IVar8 & 1) == 0) {
            uVar5 = local_88;
            __s10Foundation22_convertNSErrorToErrorys0E0_pSo0C0CSgF(local_88);
            _swift_willThrow(0);
            _swift_errorRelease(uVar5);
          }
        }
        *(undefined8 *)(lVar9 + lVar2) = 0;
        _swift_release(lVar9);
      }
      bVar4 = SCARRY8(lVar7,1);
      lVar7 = lVar7 + 1;
      if (bVar4) {
                    /* WARNING: Does not return */
        pcVar3 = (code *)SoftwareBreakpoint(1,0x1000dbea0);
        (*pcVar3)();
      }
      if ((long)(uVar6 + 0x3f >> 6) <= lVar7) break;
      uVar11 = ((ulong *)(lVar10 + 0x40))[lVar7];
    }
    _swift_release(unaff_x20);
    _swift_release(lVar10);
    _swift_bridgeObjectRelease(lVar10);
  }
  if (*(long *)PTR____stack_chk_guard_1009954a0 != local_68) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}

