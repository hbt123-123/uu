// rea decompile_all
// name: FUN_1005c98e8
// address: 0x1005c98e8
// body: available
// range: 0x1005c98e8-0x1005c9bff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_1005c98e8(char *param_1,char *param_2)

{
  int iVar1;
  long lVar2;
  undefined *puVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  long lVar7;
  undefined1 *puVar8;
  long extraout_x8;
  long extraout_x8_00;
  long extraout_x8_01;
  long lVar9;
  undefined1 *puVar10;
  ulong uVar11;
  long lVar12;
  long lVar13;
  code *pcVar14;
  
  lVar2 = 0;
  __s10Foundation3URLVMa();
  lVar13 = *(long *)(lVar2 + -8);
  (*(code *)PTR____chkstk_darwin_100995498)(*(undefined8 *)(lVar13 + 0x40));
  puVar10 = &stack0xffffffffffffffa0 + -(extraout_x8 + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100aad5f8;
  FUN_100004bb4(&DAT_100aad5f8,&DAT_10083eb90);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  uVar11 = (long)puVar10 - extraout_x8_00;
  puVar3 = &DAT_100aad6c8;
  FUN_100004bb4(&DAT_100aad6c8,&DAT_10083ec50);
  (*(code *)PTR____chkstk_darwin_100995498)
            (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  lVar9 = uVar11 - extraout_x8_01;
  if (*param_1 != *param_2) {
    return false;
  }
  lVar4 = 0;
  FUN_1005c8c98();
  pcVar5 = param_1 + *(int *)(lVar4 + 0x14);
  __s10Foundation3URLV2eeoiySbAC_ACtFZ(pcVar5,param_2 + *(int *)(lVar4 + 0x14));
  if (((ulong)pcVar5 & 1) == 0) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + *(int *)(lVar4 + 0x18));
  if ((uVar6 != *(ulong *)(param_2 + *(int *)(lVar4 + 0x18)) ||
       *(ulong *)((long)(param_1 + *(int *)(lVar4 + 0x18)) + 8) !=
       *(ulong *)((long)(param_2 + *(int *)(lVar4 + 0x18)) + 8)) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar6 & 1) == 0)) {
    return false;
  }
  uVar6 = *(ulong *)(param_1 + *(int *)(lVar4 + 0x1c));
  if (((uVar6 != *(ulong *)(param_2 + *(int *)(lVar4 + 0x1c))) ||
      (*(ulong *)((long)(param_1 + *(int *)(lVar4 + 0x1c)) + 8) !=
       *(ulong *)((long)(param_2 + *(int *)(lVar4 + 0x1c)) + 8))) &&
     (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF(),
     (uVar6 & 1) == 0)) {
    return false;
  }
  if (param_1[*(int *)(lVar4 + 0x20)] != param_2[*(int *)(lVar4 + 0x20)]) {
    return false;
  }
  if (*(long *)(param_1 + *(int *)(lVar4 + 0x24)) != *(long *)(param_2 + *(int *)(lVar4 + 0x24))) {
    return false;
  }
  iVar1 = *(int *)(lVar4 + 0x28);
  lVar12 = (long)*(int *)(puVar3 + 0x30);
  FUN_1005c8dc8(param_1 + iVar1,lVar9);
  FUN_1005c8dc8(param_2 + iVar1,lVar9 + lVar12);
  pcVar14 = *(code **)(lVar13 + 0x30);
  lVar7 = lVar9;
  (*pcVar14)(lVar9,1,lVar2);
  if ((int)lVar7 == 1) {
    lVar12 = lVar9 + lVar12;
    (*pcVar14)(lVar12,1,lVar2);
    if ((int)lVar12 != 1) {
LAB_1005c9b18:
      FUN_100040bb4(lVar9,&DAT_100aad6c8,&DAT_10083ec50);
      return false;
    }
    FUN_100040bb4(lVar9,&DAT_100aad5f8,&DAT_10083eb90);
  }
  else {
    FUN_1005c8dc8(lVar9,uVar11);
    lVar7 = lVar9 + lVar12;
    (*pcVar14)(lVar7,1,lVar2);
    if ((int)lVar7 == 1) {
      (**(code **)(lVar13 + 8))(uVar11,lVar2);
      goto LAB_1005c9b18;
    }
    puVar8 = puVar10;
    (**(code **)(lVar13 + 0x20))(puVar10,lVar9 + lVar12,lVar2);
    FUN_1005ca684();
    uVar6 = uVar11;
    __sSQ2eeoiySbx_xtFZTj(uVar11,puVar10,lVar2,puVar8);
    pcVar14 = *(code **)(lVar13 + 8);
    (*pcVar14)(puVar10,lVar2);
    (*pcVar14)(uVar11,lVar2);
    FUN_100040bb4(lVar9,&DAT_100aad5f8,&DAT_10083eb90);
    if ((uVar6 & 1) == 0) {
      return false;
    }
  }
  if ((*(long *)(param_1 + *(int *)(lVar4 + 0x2c)) == *(long *)(param_2 + *(int *)(lVar4 + 0x2c)))
     && (*(long *)(param_1 + *(int *)(lVar4 + 0x30)) == *(long *)(param_2 + *(int *)(lVar4 + 0x30)))
     ) {
    return *(double *)(param_1 + *(int *)(lVar4 + 0x34)) ==
           *(double *)(param_2 + *(int *)(lVar4 + 0x34));
  }
  return false;
}

