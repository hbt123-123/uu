// rea decompile_all
// name: FUN_10008994c
// address: 0x10008994c
// body: available
// range: 0x10008994c-0x100089a73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10008994c(undefined8 param_1,long param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  long unaff_x21;
  long lVar3;
  long lVar4;
  code *pcVar5;
  undefined1 auStack_210 [208];
  undefined8 local_140;
  undefined8 uStack_138;
  undefined8 uStack_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  code *local_80;
  undefined8 uStack_78;
  
  lVar3 = *(long *)(param_2 + 0x10);
  if (lVar3 != 0) {
    _swift_bridgeObjectRetain(param_2);
    _swift_bridgeObjectRetain(param_3);
    lVar4 = 0x20;
    while( true ) {
      lVar3 = lVar3 + -1;
      puVar1 = (undefined8 *)(param_2 + lVar4);
      uStack_98 = puVar1[0x15];
      local_a0 = puVar1[0x14];
      uStack_88 = puVar1[0x17];
      uStack_90 = puVar1[0x16];
      uStack_78 = puVar1[0x19];
      pcVar5 = (code *)puVar1[0x18];
      uStack_d8 = puVar1[0xd];
      local_e0 = puVar1[0xc];
      uStack_c8 = puVar1[0xf];
      uStack_d0 = puVar1[0xe];
      uStack_b8 = puVar1[0x11];
      local_c0 = puVar1[0x10];
      uStack_a8 = puVar1[0x13];
      uStack_b0 = puVar1[0x12];
      uStack_118 = puVar1[5];
      local_120 = puVar1[4];
      uStack_108 = puVar1[7];
      uStack_110 = puVar1[6];
      uStack_f8 = puVar1[9];
      local_100 = puVar1[8];
      uStack_e8 = puVar1[0xb];
      uStack_f0 = puVar1[10];
      uStack_138 = puVar1[1];
      local_140 = *puVar1;
      uStack_128 = puVar1[3];
      uStack_130 = puVar1[2];
      puVar1 = &local_140;
      local_80 = pcVar5;
      FUN_10006ff98(puVar1,auStack_210);
      FUN_10008f0c8();
      uVar2 = 0;
      __sSh15minimumCapacityShyxGSi_tcfC(0,&DAT_1000fa530,puVar1);
      (*pcVar5)();
      _swift_bridgeObjectRelease(uVar2);
      FUN_10008efb4(&local_140);
      if ((unaff_x21 != 0) || (lVar3 == 0)) break;
      lVar4 = lVar4 + 0xd0;
    }
    _swift_bridgeObjectRelease(param_3);
    _swift_bridgeObjectRelease(param_2);
  }
  return;
}

