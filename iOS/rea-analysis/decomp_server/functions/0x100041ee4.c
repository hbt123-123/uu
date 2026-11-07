// rea decompile_all
// name: FUN_100041ee4
// address: 0x100041ee4
// body: available
// range: 0x100041ee4-0x100042257 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100041ee4(undefined8 param_1,undefined8 *param_2,long param_3,uint param_4,
                  undefined8 param_5,undefined8 param_6)

{
  uint uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  long lVar9;
  undefined *puVar10;
  undefined8 *unaff_x20;
  long lVar11;
  long lVar12;
  code *pcVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  undefined8 uVar17;
  undefined1 auStack_200 [16];
  undefined4 local_1f0;
  undefined8 *local_1e8;
  undefined *puStack_1e0;
  undefined *local_1d8;
  long lStack_1d0;
  uint local_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined *local_1b0;
  undefined8 *local_1a8;
  long local_1a0;
  undefined8 local_188;
  undefined8 local_180;
  long local_178;
  uint local_16c;
  long local_168;
  long local_160;
  undefined8 local_158;
  undefined8 local_150;
  undefined8 local_148;
  undefined8 *local_140;
  undefined4 local_134;
  long local_130;
  undefined *local_128;
  undefined *local_120;
  
  local_134 = (undefined4)param_1;
  lVar11 = *(long *)(param_3 + 0x10);
  if (lVar11 == 0) {
    lVar9 = 0;
    lVar12 = 0;
  }
  else {
    lVar9 = (long)*(int *)(param_3 + 0x20);
    lVar12 = (long)*(int *)(param_3 + 0x24);
  }
  local_150 = unaff_x20[5];
  puVar6 = param_2;
  local_188 = param_5;
  local_180 = param_6;
  (*(code *)unaff_x20[4])();
  local_158 = unaff_x20[7];
  local_148 = param_1;
  local_140 = puVar6;
  (*(code *)unaff_x20[6])();
  puVar8 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
  puVar10 = PTR___sSiN_100995968;
  local_168 = lVar12;
  local_160 = lVar9;
  if (lVar11 == 0) {
    puVar10 = (undefined *)0xe300000000000000;
    puStack_1e0 = (undefined *)0x6c696e;
  }
  else {
    puVar4 = PTR___sSiN_100995968;
    puVar7 = PTR___sSis23CustomStringConvertiblesWP_1009959b8;
    local_130 = lVar9;
    __ss23CustomStringConvertibleP11descriptionSSvgTj();
    local_128 = puVar4;
    local_120 = puVar7;
    __sSS6appendyySSF(0x78,0xe100000000000000);
    local_130 = lVar12;
    __ss23CustomStringConvertibleP11descriptionSSvgTj(puVar10,puVar8);
    __sSS6appendyySSF();
    _swift_bridgeObjectRelease(puVar8);
    puVar10 = local_120;
    puStack_1e0 = local_128;
  }
  local_16c = (uint)(lVar11 == 0);
  uVar1 = param_4;
  if (param_4 < 2) {
    uVar1 = 1;
  }
  local_178 = (long)(int)uVar1;
  FUN_100401b14(0);
  (*(code *)PTR____chkstk_darwin_100995498)();
  puVar6 = local_140;
  uVar3 = local_148;
  local_1f0 = local_134;
  uVar1 = (uint)param_1 & 1;
  local_1c0 = local_188;
  uStack_1b8 = local_180;
  local_1b0 = (undefined *)local_148;
  local_1a8 = local_140;
  local_1a0 = CONCAT71(local_1a0._1_7_,(char)uVar1);
  local_1e8 = param_2;
  local_1d8 = puVar10;
  lStack_1d0 = param_3;
  local_1c8 = param_4;
  FUN_1003fb48c(FUN_100043d10,auStack_200,0xd0000000000000a0,0x800000010087c790,0xd000000000000037,
                0x800000010087c9c0,0xf2,0);
  _swift_bridgeObjectRelease(puVar10);
  uVar2 = *unaff_x20;
  lVar11 = unaff_x20[1];
  uVar5 = uVar2;
  _swift_getObjectType();
  uVar14 = unaff_x20[2];
  puVar10 = &DAT_100997d90;
  _swift_allocObject(&DAT_100997d90,0x118,7);
  uVar15 = param_2[0x10];
  uVar17 = param_2[0x13];
  uVar16 = param_2[0x12];
  *(undefined8 *)(puVar10 + 0xa0) = param_2[0x11];
  *(undefined8 *)(puVar10 + 0x98) = uVar15;
  *(undefined8 *)(puVar10 + 0xb0) = uVar17;
  *(undefined8 *)(puVar10 + 0xa8) = uVar16;
  uVar15 = param_2[0x14];
  uVar17 = param_2[0x17];
  uVar16 = param_2[0x16];
  *(undefined8 *)(puVar10 + 0xc0) = param_2[0x15];
  *(undefined8 *)(puVar10 + 0xb8) = uVar15;
  *(undefined8 *)(puVar10 + 0xd0) = uVar17;
  *(undefined8 *)(puVar10 + 200) = uVar16;
  uVar15 = param_2[8];
  uVar17 = param_2[0xb];
  uVar16 = param_2[10];
  *(undefined8 *)(puVar10 + 0x60) = param_2[9];
  *(undefined8 *)(puVar10 + 0x58) = uVar15;
  *(undefined8 *)(puVar10 + 0x70) = uVar17;
  *(undefined8 *)(puVar10 + 0x68) = uVar16;
  uVar15 = param_2[0xc];
  uVar17 = param_2[0xf];
  uVar16 = param_2[0xe];
  *(undefined8 *)(puVar10 + 0x80) = param_2[0xd];
  *(undefined8 *)(puVar10 + 0x78) = uVar15;
  *(undefined8 *)(puVar10 + 0x90) = uVar17;
  *(undefined8 *)(puVar10 + 0x88) = uVar16;
  uVar15 = *param_2;
  uVar17 = param_2[3];
  uVar16 = param_2[2];
  *(undefined8 *)(puVar10 + 0x20) = param_2[1];
  *(undefined8 *)(puVar10 + 0x18) = uVar15;
  *(undefined8 *)(puVar10 + 0x30) = uVar17;
  *(undefined8 *)(puVar10 + 0x28) = uVar16;
  uVar15 = param_2[4];
  uVar17 = param_2[7];
  uVar16 = param_2[6];
  *(undefined8 *)(puVar10 + 0x40) = param_2[5];
  *(undefined8 *)(puVar10 + 0x38) = uVar15;
  *(undefined8 *)(puVar10 + 0x50) = uVar17;
  *(undefined8 *)(puVar10 + 0x48) = uVar16;
  uVar15 = *unaff_x20;
  uVar17 = unaff_x20[3];
  uVar16 = unaff_x20[2];
  *(undefined8 *)(puVar10 + 0xe0) = unaff_x20[1];
  *(undefined8 *)(puVar10 + 0xd8) = uVar15;
  *(undefined8 *)(puVar10 + 0xf0) = uVar17;
  *(undefined8 *)(puVar10 + 0xe8) = uVar16;
  uVar15 = unaff_x20[4];
  uVar17 = unaff_x20[7];
  uVar16 = unaff_x20[6];
  *(undefined8 *)(puVar10 + 0x100) = unaff_x20[5];
  *(undefined8 *)(puVar10 + 0xf8) = uVar15;
  *(undefined4 *)(puVar10 + 0x10) = local_134;
  *(undefined8 *)(puVar10 + 0x110) = uVar17;
  *(undefined8 *)(puVar10 + 0x108) = uVar16;
  pcVar13 = *(code **)(lVar11 + 8);
  FUN_1000408d0(param_2,&local_128);
  _swift_unknownObjectRetain(uVar2);
  _swift_unknownObjectRetain(uVar14);
  _swift_retain(local_150);
  _swift_retain(local_158);
  local_1b0 = puVar10;
  local_1a8 = (undefined8 *)uVar5;
  local_1a0 = lVar11;
  (*pcVar13)(local_178,local_160,local_168,local_16c,uVar3,puVar6,uVar1,FUN_100043e0c);
  _swift_bridgeObjectRelease(puVar6);
  _swift_release(puVar10);
  return;
}

