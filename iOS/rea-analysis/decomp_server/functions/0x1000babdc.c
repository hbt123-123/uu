// rea decompile_all
// name: FUN_1000babdc
// address: 0x1000babdc
// body: available
// range: 0x1000babdc-0x1000bae5b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */
/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */

void FUN_1000babdc(void)

{
  byte bVar1;
  ulong *puVar2;
  ulong uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  
  if (DAT_100a73b60 != -1) {
    _swift_once(&DAT_100a73b60,FUN_1000efc4c);
  }
  lVar7 = *(long *)(*(long *)(DAT_100b360a8 + 0x28) +
                   _TtC14UURemoteServer15StreamerManager::dispatcher);
  if ((lVar7 != 0) &&
     (puVar2 = *(ulong **)(lVar7 + _TtC14UURemoteServer18StreamerDispatcher::currentConnectSession),
     puVar2 != (ulong *)0x0)) {
    FUN_1000c7b64();
    bVar1 = *(byte *)((long)puVar2 + 0x81);
    _swift_release();
    if ((bVar1 & 1) == 0) {
      FUN_100039b50();
      if (((ulong)puVar2 & 1) != 0) {
        FUN_100401b14(0);
        FUN_1003fb48c(FUN_1000bae88,0,0xd00000000000009f,0x8000000100882d60,&DAT_d000000000000018,
                      0x8000000100883890,0x12a,0);
        pcVar4 = FUN_1000c13e0;
        puVar5 = &DAT_10099b220;
LAB_1000bae3c:
        FUN_1000baec8(pcVar4,puVar5);
        return;
      }
      FUN_1003b2720();
      uVar8 = *puVar2;
      uVar3 = uVar8;
      _swift_retain();
      FUN_10039a5f0();
      _swift_release();
      if ((long)uVar3 < 1) {
        FUN_100401b14(0);
        pcVar4 = FUN_1000bb0ec;
        uVar6 = 0x12f;
      }
      else {
        FUN_1000c13f0();
        if ((uVar8 & 1) == 0) {
          FUN_1000bb144();
          pcVar4 = FUN_1000c2064;
          puVar5 = &DAT_10099b248;
          goto LAB_1000bae3c;
        }
        FUN_100401b14(0);
        pcVar4 = FUN_1000bb118;
        uVar6 = 0x133;
      }
      goto LAB_1000bacb0;
    }
  }
  FUN_100401b14(0);
  pcVar4 = FUN_1000bae5c;
  uVar6 = 0x126;
LAB_1000bacb0:
  FUN_1003fb48c(pcVar4,0,0xd00000000000009f,0x8000000100882d60,&DAT_d000000000000018,
                0x8000000100883890,uVar6,0);
  return;
}

