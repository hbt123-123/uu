// rea decompile_all
// name: thunk_FUN_1002635b0
// address: 0x100262354
// body: available
// range: 0x100262354-0x100262357 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


/* WARNING: Removing unreachable block (ram,0x0001002636ac) */
/* WARNING: Removing unreachable block (ram,0x0001002636e8) */

uint thunk_FUN_1002635b0(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long lVar2;
  undefined *puVar3;
  undefined *puVar4;
  long lVar5;
  undefined1 *puVar6;
  undefined1 *puVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  long lVar12;
  uint uVar13;
  long lVar14;
  long lVar15;
  code *pcVar16;
  long lStack_d0;
  ulong uStack_c8;
  long lStack_c0;
  uint uStack_b4;
  undefined1 auStack_b0 [80];
  
  lVar2 = 0;
  __s10Foundation10URLRequestVMa();
  lVar14 = *(long *)(lVar2 + -8);
  lVar15 = (long)&lStack_d0 - (*(long *)(lVar14 + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar3 = &DAT_100a81120;
  lStack_d0 = lVar15;
  FUN_100004bb4(&DAT_100a81120,&DAT_100815240);
  lVar15 = lVar15 - (*(long *)(*(long *)(puVar3 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0);
  puVar4 = &DAT_100a81018;
  FUN_100004bb4(&DAT_100a81018,&DAT_100815150);
  uVar9 = *(long *)(*(long *)(puVar4 + -8) + 0x40) + 0xfU & 0xfffffffffffffff0;
  uStack_c8 = lVar15 - uVar9;
  lVar10 = uStack_c8 - uVar9;
  lVar12 = lVar10 - uVar9;
  FUN_100262358(param_1,param_2);
  uStack_b4 = (uint)param_1;
  FUN_10026162c(lVar12);
  pcVar16 = *(code **)(lVar14 + 0x38);
  lStack_c0 = lVar15;
  (*pcVar16)(lVar12,0,1,lVar2);
  FUN_10026162c(lVar10);
  (*pcVar16)(lVar10,0,1,lVar2);
  pcVar16 = *(code **)(lVar14 + 0x30);
  lVar11 = lVar12;
  (*pcVar16)(lVar12,1,lVar2);
  lVar5 = lVar10;
  (*pcVar16)(lVar10,1,lVar2);
  lVar15 = lStack_c0;
  if ((int)lVar11 == 1) {
    if ((int)lVar5 == 1) {
      __ss6HasherV5_seedABSi_tcfC(auStack_b0,0);
      puVar6 = auStack_b0;
      FUN_1002620c4(puVar6);
      __ss6HasherV9_finalizeSiyF();
      __ss6HasherV5_seedABSi_tcfC(auStack_b0,0);
      puVar7 = auStack_b0;
      FUN_1002620c4(puVar7);
      __ss6HasherV9_finalizeSiyF();
      uVar13 = puVar6 == puVar7 & uStack_b4;
      goto LAB_100263868;
    }
  }
  else if ((int)lVar5 != 1) {
    lVar11 = (long)*(int *)(puVar3 + 0x30);
    FUN_100263c94(lVar12,lStack_c0);
    FUN_100263c94(lVar10,lVar15 + lVar11);
    lVar5 = lVar15;
    (*pcVar16)(lVar15,1,lVar2);
    uVar9 = uStack_c8;
    if ((int)lVar5 == 1) {
      lVar11 = lVar15 + lVar11;
      (*pcVar16)(lVar11,1,lVar2);
      if ((int)lVar11 == 1) {
        FUN_100040bb4(lVar15,&DAT_100a81018,&DAT_100815150);
        uVar13 = uStack_b4;
        goto LAB_100263868;
      }
    }
    else {
      FUN_100263c94(lVar15,uStack_c8);
      lVar5 = lVar15 + lVar11;
      (*pcVar16)(lVar5,1,lVar2);
      lVar1 = lStack_d0;
      if ((int)lVar5 != 1) {
        (**(code **)(lVar14 + 0x20))(lStack_d0,lVar15 + lVar11,lVar2);
        puVar3 = &DAT_100a81128;
        FUN_100005c90(&DAT_100a81128,PTR___s10Foundation10URLRequestVMa_1009960c0,
                      PTR___s10Foundation10URLRequestVSQAAMc_1009960d8);
        uVar8 = uVar9;
        __sSQ2eeoiySbx_xtFZTj(uVar9,lVar1,lVar2,puVar3);
        pcVar16 = *(code **)(lVar14 + 8);
        (*pcVar16)(lVar1,lVar2);
        (*pcVar16)(uVar9,lVar2);
        FUN_100040bb4(lVar15,&DAT_100a81018,&DAT_100815150);
        uVar13 = uStack_b4;
        if ((uVar8 & 1) != 0) goto LAB_100263868;
        goto LAB_100263864;
      }
      (**(code **)(lVar14 + 8))(uVar9,lVar2);
    }
    FUN_100040bb4(lVar15,&DAT_100a81120,&DAT_100815240);
  }
LAB_100263864:
  uVar13 = 0;
LAB_100263868:
  FUN_100040bb4(lVar10,&DAT_100a81018,&DAT_100815150);
  FUN_100040bb4(lVar12,&DAT_100a81018,&DAT_100815150);
  return uVar13 & 1;
}

