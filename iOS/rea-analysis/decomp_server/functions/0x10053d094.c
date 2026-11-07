// rea decompile_all
// name: FUN_10053d094
// address: 0x10053d094
// body: available
// range: 0x10053d094-0x10053d237 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


uint FUN_10053d094(undefined8 param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  uint uVar11;
  undefined8 *unaff_x20;
  undefined8 local_90;
  undefined8 uStack_88;
  ulong local_80;
  ulong uStack_78;
  long local_70;
  undefined1 auStack_68 [40];
  
  iVar1 = (int)&local_90;
  FUN_1000b142c(param_1,auStack_68);
  puVar2 = &DAT_100aaa130;
  FUN_100004bb4(&DAT_100aaa130,&DAT_100836190);
  _swift_dynamicCast(&local_90,auStack_68,puVar2,&DAT_1009d5380,6);
  lVar8 = local_70;
  uVar7 = uStack_78;
  uVar6 = local_80;
  uVar5 = uStack_88;
  uVar3 = local_90;
  if (iVar1 == 0) {
    uStack_88 = 0;
    local_90 = 0;
    uStack_78 = 0;
    local_80 = 0;
    local_70 = 1;
    uVar3 = 0;
    uVar5 = 0;
    uVar6 = 0;
    uVar7 = 0;
    lVar8 = 1;
  }
  else if ((long)*(char *)(unaff_x20 + 2) == 0xc) {
    if ((local_80 & 0xff) == 0xc) {
LAB_10053d17c:
      lVar9 = unaff_x20[4];
      if (lVar9 == 0) {
        if (local_70 == 0) goto LAB_10053d1ec;
      }
      else if ((local_70 != 0) &&
              (((uVar10 = unaff_x20[3], uVar10 == uStack_78 && (lVar9 == local_70)) ||
               (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                          (uVar10,lVar9,uStack_78,local_70,0), (uVar10 & 1) != 0)))) {
LAB_10053d1ec:
        uVar4 = *unaff_x20;
        FUN_1000094a4(uVar4,unaff_x20[1],uVar3,uVar5);
        uVar11 = (uint)uVar4;
        FUN_1005419bc(uVar3,uVar5,uVar6,uVar7,lVar8);
        goto LAB_10053d13c;
      }
    }
  }
  else if (((local_80 & 0xff) != 0xc) &&
          (*(long *)(&DAT_100837c98 + (long)*(char *)(unaff_x20 + 2) * 8) ==
           *(long *)(&DAT_100837c98 + (long)(char)local_80 * 8))) goto LAB_10053d17c;
  FUN_1005419bc(uVar3,uVar5,uVar6,uVar7,lVar8);
  uVar11 = 0;
LAB_10053d13c:
  return uVar11 & 1;
}

