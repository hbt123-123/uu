// rea decompile_all
// name: FUN_10007b9f4
// address: 0x10007b9f4
// body: available
// range: 0x10007b9f4-0x10007bec3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007b9f4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined8 uVar1;
  undefined *puVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined *puVar6;
  undefined1 *puVar7;
  undefined1 *puVar8;
  undefined **ppuVar9;
  uint uVar10;
  undefined *puVar11;
  long lVar12;
  long *unaff_x20;
  code *pcVar13;
  long lVar14;
  undefined *puVar15;
  long lVar16;
  undefined1 auStack_240 [8];
  long local_238;
  long local_230;
  long local_228;
  long local_220;
  undefined1 *local_218;
  undefined8 local_210;
  undefined8 local_208;
  undefined8 uStack_200;
  long local_1f8;
  undefined8 local_1f0;
  undefined *local_1e8;
  undefined *puStack_1e0;
  long local_1d0;
  undefined *local_180;
  undefined *puStack_178;
  undefined *local_170;
  undefined1 *puStack_168;
  long local_160;
  long lStack_158;
  undefined8 uStack_150;
  long local_148;
  undefined1 local_140;
  undefined *local_100;
  undefined *puStack_f8;
  undefined *puStack_f0;
  undefined1 *local_e8;
  undefined1 *local_e0;
  undefined8 uStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  undefined1 local_c0;
  undefined1 auStack_b8 [88];
  
  lVar16 = *unaff_x20;
  local_228 = *(long *)(lVar16 + 0x50);
  local_220 = *(long *)(local_228 + -8);
  lVar12 = *(long *)(local_220 + 0x40);
  lVar4 = 0;
  local_218 = auStack_240 + -(lVar12 + 0xfU & 0xfffffffffffffff0);
  local_208 = param_2;
  uStack_200 = param_5;
  local_1f0 = param_1;
  __sSqMa(0,param_4);
  lVar14 = *(long *)(lVar4 + -8);
  local_230 = (long)(auStack_240 + -(lVar12 + 0xfU & 0xfffffffffffffff0)) -
              (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar12 = *(long *)(param_4 + -8);
  local_238 = local_230 - (*(long *)(lVar12 + 0x40) + 0xfU & 0xfffffffffffffff0);
  local_210 = param_3;
  FUN_10007b83c(auStack_b8,param_3);
  uVar10 = 0;
  FUN_1000133cc(auStack_b8,&local_100,&DAT_100104818,&DAT_1000d62d0);
  local_1f8 = param_4;
  if (puStack_f8 == (undefined *)0x0) {
    puVar6 = &DAT_100104818;
    puVar11 = &DAT_1000d62d0;
    ppuVar9 = &local_100;
  }
  else {
    lStack_158 = uStack_d8;
    local_160 = (long)local_e0;
    local_148 = lStack_c8;
    uStack_150 = uStack_d0;
    local_140 = local_c0;
    puStack_178 = puStack_f8;
    local_180 = local_100;
    puStack_168 = local_e8;
    local_170 = puStack_f0;
    if ((*(long *)(lStack_c8 + 0x10) != 1) || (FUN_10007b15c(), (uVar10 & 0x10100) != 0x100)) {
      FUN_100065194(&local_180);
      goto LAB_10007bc2c;
    }
    FUN_1000133cc(&puStack_168,&local_1e8,&DAT_100104198,&DAT_1000d5180);
    if (local_1d0 != 0) {
      FUN_100020a9c(&local_1e8,&local_100);
      FUN_100033a18(&local_100,&local_1e8);
      lVar16 = local_230;
      puVar6 = PTR___sypN_1000f0728;
      lVar5 = local_230;
      _swift_dynamicCast(local_230,&local_1e8,PTR___sypN_1000f0728 + 8,param_4,6);
      if ((int)lVar5 != 0) {
        FUN_100001428(&local_100);
        FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
        (**(code **)(lVar12 + 0x38))(lVar16,0,1,param_4);
        FUN_100065194(&local_180);
        lVar4 = local_238;
        pcVar13 = *(code **)(lVar12 + 0x20);
        (*pcVar13)(local_238,lVar16,param_4);
        (*pcVar13)(local_1f0,lVar4,param_4);
        return;
      }
      (**(code **)(lVar12 + 0x38))(lVar16,1,1,param_4);
      (**(code **)(lVar14 + 8))(lVar16,lVar4);
      local_1e8 = (undefined *)0x0;
      puStack_1e0 = (undefined *)0xe000000000000000;
      ppuVar9 = &local_100;
      __ss15_print_unlockedyyx_q_zts16TextOutputStreamR_r0_lF
                (ppuVar9,&local_1e8,puVar6 + 8,PTR___ss26DefaultStringInterpolationVN_1000f05a8,
                 PTR___ss26DefaultStringInterpolationVs16TextOutputStreamsWP_1000f05b8);
      puVar3 = local_170;
      puVar2 = puStack_178;
      puVar15 = local_180;
      puVar11 = puStack_1e0;
      puVar6 = local_1e8;
      FUN_100083864();
      _swift_allocError(&DAT_1000fa958,ppuVar9,0,0);
      *ppuVar9 = puVar6;
      ppuVar9[1] = puVar11;
      ppuVar9[2] = puVar15;
      ppuVar9[3] = puVar2;
      ppuVar9[4] = puVar3;
      *(undefined1 *)(ppuVar9 + 5) = 0;
      _swift_willThrow();
      _swift_bridgeObjectRetain(puVar2);
      _swift_bridgeObjectRetain(puVar3);
      FUN_100001428(&local_100);
      FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
      FUN_100065194(&local_180);
      return;
    }
    FUN_100065194(&local_180);
    puVar6 = &DAT_100104198;
    puVar11 = &DAT_1000d5180;
    ppuVar9 = &local_1e8;
  }
  FUN_10001fc18(ppuVar9,puVar6,puVar11);
LAB_10007bc2c:
  puVar11 = (undefined *)unaff_x20[2];
  lVar4 = unaff_x20[3];
  puVar15 = *(undefined **)(lVar4 + 0x58);
  puVar6 = &DAT_100104440;
  FUN_10000eb08(&DAT_100104440,&DAT_1000d48d0);
  _swift_initStackObject();
  lVar12 = local_228;
  *(undefined8 *)(puVar6 + 0x18) = 2;
  *(undefined8 *)(puVar6 + 0x10) = 1;
  *(long *)(puVar6 + 0x38) = local_228;
  local_230 = *(undefined8 *)(lVar16 + 0x58);
  *(long *)(puVar6 + 0x40) = local_230;
  FUN_100060d88(puVar6 + 0x20);
  uVar1 = local_210;
  pcVar13 = *(code **)(local_220 + 0x10);
  (*pcVar13)();
  local_180 = puVar11;
  _swift_bridgeObjectRetain(puVar15);
  _swift_retain(lVar4);
  _swift_bridgeObjectRetain(puVar11);
  FUN_10006e50c(puVar6);
  puVar7 = local_218;
  local_220 = (long)local_180;
  lVar14 = unaff_x20[2];
  (*pcVar13)(local_218,uVar1,lVar12);
  _swift_bridgeObjectRetain(lVar14);
  FUN_100096aa4();
  puVar8 = auStack_b8;
  FUN_1000133cc(puVar8,&uStack_150,&DAT_100104818,&DAT_1000d62d0);
  local_170 = (undefined *)local_220;
  local_e8 = &DAT_1000f8f60;
  local_180 = puVar15;
  puStack_178 = (undefined *)lVar4;
  puStack_168 = puVar7;
  local_160 = lVar14;
  lStack_158 = lVar12;
  FUN_100083710();
  puVar6 = &DAT_1000f8f98;
  local_e0 = puVar8;
  _swift_allocObject(&DAT_1000f8f98,0x81,7);
  local_100 = puVar6;
  FUN_1000837c0(&local_180,puVar6 + 0x10);
  __sSe4fromxs7Decoder_p_tKcfCTj(local_1f0,&local_100,local_1f8,uStack_200);
  FUN_10006b050(&local_180);
  FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
  return;
}

