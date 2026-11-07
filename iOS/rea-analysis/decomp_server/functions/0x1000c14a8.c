// rea decompile_all
// name: FUN_1000c14a8
// address: 0x1000c14a8
// body: available
// range: 0x1000c14a8-0x1000c156f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

undefined1  [16] FUN_1000c14a8(void)

{
  byte bVar1;
  byte bVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  undefined1 auVar6 [16];
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar4 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar4 != 0) &&
     (lVar4 = *(long *)(lVar4 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     lVar4 != 0)) {
    FUN_1000c7b64();
    lVar5 = *(long *)(lVar4 + 0x40);
    bVar1 = *(byte *)(lVar4 + 0x48);
    bVar2 = *(byte *)(lVar4 + 0x49);
    _swift_release(lVar4);
    if (((bVar2 & 1) == 0) && ((bVar1 & 1) != 0)) {
      uVar3 = *(undefined8 *)(&DAT_10080bf38 + lVar5 * 8);
      goto LAB_1000c1544;
    }
  }
  uVar3 = 0x34;
LAB_1000c1544:
  auVar6._8_8_ = 0xe100000000000000;
  auVar6._0_8_ = uVar3;
  return auVar6;
}

