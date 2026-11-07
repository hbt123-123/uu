// rea decompile_all
// name: FUN_10015e6d0
// address: 0x10015e6d0
// body: available
// range: 0x10015e6d0-0x10015e897 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_10015e6d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  byte bVar1;
  char cVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  ulong uVar7;
  long extraout_x8;
  long unaff_x20;
  undefined8 uVar8;
  undefined8 uVar9;
  int iVar10;
  uint uVar11;
  long lStack_a0;
  undefined1 auStack_98 [32];
  undefined1 auStack_78 [24];
  
  lVar5 = 0;
  FUN_100127240();
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(*(long *)(lVar5 + -8) + 0x40));
  lVar3 = _TtC14UURemoteServer18ClipboardPCManager::dragTransfer;
  uVar7 = (long)&lStack_a0 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  _swift_beginAccess(unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::dragTransfer,auStack_78,0
                     ,0);
  uVar6 = uVar7;
  FUN_10016b6f8(unaff_x20 + lVar3);
  if ((*(long *)(*(long *)(uVar7 + (long)*(int *)(lVar5 + 0x20)) + 0x10) == 0) ||
     (thunk_FUN_1001a2c34(param_1), (uVar6 & 1) == 0)) {
    FUN_10016b73c(uVar7);
  }
  else {
    FUN_10016b73c(uVar7);
    uVar6 = unaff_x20 + _TtC14UURemoteServer18ClipboardPCManager::managerDelegate;
    _swift_unknownObjectWeakLoadStrong();
    lVar3 = _TtC14UURemoteServer16ClipboardHandler::ref;
    uVar7 = uVar6;
    if (uVar6 != 0) {
      _swift_beginAccess(uVar6 + _TtC14UURemoteServer16ClipboardHandler::ref,auStack_98,0,0);
      uVar7 = uVar6 + lVar3;
      _swift_unknownObjectWeakLoadStrong();
      if (uVar7 == 0) {
        _swift_unknownObjectRelease(uVar6);
        iVar10 = 0;
        uVar11 = 1;
        uVar9 = 3;
        uVar7 = uVar6;
      }
      else {
        FUN_1000c7b64();
        _swift_unknownObjectRelease(uVar6);
        uVar8 = *(undefined8 *)(uVar7 + 0x40);
        bVar1 = *(byte *)(uVar7 + 0x48);
        cVar2 = *(char *)(uVar7 + 0x49);
        _swift_release(uVar7);
        iVar10 = 0;
        bVar4 = cVar2 == '\0';
        uVar9 = 3;
        if (bVar4) {
          uVar9 = uVar8;
        }
        uVar11 = (uint)bVar1;
        if (!bVar4) {
          uVar11 = 1;
        }
      }
      goto LAB_10015e834;
    }
  }
  uVar9 = 0;
  uVar11 = 0;
  iVar10 = 1;
LAB_10015e834:
  FUN_1001532e8();
  FUN_10012bbcc(param_1,param_2,param_3,uVar9,uVar11 | iVar10 << 8);
  _swift_release(uVar7);
  return;
}

