// rea decompile_all
// name: FUN_10002e0b0
// address: 0x10002e0b0
// body: available
// range: 0x10002e0b0-0x10002e33f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined1  [16] FUN_10002e0b0(undefined8 *param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long lVar3;
  undefined1 auVar4 [16];
  long lVar5;
  long lVar6;
  long extraout_x8;
  long extraout_x8_00;
  undefined8 *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  long lVar11;
  undefined *apuStack_90 [6];
  
  lVar5 = 0;
  FUN_10000fbb8();
  lVar11 = *(long *)(lVar5 + -8);
  (*(code *)PTR____chkstk_darwin_1000f0278)(*(undefined8 *)(lVar11 + 0x40));
  lVar3 = -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar7 = (undefined8 *)((long)apuStack_90 + lVar3);
  puVar10 = &DAT_100101b58;
  FUN_10000eb08(&DAT_100101b58,&DAT_1000cb730);
  (*(code *)PTR____chkstk_darwin_1000f0278)
            (*(long *)(*(long *)(puVar10 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = (long)puVar7 - extraout_x8_00;
  apuStack_90[4] = (undefined *)0x0;
  apuStack_90[5] = (undefined *)0xe000000000000000;
  __ss11_StringGutsV4growyySiF(0x5d);
  __sSS6appendyySSF(0x6973726556707061,0xec000000203a6e6f);
  __sSS6appendyySSF(*param_1,param_1[1]);
  __sSS6appendyySSF(0x6973726556736f0a,0xec000000203a6e6f);
  __sSS6appendyySSF(param_1[2],param_1[3]);
  __sSS6appendyySSF(0x6567676f4c73690a,0xed0000203a6e4964);
  uVar1 = 0x65757274;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar1 = 0x65736c6166;
  }
  puVar10 = (undefined *)0xe400000000000000;
  uVar2 = 0xe400000000000000;
  if (*(char *)(param_1 + 4) == '\0') {
    uVar2 = 0xe500000000000000;
  }
  __sSS6appendyySSF(uVar1,uVar2);
  _swift_bridgeObjectRelease(uVar2);
  __sSS6appendyySSF(0xd000000000000010,0x80000001000c5a90);
  __sSS6appendyySSF(param_1[5],param_1[6]);
  __sSS6appendyySSF(0xd000000000000010,0x80000001000c5ab0);
  __sSS6appendyySSF(param_1[7],param_1[8]);
  __sSS6appendyySSF(0x7272457473616c0a,0xec000000203a726f);
  lVar6 = 0;
  FUN_1000116f0();
  FUN_10002ed38((long)param_1 + (long)*(int *)(lVar6 + 0x24),lVar9);
  lVar6 = lVar9;
  (**(code **)(lVar11 + 0x30))(lVar9,1,lVar5);
  if ((int)lVar6 == 1) {
    puVar8 = (undefined *)0x6c6c756e;
  }
  else {
    FUN_10001fc58(lVar9,puVar7);
    apuStack_90[1] = (undefined *)*puVar7;
    puVar10 = PTR___sSiN_1000f03e8;
    puVar8 = PTR___sSis23CustomStringConvertiblesWP_1000f0418;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    apuStack_90[2] = puVar10;
    apuStack_90[3] = puVar8;
    __sSS6appendyySSF(0x20,0xe100000000000000);
    __sSS6appendyySSF(*(undefined8 *)((long)apuStack_90 + lVar3 + 8),
                      *(undefined8 *)((long)apuStack_90 + lVar3 + 0x10));
    puVar10 = apuStack_90[3];
    puVar8 = apuStack_90[2];
    FUN_10002ed88(puVar7);
  }
  __sSS6appendyySSF(puVar8,puVar10);
  _swift_bridgeObjectRelease(puVar10);
  auVar4._8_8_ = apuStack_90[5];
  auVar4._0_8_ = apuStack_90[4];
  return auVar4;
}

