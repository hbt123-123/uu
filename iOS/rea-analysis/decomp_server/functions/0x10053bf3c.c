// rea decompile_all
// name: FUN_10053bf3c
// address: 0x10053bf3c
// body: available
// range: 0x10053bf3c-0x10053c0c7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053bf3c(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  long lVar7;
  byte bVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  long lStack_78;
  byte local_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&local_90;
  FUN_1000b142c(param_1,auStack_68);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_90,auStack_68,puVar2,&DAT_1009d5898,6);
  bVar8 = local_70;
  lVar7 = lStack_78;
  uVar6 = local_80;
  uVar5 = uStack_88;
  uVar3 = local_90;
  if (iVar1 == 0) {
    local_90 = 0;
    uStack_88 = 0;
    local_80 = 0;
    lStack_78 = 1;
    local_70 = 0;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    lVar7 = 1;
    bVar8 = 0;
  }
  else {
    lVar9 = unaff_x20[3];
    if (lVar9 == 0) {
      if (lStack_78 == 0) {
LAB_10053c020:
        if (*(byte *)(unaff_x20 + 4) == 2) {
          if (bVar8 == 2) {
LAB_10053c034:
            uVar4 = *unaff_x20;
            FUN_1000094a4(uVar4,unaff_x20[1],uVar3,uVar5);
            uVar11 = (uint)uVar4;
            FUN_100541970(uVar3,uVar5,uVar6,lVar7,bVar8);
            goto LAB_10053c0ac;
          }
        }
        else if (bVar8 == 2) {
          bVar8 = 2;
        }
        else if (((*(byte *)(unaff_x20 + 4) ^ bVar8) & 1) == 0) goto LAB_10053c034;
      }
    }
    else if (lStack_78 == 0) {
      lVar7 = 0;
    }
    else {
      uVar10 = unaff_x20[2];
      if (((uVar10 == local_80) && (lVar9 == lStack_78)) ||
         (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                    (uVar10,lVar9,local_80,lStack_78,0), (uVar10 & 1) != 0)) goto LAB_10053c020;
    }
  }
  FUN_100541970(uVar3,uVar5,uVar6,lVar7,bVar8);
  uVar11 = 0;
LAB_10053c0ac:
  return uVar11 & 1;
}

