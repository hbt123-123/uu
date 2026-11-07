// rea decompile_all
// name: FUN_100041248
// address: 0x100041248
// body: available
// range: 0x100041248-0x10004132b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

uint FUN_100041248(void)

{
  undefined8 uVar1;
  undefined8 uVar2;
  byte bVar3;
  byte bVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  long unaff_x20;
  long lVar8;
  undefined8 uVar9;
  
  lVar7 = *(long *)(*(long *)(unaff_x20 + 0x10) + _TtC14UURemoteServer15StreamerManager::dispatcher)
  ;
  if ((lVar7 == 0) ||
     (lVar7 = *(long *)(lVar7 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar7 == 0)) {
    uVar5 = 0;
  }
  else {
    lVar6 = lVar7;
    FUN_1000c7b64();
    lVar8 = *(long *)(lVar6 + 0x40);
    bVar3 = *(byte *)(lVar6 + 0x48);
    bVar4 = *(byte *)(lVar6 + 0x49);
    _swift_release();
    if ((bVar4 & 1) == 0) {
      if ((bVar3 & 1) == 0) {
        uVar9 = 1;
      }
      else {
        uVar9 = *(undefined8 *)(&DAT_10080a018 + lVar8 * 8);
      }
    }
    else {
      uVar9 = 0;
    }
    uVar1 = *(undefined8 *)
             (*(long *)(lVar7 + _TtC14UURemoteServer22StreamerConnectSession::
                                ___lazy_storage___appDataHandler) + 0x50);
    uVar2 = *(undefined8 *)
             (*(long *)(lVar7 + _TtC14UURemoteServer22StreamerConnectSession::
                                ___lazy_storage___appDataHandler) + 0x58);
    _swift_bridgeObjectRetain(uVar2);
    uVar5 = 0;
    FUN_10000b50c(0,uVar9,bVar4,uVar1,uVar2);
    _swift_bridgeObjectRelease(uVar2);
    uVar5 = uVar5 & 1;
  }
  return uVar5;
}

