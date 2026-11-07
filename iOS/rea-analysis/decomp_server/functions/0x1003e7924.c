// rea decompile_all
// name: FUN_1003e7924
// address: 0x1003e7924
// body: available
// range: 0x1003e7924-0x1003e7b77 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1003e7924(undefined8 param_1)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined *puVar6;
  long extraout_x8;
  undefined8 unaff_x20;
  long local_170;
  long local_168;
  long local_160;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined1 auStack_128 [8];
  undefined8 local_120;
  undefined1 auStack_118 [32];
  undefined1 auStack_f8 [24];
  undefined8 local_e0;
  long lStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined1 auStack_c0 [32];
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined1 auStack_90 [8];
  undefined8 local_88;
  long local_78;
  
  lVar2 = 0;
  __ss6MirrorVMa();
  local_168 = *(long *)(lVar2 + -8);
  local_160 = lVar2;
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(local_168 + 0x40));
  lVar2 = (long)&local_170 - (extraout_x8 + 0xfU & 0xfffffffffffffff0);
  uVar3 = param_1;
  _swift_getObjectType();
  local_a0 = param_1;
  local_88 = uVar3;
  _swift_unknownObjectRetain(param_1);
  puVar4 = &local_a0;
  __ss6MirrorV10reflectingAByp_tcfC(lVar2,puVar4);
  local_170 = lVar2;
  __ss6MirrorV8childrens13AnyCollectionVySSSg5label_yp5valuetGvg();
  puVar5 = puVar4;
  __ss15_AnySequenceBoxC13_makeIterators0aE0VyxGyFTj();
  _swift_release(puVar4);
  __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&local_a0);
  puVar1 = PTR___sypN_100995e88;
  if (local_78 != 0) {
    do {
      uStack_c8 = uStack_98;
      local_d0 = local_a0;
      FUN_10007f3d4(auStack_90,auStack_c0);
      FUN_1003e7b78(&local_d0,auStack_128);
      _swift_bridgeObjectRelease(local_120);
      puVar6 = &DAT_100a8d020;
      FUN_100004bb4(&DAT_100a8d020,&DAT_100823418);
      puVar4 = &local_150;
      _swift_dynamicCast(puVar4,auStack_118,puVar1 + 8,puVar6,6);
      if (((ulong)puVar4 & 1) == 0) {
        FUN_100040bb4(&local_d0,&DAT_100a8d018,&DAT_100823410);
        uStack_148 = 0;
        local_150 = 0;
        uStack_138 = 0;
        local_140 = 0;
        local_130 = 0;
        FUN_100040bb4(&local_150,&DAT_100a8d028,&DAT_100823420);
      }
      else {
        FUN_1000a0074(&local_150,auStack_f8);
        lVar2 = lStack_d8;
        uVar3 = local_e0;
        FUN_10003f030(auStack_f8,local_e0);
        (**(code **)(lVar2 + 8))(unaff_x20,uVar3,lVar2);
        FUN_100040bb4(&local_d0,&DAT_100a8d018,&DAT_100823410);
        FUN_10003f094(auStack_f8);
      }
      __ss19_AnyIteratorBoxBaseC4nextxSgyFTj(&local_a0);
    } while (local_78 != 0);
  }
  (**(code **)(local_168 + 8))(local_170,local_160);
  _swift_release(puVar5);
  return;
}

