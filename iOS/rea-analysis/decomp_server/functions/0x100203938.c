// rea decompile_all
// name: FUN_100203938
// address: 0x100203938
// body: available
// range: 0x100203938-0x100203ba7 inclusive
// range: 0x1002040e0-0x1002040ff inclusive
// non_contiguous: true
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100203938(undefined8 param_1,long param_2,undefined8 *param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  int iVar4;
  undefined8 *puVar5;
  ulong uVar6;
  undefined8 local_3c0;
  undefined8 uStack_3b8;
  undefined8 local_330;
  undefined8 uStack_328;
  undefined8 local_320;
  undefined4 local_30f;
  undefined3 uStack_30b;
  undefined8 local_308;
  undefined8 uStack_300;
  undefined8 local_2f8;
  undefined8 uStack_2f0;
  undefined8 local_2e8;
  undefined8 uStack_2e0;
  undefined8 local_2d8;
  undefined8 local_2a0;
  undefined8 uStack_298;
  undefined8 local_290;
  undefined8 uStack_288;
  undefined8 local_280;
  undefined8 uStack_278;
  undefined8 uStack_270;
  undefined8 local_268;
  undefined8 uStack_260;
  undefined8 local_258;
  undefined8 uStack_250;
  undefined8 local_248;
  undefined8 local_240;
  undefined8 uStack_238;
  undefined8 uStack_230;
  undefined8 uStack_228;
  undefined1 local_220;
  undefined1 local_210;
  undefined8 local_190;
  undefined8 uStack_188;
  undefined8 uStack_180;
  undefined8 uStack_178;
  undefined8 local_170;
  undefined8 uStack_168;
  undefined8 uStack_160;
  undefined8 uStack_158;
  undefined8 local_150;
  undefined8 uStack_148;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined8 local_130;
  undefined8 uStack_128;
  undefined8 uStack_120;
  undefined8 uStack_118;
  undefined1 local_110;
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
  undefined1 local_80;
  
  __s10Foundation3URLVMa(0);
  uStack_a8 = param_3[0xb];
  uStack_b0 = param_3[10];
  uStack_128 = param_3[0xd];
  local_130 = param_3[0xc];
  uStack_98 = param_3[0xd];
  local_a0 = param_3[0xc];
  uStack_118 = param_3[0xf];
  uStack_120 = param_3[0xe];
  uStack_e8 = param_3[3];
  uStack_f0 = param_3[2];
  uStack_168 = param_3[5];
  local_170 = param_3[4];
  uStack_d8 = param_3[5];
  local_e0 = param_3[4];
  uStack_158 = param_3[7];
  uStack_160 = param_3[6];
  uStack_c8 = param_3[7];
  uStack_d0 = param_3[6];
  uStack_148 = param_3[9];
  local_150 = param_3[8];
  uStack_b8 = param_3[9];
  local_c0 = param_3[8];
  uStack_138 = param_3[0xb];
  uStack_140 = param_3[10];
  uStack_188 = param_3[1];
  local_190 = *param_3;
  uStack_178 = param_3[3];
  uStack_180 = param_3[2];
  uStack_f8 = param_3[1];
  local_100 = *param_3;
  uStack_88 = param_3[0xf];
  uStack_90 = param_3[0xe];
  local_110 = *(undefined1 *)(param_3 + 0x10);
  local_80 = *(undefined1 *)(param_3 + 0x10);
  iVar4 = (int)&local_100;
  FUN_1001241c4();
  if (iVar4 == 1) {
    FUN_100401b14(0);
    FUN_1003fb4ec(FUN_1002045ac,0,0xd0000000000000a6,0x80000001008a2d40,0xd00000000000002a,
                  0x80000001008a2df0,0x59,0);
    uVar6 = *(ulong *)(param_2 + 0xb8) >> 0x3c;
    uVar1 = 0;
    if (uVar6 < 0xf) {
      uVar1 = *(undefined8 *)(param_2 + 0xa8);
    }
    uVar2 = 0;
    if (uVar6 < 0xf) {
      uVar2 = *(undefined8 *)(param_2 + 0xb0);
    }
    uVar3 = 0xc000000000000000;
    if (uVar6 < 0xf) {
      uVar3 = *(ulong *)(param_2 + 0xb8);
    }
    FUN_100040b80();
    FUN_100006cdc(uVar2,uVar3);
    FUN_1004a03a4(&local_330);
    uStack_3b8 = uStack_328;
    local_3c0 = local_330;
    uVar6 = 0;
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
              (0,0xe000000000000000,0x2f3a,0xe200000000000000,0);
    if ((uVar6 & 1) == 0) {
      __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                (0,0xe000000000000000,0x6c75616665442f3a,0xe900000000000074,0);
    }
    FUN_1000a9ec8(&local_3c0);
    local_210 = 1;
    FUN_100006cdc(local_308,uStack_300);
    local_2a0 = 0;
    uStack_298 = 0xe000000000000000;
    local_290 = local_320;
    uStack_288 = 3;
    local_280._0_5_ = CONCAT41(local_30f,local_210);
    local_280 = CONCAT44(CONCAT31(uStack_30b,local_30f._3_1_),(undefined4)local_280);
    uStack_270 = 0xc000000000000000;
    uStack_278 = 0;
    uStack_260 = uStack_2f0;
    local_268 = local_2f8;
    uStack_250 = uStack_2e0;
    local_258 = local_2e8;
    local_248 = local_2d8;
    FUN_1002045d8(param_1,uVar1,&local_2a0,param_4);
    FUN_10020bbc8(&local_2a0);
    return;
  }
  uStack_238 = uStack_98;
  local_240 = local_a0;
  uStack_228 = uStack_88;
  uStack_230 = uStack_90;
  local_220 = local_80;
  uStack_278 = uStack_d8;
  local_280 = local_e0;
  local_268 = uStack_c8;
  uStack_270 = uStack_d0;
  local_258 = uStack_b8;
  uStack_260 = local_c0;
  local_248 = uStack_a8;
  uStack_250 = uStack_b0;
  uStack_298 = uStack_f8;
  local_2a0 = local_100;
  uStack_288 = uStack_e8;
  local_290 = uStack_f0;
  puVar5 = &local_2a0;
  FUN_1001241ec();
                    /* WARNING: Could not recover jumptable at 0x000100203ba4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&UNK_100203ba8 +
            (ulong)*(ushort *)(&DAT_100812c70 + ((ulong)puVar5 & 0xffffffff) * 2) * 4))();
  return;
}

