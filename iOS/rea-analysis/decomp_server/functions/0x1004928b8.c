// rea decompile_all
// name: FUN_1004928b8
// address: 0x1004928b8
// body: available
// range: 0x1004928b8-0x100492c2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_1004928b8(ulong *param_1,ulong *param_2)

{
  uint uVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  ulong uVar11;
  ulong uVar12;
  ulong uVar13;
  ulong uVar14;
  undefined1 auStack_100 [48];
  ulong local_d0;
  ulong uStack_c8;
  ulong local_c0;
  ulong uStack_b8;
  ulong local_b0;
  ulong uStack_a8;
  ulong local_a0;
  ulong uStack_98;
  ulong local_90;
  ulong uStack_88;
  ulong local_80;
  ulong uStack_78;
  
  uVar2 = *param_1;
  if (uVar2 != *param_2 || param_1[1] != param_2[1]) {
    __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF();
    uVar1 = 0;
    if ((uVar2 & 1) == 0) goto LAB_100492c08;
  }
  uVar7 = param_1[5];
  uVar2 = param_1[4];
  uVar13 = param_1[7];
  uVar11 = param_1[6];
  uVar8 = param_1[9];
  uVar4 = param_1[8];
  uVar9 = param_2[5];
  uVar5 = param_2[4];
  uVar14 = param_2[7];
  uVar12 = param_2[6];
  uVar10 = param_2[9];
  uVar6 = param_2[8];
  local_d0 = uVar5;
  uStack_c8 = uVar9;
  local_c0 = uVar12;
  uStack_b8 = uVar14;
  local_b0 = uVar6;
  uStack_a8 = uVar10;
  local_a0 = uVar2;
  uStack_98 = uVar7;
  local_90 = uVar11;
  uStack_88 = uVar13;
  local_80 = uVar4;
  uStack_78 = uVar8;
  if (uVar7 == 0) {
    if (uVar9 == 0) {
      FUN_10007f314(&local_a0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
      FUN_10007f314(&local_d0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
LAB_100492b2c:
      FUN_100492df8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
      uVar2 = param_1[2];
      FUN_1000094a4(uVar2,param_1[3],param_2[2],param_2[3]);
      uVar1 = (uint)uVar2;
      goto LAB_100492c08;
    }
LAB_100492a78:
    FUN_10007f314(&local_a0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
    FUN_10007f314(&local_d0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
    FUN_100492df8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
    uVar2 = uVar5;
    uVar7 = uVar9;
    uVar11 = uVar12;
    uVar13 = uVar14;
    uVar4 = uVar6;
    uVar8 = uVar10;
  }
  else {
    if (uVar9 == 0) goto LAB_100492a78;
    if (((uVar2 == uVar5) && (uVar7 == uVar9)) ||
       (uVar3 = uVar2,
       __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                 (uVar2,uVar7,uVar5,uVar9,0), (uVar3 & 1) != 0)) {
      if (((uVar11 != uVar12) || (uVar13 != uVar14)) &&
         (uVar3 = uVar11,
         __ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar11,uVar13,uVar12,uVar14,0), (uVar3 & 1) == 0)) {
        FUN_10007f314(&local_a0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
        FUN_10007f314(&local_d0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
        goto LAB_100492bd4;
      }
      FUN_10007f314(&local_a0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
      FUN_10007f314(&local_d0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
      uVar3 = uVar4;
      FUN_1000094a4(uVar4,uVar8,uVar6,uVar10);
      FUN_100492df8(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
      if ((uVar3 & 1) != 0) goto LAB_100492b2c;
    }
    else {
      FUN_10007f314(&local_a0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
      FUN_10007f314(&local_d0,auStack_100,&DAT_100aa1148,&DAT_10082f538);
LAB_100492bd4:
      FUN_100492df8(uVar5,uVar9,uVar12,uVar14,uVar6,uVar10);
    }
  }
  FUN_100492df8(uVar2,uVar7,uVar11,uVar13,uVar4,uVar8);
  uVar1 = 0;
LAB_100492c08:
  return uVar1 & 1;
}

