// rea decompile_all
// name: FUN_100137148
// address: 0x100137148
// body: available
// range: 0x100137148-0x1001375a7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_100137148(long *param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  undefined1 auStack_240 [16];
  long *local_230;
  long local_220;
  undefined8 uStack_218;
  long lStack_210;
  long lStack_208;
  undefined8 local_200;
  long lStack_1f8;
  ulong local_1f0;
  long local_1a0;
  long lStack_198;
  long local_190;
  long lStack_188;
  ulong local_180;
  long lStack_178;
  ulong local_170;
  long lStack_168;
  ulong local_160;
  long lStack_158;
  long lStack_150;
  long lStack_148;
  ulong local_140;
  long lStack_138;
  ulong local_130;
  long local_128;
  byte bStack_120;
  undefined7 uStack_11f;
  long local_118;
  long lStack_110;
  undefined4 local_108;
  undefined4 uStack_104;
  long lStack_100;
  ulong local_f8;
  long local_f0;
  long lStack_e8;
  long lStack_e0;
  long lStack_d8;
  long local_d0;
  long lStack_c8;
  long local_c0;
  long lStack_b8;
  long lStack_b0;
  long lStack_a8;
  long local_a0;
  long lStack_98;
  ulong local_90;
  long local_88;
  ulong local_80;
  
  lStack_98 = param_1[0xb];
  local_a0 = param_1[10];
  local_88 = param_1[0xd];
  local_90 = param_1[0xc];
  lStack_a8 = param_1[9];
  lStack_b0 = param_1[8];
  local_80 = param_1[0xe];
  lStack_e8 = param_1[1];
  local_f0 = *param_1;
  lStack_d8 = param_1[3];
  lStack_e0 = param_1[2];
  lStack_c8 = param_1[5];
  local_d0 = param_1[4];
  lStack_b8 = param_1[7];
  local_c0 = param_1[6];
  if ((local_90 >> 8 != 0xffffffff) || ((local_80 & 0x3000000000000000) != 0)) {
    lStack_178 = param_1[5];
    local_180 = param_1[4];
    lStack_168 = param_1[7];
    local_170 = param_1[6];
    lStack_158 = param_1[9];
    local_160 = param_1[8];
    lStack_148 = param_1[0xb];
    lStack_150 = param_1[10];
    lStack_198 = param_1[1];
    local_1a0 = *param_1;
    lStack_188 = param_1[3];
    local_190 = param_1[2];
    if (((uint)(local_80 >> 0x39) & 0x18 | (uint)(local_90 >> 0x3d)) == 3) {
      local_140 = local_90 & 0x1fffffffffffffff;
      local_130 = local_80 & 0xcfffffffffffffff;
      lStack_138 = local_88;
      if ((((local_180 & local_170 & local_160 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) &&
         (((uint)(local_160 >> 0x3b) & 6 | (uint)(local_170 >> 0x3d) & 1) == 1)) {
        local_f8 = local_170 & 0xdfffffffffffffff;
        bStack_120 = (byte)lStack_198 & 1;
        local_108 = (undefined4)local_180;
        local_128 = local_1a0;
        local_118 = local_190;
        lStack_110 = lStack_188;
        lStack_100 = lStack_178;
        if (local_1a0 == 1) {
          FUN_100401b14(0);
          (*(code *)PTR____chkstk_darwin_100995498)();
          local_230 = &local_128;
          FUN_10007f314(&local_f0,&local_220,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_10007f314(&local_1a0,&local_220,&DAT_100a79598,&DAT_10080e930);
          FUN_1003fb45c(FUN_100139d08,auStack_240,0xd0000000000000b1,0x80000001008900b0,
                        &DAT_d000000000000010,0x80000001008904e0,0x4a,7);
          uStack_218 = CONCAT71(uStack_11f,bStack_120);
          local_220 = local_128;
          lStack_208 = lStack_110;
          lStack_210 = local_118;
          local_200 = CONCAT44(uStack_104,local_108);
          lStack_1f8 = lStack_100;
          local_1f0 = local_f8;
          FUN_10061630c(&local_220);
          FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_100040bb4(&local_1a0,&DAT_100a79598,&DAT_10080e930);
          return;
        }
        puVar1 = &_OBJC_CLASS___NSError;
        _objc_allocWithZone();
        FUN_10007f314(&local_f0,&local_220,&DAT_100a75b98,&DAT_10080a1d0);
        FUN_10007f314(&local_1a0,&local_220,&DAT_100a79598,&DAT_10080e930);
        uVar2 = 0x6b734161746164;
        __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b734161746164,0xe700000000000000);
        IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a2,0);
        FUN_100401b14(0);
        FUN_1003fb45c(FUN_1001375d4,0,0xd0000000000000b1,0x80000001008900b0,&DAT_d000000000000010,
                      0x80000001008904e0,0x46,7);
        FUN_100616260(IVar3);
        FUN_100040bb4(&local_1a0,&DAT_100a79598,&DAT_10080e930);
        FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
        return;
      }
    }
  }
  puVar1 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0x6b734161746164;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6b734161746164,0xe700000000000000);
  IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a1,0);
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_1001375a8,0,0xd0000000000000b1,0x80000001008900b0,&DAT_d000000000000010,
                0x80000001008904e0,0x40,7);
  FUN_100616260(IVar3);
  return;
}

