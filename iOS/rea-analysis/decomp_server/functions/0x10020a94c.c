// rea decompile_all
// name: FUN_10020a94c
// address: 0x10020a94c
// body: available
// range: 0x10020a94c-0x10020ac57 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10020a94c(undefined8 *param_1,long param_2,undefined8 param_3,undefined8 param_4,
                  undefined8 param_5,undefined8 param_6,undefined4 param_7,undefined4 param_8)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 *puVar4;
  undefined1 auStack_220 [16];
  undefined8 local_210;
  undefined8 uStack_208;
  undefined8 local_200;
  undefined8 uStack_1f8;
  undefined8 *local_1f0;
  undefined4 local_1e0;
  undefined4 local_1dc;
  undefined8 local_1d8;
  undefined8 local_1d0;
  undefined8 uStack_1c8;
  undefined8 uStack_1c0;
  undefined8 local_1b8;
  undefined1 local_1b0;
  undefined8 uStack_1a8;
  undefined8 uStack_1a0;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined8 local_188;
  undefined8 uStack_180;
  undefined8 local_178;
  undefined1 auStack_170 [24];
  undefined8 local_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined1 local_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  undefined8 local_110;
  undefined8 uStack_108;
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 *local_e8;
  undefined8 uStack_e0;
  char local_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  
  _swift_beginAccess(param_2 + 0x10,auStack_170,0,0);
  param_2 = param_2 + 0x10;
  _swift_weakLoadStrong();
  local_200 = param_3;
  uStack_1f8 = param_4;
  if (param_2 == 0) {
    FUN_100401b14();
    (*(code *)PTR____chkstk_darwin_100995498)(param_2);
    local_1f0 = (undefined8 *)param_5;
    FUN_1003fb4bc(FUN_10020d2cc,&local_210,0xd0000000000000a6,0x80000001008a2d40,0xd00000000000002e,
                  0x80000001008a2e20,0x30b,0);
  }
  else {
    uVar2 = *param_1;
    uVar1 = param_1[1];
    puVar4 = (undefined8 *)param_1[2];
    local_1e0 = param_7;
    local_1dc = param_8;
    local_1d8 = param_5;
    if ((*(byte *)((long)param_1 + 0x21) & 1) == 0) {
      FUN_10017c290(&local_158,param_6,uVar2,uVar1,puVar4);
      uVar3 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
      local_210 = param_3;
      uStack_208 = param_4;
      local_200 = uVar2;
      uStack_1f8 = uVar1;
      local_1f0 = puVar4;
      FUN_1003fb48c(FUN_10020d2e4,auStack_220,0xd0000000000000a6,0x80000001008a2d40,
                    0xd00000000000002e,0x80000001008a2e20,0x316,0);
    }
    else {
      uStack_e0 = param_1[3];
      local_d8 = *(char *)(param_1 + 4);
      local_f8 = uVar2;
      uStack_f0 = uVar1;
      local_e8 = puVar4;
      FUN_10017c79c(&local_158,param_6,&local_f8);
      if (local_d8 == '\x03') {
        FUN_1001857b4(local_f8,uStack_f0);
      }
      uVar2 = 0;
      FUN_100401b14(0);
      (*(code *)PTR____chkstk_darwin_100995498)(uVar2);
      local_1f0 = &local_f8;
      FUN_1003fb4ec(FUN_10020d2d8,&local_210,0xd0000000000000a6,0x80000001008a2d40,
                    0xd00000000000002e,0x80000001008a2e20,799,0);
    }
    local_1d0 = local_158;
    uStack_1c0 = uStack_148;
    uStack_1c8 = local_150;
    local_1b8 = local_140;
    local_1b0 = local_138;
    uStack_1a0 = uStack_128;
    uStack_1a8 = local_130;
    uStack_190 = uStack_118;
    local_198 = local_120;
    uStack_180 = uStack_108;
    local_188 = local_110;
    local_178 = local_100;
    uStack_c8 = local_150;
    local_d0 = local_158;
    uStack_b8 = local_140;
    uStack_c0 = uStack_148;
    uStack_88 = local_110;
    local_90 = uStack_118;
    uStack_78 = local_100;
    uStack_80 = uStack_108;
    uStack_a8 = local_130;
    uStack_98 = local_120;
    uStack_a0 = uStack_128;
    FUN_1002045d8(local_1e0,local_1d8,&local_d0,local_1dc);
    _swift_release(param_2);
    FUN_10020bbc8(&local_1d0);
  }
  return;
}

