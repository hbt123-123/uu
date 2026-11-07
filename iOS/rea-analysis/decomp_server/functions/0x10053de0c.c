// rea decompile_all
// name: FUN_10053de0c
// address: 0x10053de0c
// body: available
// range: 0x10053de0c-0x10053df4b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053de0c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  uint uVar10;
  ulong *unaff_x20;
  ulong local_b0;
  ulong uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 local_90;
  undefined8 uStack_88;
  undefined1 auStack_78 [40];
  
  iVar1 = (int)&local_b0;
  FUN_1000b142c(param_1,auStack_78);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_b0,auStack_78,puVar2,&DAT_1009d78d0,6);
  uVar9 = uStack_88;
  uVar8 = local_90;
  uVar7 = uStack_98;
  uVar6 = local_a0;
  uVar5 = uStack_a8;
  uVar4 = local_b0;
  if (iVar1 == 0) {
    uStack_98 = 0;
    local_a0 = 0;
    uStack_88 = 0;
    local_90 = 0;
    uStack_a8 = 0;
    local_b0 = 0;
    uVar4 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    uVar8 = 0;
    uVar9 = 0;
  }
  else {
    uVar3 = *unaff_x20;
    if (((uVar3 == local_b0 && uStack_a8 == unaff_x20[1]) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar3,unaff_x20[1],local_b0,uStack_a8,0), (uVar3 & 1) != 0)) &&
       ((int)unaff_x20[2] == (int)uVar6)) {
      uVar3 = unaff_x20[3];
      FUN_10056acec(uVar3,uVar7);
      if ((uVar3 & 1) != 0) {
        uVar3 = unaff_x20[4];
        FUN_1000094a4(uVar3,unaff_x20[5],uVar8,uVar9);
        uVar10 = (uint)uVar3;
        FUN_100492df8(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
        goto LAB_10053df2c;
      }
    }
  }
  FUN_100492df8(uVar4,uVar5,uVar6,uVar7,uVar8,uVar9);
  uVar10 = 0;
LAB_10053df2c:
  return uVar10 & 1;
}

