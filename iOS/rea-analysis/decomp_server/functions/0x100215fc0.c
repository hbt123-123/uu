// rea decompile_all
// name: FUN_100215fc0
// address: 0x100215fc0
// body: available
// range: 0x100215fc0-0x100216403 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100215fc0(long param_1,char param_2,undefined8 param_3,undefined8 param_4,long param_5,
                  long param_6,undefined8 param_7)

{
  undefined1 uVar1;
  undefined1 *puVar2;
  undefined8 uVar3;
  code *pcVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined1 auStack_2e0 [16];
  undefined8 local_2d0;
  undefined4 local_2c8;
  undefined4 local_2c4;
  long local_2c0;
  long local_2b8;
  undefined8 local_2b0;
  undefined1 auStack_2a0 [24];
  undefined *local_288;
  undefined8 uStack_280;
  undefined8 local_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 uStack_240;
  undefined8 local_238;
  undefined8 uStack_230;
  undefined8 local_228;
  undefined8 uStack_220;
  undefined8 local_218;
  undefined8 uStack_210;
  undefined8 local_208;
  undefined8 uStack_200;
  undefined8 local_1f8;
  undefined8 uStack_1f0;
  undefined1 local_1e8;
  undefined *local_1e0;
  undefined8 uStack_1d8;
  undefined8 uStack_1d0;
  undefined8 uStack_1c8;
  undefined8 local_1c0;
  undefined8 uStack_1b8;
  undefined8 uStack_1b0;
  undefined8 uStack_1a8;
  undefined8 local_1a0;
  undefined8 uStack_198;
  undefined8 uStack_190;
  undefined8 uStack_188;
  undefined8 local_180;
  undefined8 uStack_178;
  undefined8 uStack_170;
  undefined8 uStack_168;
  undefined8 local_160;
  undefined8 uStack_158;
  undefined8 uStack_150;
  undefined8 uStack_148;
  undefined1 local_140;
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
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined1 local_90;
  undefined1 auStack_88 [40];
  
  uVar6 = (undefined4)((ulong)param_3 >> 0x20);
  local_2c4 = (undefined4)((ulong)param_4 >> 0x20);
  uVar1 = (undefined1)param_3;
  local_2c8 = (int)param_4;
  if (param_2 == '\x02') {
    if (param_1 != 0) {
      local_2b0 = param_7;
      _swift_beginAccess(param_5 + 0x10,auStack_88,0,0);
      puVar2 = (undefined1 *)(param_5 + 0x10);
      _swift_weakLoadStrong();
      if (puVar2 == (undefined1 *)0x0) {
        FUN_100218098();
        puVar5 = &DAT_10099c0d0;
        _swift_allocError(&DAT_10099c0d0,puVar2,0,0);
        *puVar2 = 2;
        local_288 = puVar5;
        FUN_1002180d8(&local_288);
        uStack_158 = uStack_200;
        local_160 = local_208;
        uStack_148 = uStack_1f0;
        uStack_150 = local_1f8;
        local_140 = local_1e8;
        uStack_198 = uStack_240;
        local_1a0 = local_248;
        uStack_188 = uStack_230;
        uStack_190 = local_238;
        uStack_178 = uStack_220;
        local_180 = local_228;
        uStack_168 = uStack_210;
        uStack_170 = local_218;
        uStack_1d8 = uStack_280;
        local_1e0 = local_288;
        uStack_1c8 = uStack_270;
        uStack_1d0 = local_278;
        uStack_1b8 = uStack_260;
        local_1c0 = local_268;
        uStack_1a8 = uStack_250;
        uStack_1b0 = local_258;
        FUN_100008290(&local_1e0);
        _swift_beginAccess(param_6 + 0x10,auStack_2a0,1,0);
        uStack_a8 = *(undefined8 *)(param_6 + 0x98);
        local_b0 = *(undefined8 *)(param_6 + 0x90);
        uStack_98 = *(undefined8 *)(param_6 + 0xa8);
        uStack_a0 = *(undefined8 *)(param_6 + 0xa0);
        local_90 = *(undefined1 *)(param_6 + 0xb0);
        uStack_e8 = *(undefined8 *)(param_6 + 0x58);
        local_f0 = *(undefined8 *)(param_6 + 0x50);
        uStack_d8 = *(undefined8 *)(param_6 + 0x68);
        uStack_e0 = *(undefined8 *)(param_6 + 0x60);
        uStack_c8 = *(undefined8 *)(param_6 + 0x78);
        local_d0 = *(undefined8 *)(param_6 + 0x70);
        uStack_b8 = *(undefined8 *)(param_6 + 0x88);
        uStack_c0 = *(undefined8 *)(param_6 + 0x80);
        uStack_128 = *(undefined8 *)(param_6 + 0x18);
        local_130 = *(undefined8 *)(param_6 + 0x10);
        uStack_118 = *(undefined8 *)(param_6 + 0x28);
        uStack_120 = *(undefined8 *)(param_6 + 0x20);
        uStack_108 = *(undefined8 *)(param_6 + 0x38);
        local_110 = *(undefined8 *)(param_6 + 0x30);
        uStack_f8 = *(undefined8 *)(param_6 + 0x48);
        uStack_100 = *(undefined8 *)(param_6 + 0x40);
        *(undefined8 *)(param_6 + 0x98) = uStack_158;
        *(undefined8 *)(param_6 + 0x90) = local_160;
        *(undefined8 *)(param_6 + 0xa8) = uStack_148;
        *(undefined8 *)(param_6 + 0xa0) = uStack_150;
        *(undefined1 *)(param_6 + 0xb0) = local_140;
        *(undefined8 *)(param_6 + 0x58) = uStack_198;
        *(undefined8 *)(param_6 + 0x50) = local_1a0;
        *(undefined8 *)(param_6 + 0x68) = uStack_188;
        *(undefined8 *)(param_6 + 0x60) = uStack_190;
        *(undefined8 *)(param_6 + 0x78) = uStack_178;
        *(undefined8 *)(param_6 + 0x70) = local_180;
        *(undefined8 *)(param_6 + 0x88) = uStack_168;
        *(undefined8 *)(param_6 + 0x80) = uStack_170;
        *(undefined8 *)(param_6 + 0x18) = uStack_1d8;
        *(undefined **)(param_6 + 0x10) = local_1e0;
        *(undefined8 *)(param_6 + 0x28) = uStack_1c8;
        *(undefined8 *)(param_6 + 0x20) = uStack_1d0;
        *(undefined8 *)(param_6 + 0x38) = uStack_1b8;
        *(undefined8 *)(param_6 + 0x30) = local_1c0;
        *(undefined8 *)(param_6 + 0x48) = uStack_1a8;
        *(undefined8 *)(param_6 + 0x40) = uStack_1b0;
        FUN_100040bb4(&local_130,&DAT_100a7dcc0,&DAT_100812f68);
        __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
      }
      else {
        uVar3 = 0;
        FUN_100401b14(0);
        (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
        local_2d0 = (undefined1 *)CONCAT71(local_2d0._1_7_,uVar1);
        local_2d0 = (undefined1 *)CONCAT44(uVar6,(undefined4)local_2d0);
        local_2c0 = param_1;
        FUN_1003fb45c(FUN_100218800,auStack_2e0,0xd0000000000000b2,0x8000000100885c70,
                      0xd000000000000031,0x80000001008a4a00,0x228,0);
        (*(code *)PTR____chkstk_darwin_100995498)();
        local_2c8 = CONCAT31(local_2c8._1_3_,uVar1);
        pcVar4 = FUN_100218918;
        local_2d0 = puVar2;
        local_2c4 = uVar6;
        local_2c0 = param_4;
        FUN_100407cdc(FUN_100218918,auStack_2e0,PTR___sytN_100995e90 + 8);
        FUN_100218098();
        puVar5 = &DAT_10099c0d0;
        _swift_allocError(&DAT_10099c0d0,pcVar4,0,0);
        *pcVar4 = (code)0x5;
        local_288 = puVar5;
        FUN_1002180d8(&local_288);
        uStack_158 = uStack_200;
        local_160 = local_208;
        uStack_148 = uStack_1f0;
        uStack_150 = local_1f8;
        local_140 = local_1e8;
        uStack_198 = uStack_240;
        local_1a0 = local_248;
        uStack_188 = uStack_230;
        uStack_190 = local_238;
        uStack_178 = uStack_220;
        local_180 = local_228;
        uStack_168 = uStack_210;
        uStack_170 = local_218;
        uStack_1d8 = uStack_280;
        local_1e0 = local_288;
        uStack_1c8 = uStack_270;
        uStack_1d0 = local_278;
        uStack_1b8 = uStack_260;
        local_1c0 = local_268;
        uStack_1a8 = uStack_250;
        uStack_1b0 = local_258;
        FUN_100008290(&local_1e0);
        _swift_beginAccess(param_6 + 0x10,auStack_2a0,1,0);
        uStack_a8 = *(undefined8 *)(param_6 + 0x98);
        local_b0 = *(undefined8 *)(param_6 + 0x90);
        uStack_98 = *(undefined8 *)(param_6 + 0xa8);
        uStack_a0 = *(undefined8 *)(param_6 + 0xa0);
        local_90 = *(undefined1 *)(param_6 + 0xb0);
        uStack_e8 = *(undefined8 *)(param_6 + 0x58);
        local_f0 = *(undefined8 *)(param_6 + 0x50);
        uStack_d8 = *(undefined8 *)(param_6 + 0x68);
        uStack_e0 = *(undefined8 *)(param_6 + 0x60);
        uStack_c8 = *(undefined8 *)(param_6 + 0x78);
        local_d0 = *(undefined8 *)(param_6 + 0x70);
        uStack_b8 = *(undefined8 *)(param_6 + 0x88);
        uStack_c0 = *(undefined8 *)(param_6 + 0x80);
        uStack_128 = *(undefined8 *)(param_6 + 0x18);
        local_130 = *(undefined8 *)(param_6 + 0x10);
        uStack_118 = *(undefined8 *)(param_6 + 0x28);
        uStack_120 = *(undefined8 *)(param_6 + 0x20);
        uStack_108 = *(undefined8 *)(param_6 + 0x38);
        local_110 = *(undefined8 *)(param_6 + 0x30);
        uStack_f8 = *(undefined8 *)(param_6 + 0x48);
        uStack_100 = *(undefined8 *)(param_6 + 0x40);
        *(undefined8 *)(param_6 + 0x98) = uStack_158;
        *(undefined8 *)(param_6 + 0x90) = local_160;
        *(undefined8 *)(param_6 + 0xa8) = uStack_148;
        *(undefined8 *)(param_6 + 0xa0) = uStack_150;
        *(undefined1 *)(param_6 + 0xb0) = local_140;
        *(undefined8 *)(param_6 + 0x58) = uStack_198;
        *(undefined8 *)(param_6 + 0x50) = local_1a0;
        *(undefined8 *)(param_6 + 0x68) = uStack_188;
        *(undefined8 *)(param_6 + 0x60) = uStack_190;
        *(undefined8 *)(param_6 + 0x78) = uStack_178;
        *(undefined8 *)(param_6 + 0x70) = local_180;
        *(undefined8 *)(param_6 + 0x88) = uStack_168;
        *(undefined8 *)(param_6 + 0x80) = uStack_170;
        *(undefined8 *)(param_6 + 0x18) = uStack_1d8;
        *(undefined **)(param_6 + 0x10) = local_1e0;
        *(undefined8 *)(param_6 + 0x28) = uStack_1c8;
        *(undefined8 *)(param_6 + 0x20) = uStack_1d0;
        *(undefined8 *)(param_6 + 0x38) = uStack_1b8;
        *(undefined8 *)(param_6 + 0x30) = local_1c0;
        *(undefined8 *)(param_6 + 0x48) = uStack_1a8;
        *(undefined8 *)(param_6 + 0x40) = uStack_1b0;
        FUN_100040bb4(&local_130,&DAT_100a7dcc0,&DAT_100812f68);
        __sSo21OS_dispatch_semaphoreC8DispatchE6signalSiyF();
        _swift_release(puVar2);
      }
    }
  }
  else if (param_1 != 0) {
    uVar3 = 0;
    FUN_100401b14(0);
    (*(code *)PTR____chkstk_darwin_100995498)(uVar3);
    local_2d0 = (undefined1 *)CONCAT71(local_2d0._1_7_,uVar1);
    local_2d0 = (undefined1 *)CONCAT44(uVar6,(undefined4)local_2d0);
    local_2c0 = CONCAT71(local_2c0._1_7_,param_2);
    local_2b8 = param_1;
    FUN_1003fb4bc(FUN_1002187e4,auStack_2e0,0xd0000000000000b2,0x8000000100885c70,0xd000000000000031
                  ,0x80000001008a4a00,0x21f,0);
  }
  return;
}

