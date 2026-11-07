// rea decompile_all
// name: FUN_10016faa4
// address: 0x10016faa4
// body: available
// range: 0x10016faa4-0x10016fefb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10016faa4(ulong *param_1,undefined8 param_2,int param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined1 auStack_230 [16];
  int *local_220;
  undefined8 local_210;
  ulong uStack_208;
  undefined8 uStack_200;
  ulong uStack_1f8;
  ulong local_1f0;
  ulong local_190;
  ulong uStack_188;
  ulong local_180;
  ulong uStack_178;
  ulong local_170;
  ulong uStack_168;
  ulong local_160;
  ulong uStack_158;
  ulong local_150;
  ulong uStack_148;
  ulong uStack_140;
  ulong uStack_138;
  ulong local_130;
  ulong uStack_128;
  ulong local_120;
  int local_118;
  undefined4 uStack_114;
  ulong uStack_110;
  byte local_108;
  undefined7 uStack_107;
  ulong local_100;
  ulong local_f8;
  ulong local_f0;
  ulong uStack_e8;
  ulong uStack_e0;
  ulong uStack_d8;
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong uStack_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong local_88;
  ulong local_80;
  
  uStack_98 = param_1[0xb];
  local_a0 = param_1[10];
  local_88 = param_1[0xd];
  local_90 = param_1[0xc];
  uStack_a8 = param_1[9];
  uStack_b0 = param_1[8];
  local_80 = param_1[0xe];
  uStack_e8 = param_1[1];
  local_f0 = *param_1;
  uStack_d8 = param_1[3];
  uStack_e0 = param_1[2];
  uStack_c8 = param_1[5];
  local_d0 = param_1[4];
  uStack_b8 = param_1[7];
  local_c0 = param_1[6];
  if ((local_90 >> 8 != 0xffffffff) || ((local_80 & 0x3000000000000000) != 0)) {
    uStack_168 = param_1[5];
    local_170 = param_1[4];
    uStack_158 = param_1[7];
    local_160 = param_1[6];
    uStack_148 = param_1[9];
    local_150 = param_1[8];
    uStack_138 = param_1[0xb];
    uStack_140 = param_1[10];
    uStack_188 = param_1[1];
    local_190 = *param_1;
    uStack_178 = param_1[3];
    local_180 = param_1[2];
    if (((uint)(local_80 >> 0x39) & 0x18 | (uint)(local_90 >> 0x3d)) == 3) {
      local_130 = local_90 & 0x1fffffffffffffff;
      local_120 = local_80 & 0xcfffffffffffffff;
      uStack_128 = local_88;
      if ((((local_170 & local_160 & local_150 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) &&
         (((uint)(local_150 >> 0x3b) & 6 | (uint)(local_160 >> 0x3d) & 1) == 3)) {
        local_118 = (int)local_190;
        uStack_114 = (undefined4)(local_190 >> 0x20);
        local_108 = (byte)local_180 & 1;
        uStack_110 = uStack_188;
        local_100 = uStack_178;
        local_f8 = local_170;
        if ((local_118 == param_3) && ((uStack_188 == 1 && (local_190 >> 0x20 != 0)))) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_220 = &local_118;
          FUN_10007f314(&local_f0,&local_210,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_10007f314(&local_190,&local_210,&DAT_100a79598,&DAT_10080e930);
          FUN_1003fb45c(FUN_1001703a0,auStack_230,0xd0000000000000b1,0x8000000100895d70,
                        0xd000000000000029,0x8000000100895e30,0x34,7);
          local_210 = CONCAT44(uStack_114,local_118);
          uStack_200 = CONCAT71(uStack_107,local_108);
          uStack_208 = uStack_110;
          uStack_1f8 = local_100;
          local_1f0 = local_f8;
          FUN_10061630c(&local_210);
          FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_100040bb4(&local_190,&DAT_100a79598,&DAT_10080e930);
          return;
        }
        puVar1 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        FUN_10007f314(&local_f0,&local_210,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_10007f314(&local_190,&local_210,&DAT_100a79598,&DAT_10080e930);
        uVar2 = 0xd000000000000012;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100895980)
        ;
        IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a2,0);
        FUN_100401b14(0);
        FUN_1003fb4ec(FUN_10016ff28,0,0xd0000000000000b1,0x8000000100895d70,0xd000000000000029,
                      0x8000000100895e30,0x30,7);
        FUN_100616260(IVar3);
        FUN_100040bb4(&local_190,&DAT_100a79598,&DAT_10080e930);
        FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
        return;
      }
    }
  }
  puVar1 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0xd000000000000012;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0xd000000000000012,0x8000000100895980);
  IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a1,0);
  FUN_100401b14(0);
  FUN_1003fb4ec(FUN_10016fefc,0,0xd0000000000000b1,0x8000000100895d70,0xd000000000000029,
                0x8000000100895e30,0x2a,7);
  FUN_100616260(IVar3);
  return;
}

