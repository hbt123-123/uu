// rea decompile_all
// name: FUN_1000b3298
// address: 0x1000b3298
// body: available
// range: 0x1000b3298-0x1000b33b3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_1000b3298(void)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long lVar4;
  char *pcVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined1 auVar8 [16];
  undefined1 auStack_80 [16];
  undefined8 *local_70;
  undefined8 local_50;
  undefined8 uStack_48;
  
  lVar4 = 0x4c4c454853;
  uVar6 = 0xe500000000000000;
  __sSS11utf8CStrings15ContiguousArrayVys4Int8VGvg(0x4c4c454853,0xe500000000000000);
  pcVar5 = _getenv((char *)(lVar4 + 0x20));
  _swift_release(lVar4);
  if (pcVar5 != (char *)0x0) {
    __sSS7cStringSSSPys4Int8VG_tcfC(pcVar5);
    local_50 = 0x2f;
    uStack_48 = 0xe100000000000000;
    local_70 = &local_50;
    lVar4 = 0x7fffffffffffffff;
    FUN_10005b0a4(0x7fffffffffffffff,1,FUN_100096fdc,auStack_80,pcVar5,uVar6);
    if (*(long *)(lVar4 + 0x10) != 0) {
      puVar1 = (undefined8 *)(lVar4 + *(long *)(lVar4 + 0x10) * 0x20);
      uVar6 = *puVar1;
      uVar7 = puVar1[1];
      uVar2 = puVar1[2];
      uVar3 = puVar1[3];
      _swift_bridgeObjectRetain_n(uVar3,2);
      _swift_bridgeObjectRelease(lVar4);
      __sSS14_fromSubstringySSSshFZ(uVar6,uVar7,uVar2,uVar3);
      _swift_bridgeObjectRelease_n(uVar3,2);
      goto LAB_1000b339c;
    }
    _swift_bridgeObjectRelease();
  }
  uVar6 = 0;
  uVar7 = 0;
LAB_1000b339c:
  auVar8._8_8_ = uVar7;
  auVar8._0_8_ = uVar6;
  return auVar8;
}

