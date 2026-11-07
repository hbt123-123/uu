// rea decompile_all
// name: FUN_10007bec4
// address: 0x10007bec4
// body: available
// range: 0x10007bec4-0x10007c35b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10007bec4(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined8 param_5)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uVar3;
  undefined *puVar4;
  undefined *puVar5;
  undefined1 *puVar6;
  undefined **ppuVar7;
  uint uVar8;
  long lVar9;
  code *pcVar10;
  long *unaff_x20;
  undefined1 *puVar11;
  long *unaff_x21;
  long lVar12;
  long lVar13;
  undefined *puVar14;
  undefined auStack_280 [8];
  undefined8 local_278;
  undefined *local_230;
  long lStack_228;
  undefined *puStack_220;
  undefined *puStack_218;
  undefined1 *local_210;
  long lStack_208;
  long local_200;
  long lStack_1f8;
  long local_1f0;
  long lStack_1e8;
  char local_1e0;
  undefined *local_1d8;
  long lStack_1d0;
  undefined *local_1c8;
  undefined *puStack_1c0;
  undefined1 *local_1b8;
  long lStack_1b0;
  long local_1a8;
  long lStack_1a0;
  undefined1 local_198;
  undefined7 uStack_197;
  long lStack_190;
  char local_188;
  long *local_180 [10];
  undefined *local_130;
  long lStack_128;
  undefined *local_120;
  undefined *puStack_118;
  undefined1 *local_110;
  long lStack_108;
  long lStack_100;
  long local_f8;
  undefined1 local_f0;
  undefined1 auStack_b8 [88];
  
  lVar12 = *unaff_x20;
  lVar13 = *(long *)(lVar12 + 0x50);
  lVar9 = *(long *)(lVar13 + -8);
  puVar5 = auStack_280 + -(*(long *)(lVar9 + 0x40) + 0xfU & 0xfffffffffffffff0);
  FUN_10007b83c(auStack_b8,param_3);
  uVar8 = 0;
  FUN_1000133cc(auStack_b8,&local_1d8,&DAT_100104818,&DAT_1000d62d0);
  if (lStack_1d0 == 0) {
    FUN_10001fc18(&local_1d8,&DAT_100104818,&DAT_1000d62d0);
  }
  else {
    lStack_108 = lStack_1b0;
    local_110 = local_1b8;
    local_f8 = lStack_1a0;
    lStack_100 = local_1a8;
    local_f0 = local_198;
    lStack_128 = lStack_1d0;
    local_130 = local_1d8;
    puStack_118 = puStack_1c0;
    local_120 = local_1c8;
    if ((*(long *)(lStack_1a0 + 0x10) == 1) && (FUN_10007b15c(), (uVar8 & 0x10100) == 0x100)) {
      FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
      puVar5 = &DAT_100104198;
      FUN_1000133cc(&puStack_118,&local_1d8,&DAT_100104198,&DAT_1000d5180);
      FUN_100065194(&local_130);
      FUN_10000eb08(&DAT_100104198,&DAT_1000d5180);
      uVar3 = param_1;
      _swift_dynamicCast(param_1,&local_1d8,puVar5,param_4,6);
      pcVar10 = *(code **)(*(long *)(param_4 + -8) + 0x38);
      uVar8 = (uint)uVar3 ^ 1;
      goto LAB_10007c2c0;
    }
    FUN_100065194(&local_130);
  }
  puVar1 = (undefined *)unaff_x20[2];
  lVar2 = unaff_x20[3];
  puVar14 = *(undefined **)(lVar2 + 0x58);
  puVar4 = &DAT_100104440;
  FUN_10000eb08(&DAT_100104440,&DAT_1000d48d0);
  _swift_initStackObject();
  *(undefined8 *)(puVar4 + 0x18) = 2;
  *(undefined8 *)(puVar4 + 0x10) = 1;
  *(long *)(puVar4 + 0x38) = lVar13;
  local_278 = *(undefined8 *)(lVar12 + 0x58);
  *(undefined8 *)(puVar4 + 0x40) = local_278;
  FUN_100060d88(puVar4 + 0x20);
  pcVar10 = *(code **)(lVar9 + 0x10);
  (*pcVar10)();
  local_1d8 = puVar1;
  _swift_bridgeObjectRetain(puVar14);
  _swift_retain(lVar2);
  _swift_bridgeObjectRetain(puVar1);
  FUN_10006e50c(puVar4);
  puVar4 = local_1d8;
  puVar11 = (undefined1 *)unaff_x20[2];
  (*pcVar10)(puVar5,param_3,lVar13);
  _swift_bridgeObjectRetain(puVar11);
  FUN_100096aa4();
  puVar6 = auStack_b8;
  FUN_1000133cc(puVar6,&lStack_100,&DAT_100104818,&DAT_1000d62d0);
  local_120 = puVar4;
  puStack_1c0 = &DAT_1000f8f60;
  local_130 = puVar14;
  lStack_128 = lVar2;
  puStack_118 = puVar5;
  local_110 = puVar11;
  lStack_108 = lVar13;
  FUN_100083710();
  puVar5 = &DAT_1000f8f98;
  local_1b8 = puVar6;
  _swift_allocObject(&DAT_1000f8f98,0x81,7);
  local_1d8 = puVar5;
  FUN_1000837c0(&local_130,puVar5 + 0x10);
  __sSe4fromxs7Decoder_p_tKcfCTj(param_1,&local_1d8,param_4,param_5);
  if (unaff_x21 != (long *)0x0) {
    local_180[0] = unaff_x21;
    _swift_errorRetain(unaff_x21);
    puVar5 = &DAT_100104828;
    FUN_10000eb08(&DAT_100104828,&DAT_1000d5ba0);
    ppuVar7 = &local_1d8;
    _swift_dynamicCast(ppuVar7,local_180,puVar5,&DAT_1000fa8c8,0);
    if ((int)ppuVar7 != 0) {
      _swift_errorRelease();
      local_1e0 = local_188;
      local_1f0 = CONCAT71(uStack_197,local_198);
      lStack_208 = lStack_1b0;
      local_210 = local_1b8;
      lStack_1f8 = lStack_1a0;
      local_200 = local_1a8;
      lStack_1e8 = lStack_190;
      lStack_228 = lStack_1d0;
      local_230 = local_1d8;
      puStack_218 = puStack_1c0;
      puStack_220 = local_1c8;
      if (local_188 == '\f') {
        FUN_1000837f4(&local_230);
        FUN_10006b050(&local_130);
        FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
        (**(code **)(*(long *)(param_4 + -8) + 0x38))(param_1,1,1,param_4);
        _swift_errorRelease(local_180[0]);
        return;
      }
      FUN_100054664();
      _swift_allocError(&DAT_1000fa8c8,unaff_x21,0,0);
      unaff_x21[1] = lStack_228;
      *unaff_x21 = (long)local_230;
      unaff_x21[3] = (long)puStack_218;
      unaff_x21[2] = (long)puStack_220;
      *(char *)(unaff_x21 + 10) = local_1e0;
      unaff_x21[7] = lStack_1f8;
      unaff_x21[6] = local_200;
      unaff_x21[9] = lStack_1e8;
      unaff_x21[8] = local_1f0;
      unaff_x21[5] = lStack_208;
      unaff_x21[4] = (long)local_210;
      _swift_willThrow();
    }
    FUN_10006b050(&local_130);
    FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
    _swift_errorRelease(local_180[0]);
    return;
  }
  FUN_10006b050(&local_130);
  FUN_10001fc18(auStack_b8,&DAT_100104818,&DAT_1000d62d0);
  pcVar10 = *(code **)(*(long *)(param_4 + -8) + 0x38);
  uVar8 = 0;
LAB_10007c2c0:
  (*pcVar10)(param_1,uVar8,1,param_4);
  return;
}

