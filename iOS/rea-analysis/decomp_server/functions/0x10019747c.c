// rea decompile_all
// name: FUN_10019747c
// address: 0x10019747c
// body: available
// range: 0x10019747c-0x100197887 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Function: _objc_release replaced with injection: _objc_release_fixup */
/* WARNING: Function: _objc_retain replaced with injection: _objc_retain_fixup */

void FUN_10019747c(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  undefined8 uVar2;
  ID IVar3;
  long lVar4;
  undefined1 auStack_210 [40];
  undefined1 auStack_1e8 [120];
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 local_160;
  long lStack_158;
  ulong local_150;
  undefined8 uStack_148;
  ulong local_140;
  undefined8 uStack_138;
  ulong local_130;
  undefined8 uStack_128;
  undefined8 local_120;
  undefined8 uStack_118;
  ulong local_110;
  undefined8 uStack_108;
  ulong local_100;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 uStack_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  ulong local_90;
  undefined8 local_88;
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
    uStack_148 = param_1[5];
    local_150 = param_1[4];
    uStack_138 = param_1[7];
    local_140 = param_1[6];
    uStack_128 = param_1[9];
    local_130 = param_1[8];
    uStack_118 = param_1[0xb];
    local_120 = param_1[10];
    uStack_168 = param_1[1];
    local_170 = *param_1;
    lVar4 = param_1[3];
    local_160 = param_1[2];
    lStack_158 = lVar4;
    if (((uint)(local_80 >> 0x39) & 0x18 | (uint)(local_90 >> 0x3d)) == 3) {
      local_110 = local_90 & 0x1fffffffffffffff;
      local_100 = local_80 & 0xcfffffffffffffff;
      uStack_108 = local_88;
      if ((((local_150 & local_140 & local_130 ^ 0xffffffffffffffff) & 0x3000000000000000) != 0) &&
         (((uint)(local_130 >> 0x3b) & 6 | (uint)(local_140 >> 0x3d) & 1) == 2)) {
        FUN_100401b14(0);
        if (lVar4 == 1) {
          (*(code *)PTR____chkstk_darwin_100995498)(param_3 + 0x10);
          FUN_10007f314(&local_f0,auStack_1e8,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_10007f314(&local_170,auStack_1e8,&DAT_100a79598,&DAT_10080e930);
          FUN_1003fb45c(FUN_100198c78,auStack_210,0xd0000000000000b0,0x8000000100899320,
                        0xd00000000000002d,0x8000000100899600,0x91,7);
          FUN_10061630c();
        }
        else {
          FUN_10007f314(&local_f0,auStack_1e8,&DAT_100a75b98,&DAT_10080a1d0);
          FUN_10007f314(&local_170,auStack_1e8,&DAT_100a79598,&DAT_10080e930);
          FUN_1003fb45c(FUN_1001978b4,0,0xd0000000000000b0,0x8000000100899320,0xd00000000000002d,
                        0x8000000100899600,0x8c,7);
          puVar1 = &_OBJC_CLASS___NSError;
          _objc_allocWithZone();
          uVar2 = 0x6144656c676e6973;
          __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF
                    (0x6144656c676e6973,0xea00000000006174);
          IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a2,0);
          FUN_100616260(IVar3);
        }
        FUN_100040bb4(&local_170,&DAT_100a79598,&DAT_10080e930);
        FUN_100040bb4(&local_f0,&DAT_100a75b98,&DAT_10080a1d0);
        return;
      }
    }
  }
  FUN_100401b14(0);
  FUN_1003fb45c(FUN_100197888,0,0xd0000000000000b0,0x8000000100899320,0xd00000000000002d,
                0x8000000100899600,0x86,7);
  puVar1 = &_OBJC_CLASS___NSError;
  _objc_allocWithZone();
  uVar2 = 0x6144656c676e6973;
  __sSS10FoundationE19_bridgeToObjectiveCSo8NSStringCyF(0x6144656c676e6973,0xea00000000006174);
  IVar3 = _objc_msgSend((ID)puVar1,"initWithDomain:code:userInfo:",uVar2,0x186a1,0);
  FUN_100616260(IVar3);
  return;
}

