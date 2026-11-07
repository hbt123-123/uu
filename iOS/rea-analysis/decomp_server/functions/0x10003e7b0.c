// rea decompile_all
// name: FUN_10003e7b0
// address: 0x10003e7b0
// body: available
// range: 0x10003e7b0-0x10003e8ab inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_10003e7b0(void)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long lVar5;
  long lVar6;
  undefined1 auVar7 [16];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar5 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar5 != 0) &&
     (lVar5 = *(long *)(lVar5 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar5 != 0)) {
    FUN_1000c7b64();
    lVar6 = *(long *)(lVar5 + 0x40);
    bVar1 = *(byte *)(lVar5 + 0x48);
    bVar2 = *(byte *)(lVar5 + 0x49);
    _swift_release(lVar5);
    if (((bVar2 & 1) == 0) && ((bVar1 & 1) != 0)) {
      if (1 < lVar6) {
        uVar4 = 0xe100000000000000;
        if (lVar6 == 2) {
          uVar3 = 0x32;
        }
        else if (lVar6 == 3) {
          uVar3 = 0x33;
        }
        else {
          uVar3 = 0x34;
        }
        goto LAB_10003e868;
      }
      if (lVar6 != 0) {
        uVar4 = 0xe100000000000000;
        uVar3 = 0x31;
        goto LAB_10003e868;
      }
    }
  }
  uVar3 = 0;
  uVar4 = 0xe000000000000000;
LAB_10003e868:
  auVar7._8_8_ = uVar4;
  auVar7._0_8_ = uVar3;
  return auVar7;
}

