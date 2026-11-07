// rea decompile_all
// name: FUN_1000b6730
// address: 0x1000b6730
// body: available
// range: 0x1000b6730-0x1000b69c3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1000b6730(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long *unaff_x20;
  long lVar3;
  undefined8 *puVar4;
  long lVar5;
  undefined1 auStack_208 [168];
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 local_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  
  lVar5 = *unaff_x20;
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar5 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 0x28);
      do {
        uVar1 = puVar4[-1];
        uVar2 = *puVar4;
        _swift_bridgeObjectRetain(uVar2);
        __sSS4hash4intoys6HasherVz_tF(param_1,uVar1,uVar2);
        _swift_bridgeObjectRelease(uVar2);
        puVar4 = puVar4 + 2;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  __ss6HasherV8_combineyys5UInt8VF(*(byte *)(unaff_x20 + 1) & 1);
  __sSS4hash4intoys6HasherVz_tF(param_1,unaff_x20[2],unaff_x20[3]);
  lVar5 = unaff_x20[5];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[7];
  }
  else {
    lVar3 = unaff_x20[4];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar3,lVar5);
    lVar5 = unaff_x20[7];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[9];
  }
  else {
    lVar3 = unaff_x20[6];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar3,lVar5);
    lVar5 = unaff_x20[9];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    lVar3 = unaff_x20[8];
    __ss6HasherV8_combineyys5UInt8VF(1);
    __sSS4hash4intoys6HasherVz_tF(param_1,lVar3,lVar5);
  }
  lVar5 = unaff_x20[10];
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
    lVar5 = unaff_x20[0xb];
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar5 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 0x20);
      do {
        uStack_a8 = puVar4[1];
        local_b0 = *puVar4;
        uStack_98 = puVar4[3];
        uStack_a0 = puVar4[2];
        uStack_88 = puVar4[5];
        local_90 = puVar4[4];
        uStack_78 = puVar4[7];
        uStack_80 = puVar4[6];
        uStack_68 = puVar4[9];
        local_70 = puVar4[8];
        uStack_58 = puVar4[0xb];
        uStack_60 = puVar4[10];
        FUN_1000b59dc(&local_b0,&local_160);
        FUN_1000b6730(param_1);
        FUN_1000bb5ac(&local_b0);
        puVar4 = puVar4 + 0xc;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
    lVar5 = unaff_x20[0xb];
  }
  if (lVar5 == 0) {
    __ss6HasherV8_combineyys5UInt8VF(0);
  }
  else {
    __ss6HasherV8_combineyys5UInt8VF(1);
    lVar3 = *(long *)(lVar5 + 0x10);
    __ss6HasherV8_combineyySuF(lVar3);
    if (lVar3 != 0) {
      puVar4 = (undefined8 *)(lVar5 + 0x20);
      do {
        uStack_158 = puVar4[1];
        local_160 = *puVar4;
        uStack_148 = puVar4[3];
        local_150 = puVar4[2];
        uStack_138 = puVar4[5];
        uStack_140 = puVar4[4];
        uStack_128 = puVar4[7];
        local_130 = puVar4[6];
        uStack_118 = puVar4[9];
        uStack_120 = puVar4[8];
        uStack_108 = puVar4[0xb];
        local_110 = puVar4[10];
        uStack_f8 = puVar4[0xd];
        uStack_100 = puVar4[0xc];
        uStack_e8 = puVar4[0xf];
        local_f0 = puVar4[0xe];
        uStack_d8 = puVar4[0x11];
        local_e0 = puVar4[0x10];
        uStack_c8 = puVar4[0x13];
        uStack_d0 = puVar4[0x12];
        local_c0 = puVar4[0x14];
        FUN_1000bbe94(&local_160,auStack_208);
        FUN_1000ba344(param_1);
        FUN_1000bbea4(&local_160);
        puVar4 = puVar4 + 0x15;
        lVar3 = lVar3 + -1;
      } while (lVar3 != 0);
    }
  }
  return;
}

