// rea decompile_all
// name: FUN_10022c440
// address: 0x10022c440
// body: available
// range: 0x10022c440-0x10022c68f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10022c440(void)

{
  long lVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined *puVar5;
  undefined8 *puVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  undefined1 auStack_c0 [16];
  undefined8 *local_b0;
  undefined8 local_98;
  undefined8 uStack_90;
  undefined8 local_78;
  undefined8 uStack_70;
  
  uVar4 = 0;
  FUN_10021e878();
  local_78 = 0xd0000000000000b2;
  uStack_70 = 0x80000001008a68b0;
  local_98 = 0xc3;
  puVar5 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  __ss23CustomStringConvertibleP11descriptionSSvgTj
            (PTR___sSiN_100995968,PTR___sSis23CustomStringConvertiblesWP_1009959b8);
  __sSS6appendyySSF();
  _swift_bridgeObjectRelease(puVar5);
  uVar3 = uStack_70;
  uVar2 = local_78;
  puVar5 = &DAT_100a7f000;
  local_78 = uVar4;
  FUN_100004bb4(&DAT_100a7f000,&DAT_100813b78);
  puVar6 = &local_78;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar6,puVar5);
  _objc_sync_enter();
  _swift_unknownObjectRelease(puVar6);
  if (DAT_100a7ddc0 != -1) {
    _swift_once(&DAT_100a7ddc0,FUN_10021c528);
  }
  _swift_beginAccess(&DAT_100a7e170,&local_78,0,0);
  uVar8 = DAT_100a7e170;
  local_98 = uVar2;
  uStack_90 = uVar3;
  (*(code *)PTR____chkstk_darwin_100995498)();
  local_b0 = &local_98;
  _swift_bridgeObjectRetain(uVar8);
  uVar7 = 0;
  FUN_100152a38(FUN_10000d558,auStack_c0,uVar8);
  _swift_bridgeObjectRelease(uVar8);
  if ((uVar7 & 1) == 0) {
    _swift_beginAccess(&DAT_100a7e170,&local_98,0x21,0);
    uVar7 = DAT_100a7e170;
    _swift_isUniquelyReferenced_nonNull_native();
    uVar8 = uVar7;
    if ((DAT_100a7e170 & 1) == 0) {
      uVar8 = 0;
      DAT_100a7e170 = uVar7;
      FUN_100242058(0,*(long *)(uVar7 + 0x10) + 1,1,uVar7);
    }
    uVar7 = *(ulong *)(uVar8 + 0x10);
    uVar9 = uVar8;
    if (*(ulong *)(uVar8 + 0x18) >> 1 <= uVar7) {
      uVar9 = (ulong)(1 < *(ulong *)(uVar8 + 0x18));
      DAT_100a7e170 = uVar8;
      FUN_100242058(uVar9,uVar7 + 1,1,uVar8);
    }
    *(ulong *)(uVar9 + 0x10) = uVar7 + 1;
    lVar1 = uVar9 + uVar7 * 0x10;
    *(undefined8 *)(lVar1 + 0x20) = uVar2;
    *(undefined8 *)(lVar1 + 0x28) = uVar3;
    DAT_100a7e170 = uVar9;
    _swift_endAccess(&local_98);
    FUN_10022c690();
  }
  else {
    _swift_bridgeObjectRelease(uVar3);
  }
  puVar6 = &local_98;
  local_98 = uVar4;
  __ss38_bridgeAnythingNonVerbatimToObjectiveCyyXlxnlF(puVar6,puVar5);
  _objc_sync_exit();
  _swift_unknownObjectRelease(puVar6);
  return;
}

