// rea decompile_all
// name: FUN_1005346a8
// address: 0x1005346a8
// body: available
// range: 0x1005346a8-0x1005349e3 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1005346a8(undefined8 param_1,long param_2,long param_3,ulong param_4)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined1 *puVar3;
  long lVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  code *pcVar8;
  long lVar9;
  long *unaff_x20;
  long unaff_x21;
  long lVar10;
  long lVar11;
  long lVar12;
  undefined1 *puVar13;
  
  puVar1 = (undefined8 *)0x0;
  __sSqMa(0,param_2);
  lVar4 = puVar1[-1];
  uVar5 = *(long *)(lVar4 + 0x40) + 0xfU & 0xfffffffffffffff0;
  puVar3 = &stack0xffffffffffffff70 + -uVar5;
  puVar13 = puVar3 + -uVar5;
  lVar12 = (long)puVar13 - uVar5;
  lVar6 = *(long *)(param_2 + -8);
  uVar5 = *(long *)(lVar6 + 0x40) + 0xfU & 0xfffffffffffffff0;
  lVar11 = lVar12 - uVar5;
  lVar10 = lVar11 - uVar5;
  puVar2 = puVar1;
  FUN_100535660();
  lVar7 = unaff_x20[2];
  lVar9 = *unaff_x20;
  if (lVar9 == 0) {
    if (lVar7 == 0) goto LAB_100534778;
  }
  else if (lVar7 == unaff_x20[1] - lVar9) {
LAB_100534778:
    FUN_1004f98e4();
    _swift_allocError(&DAT_1009d03a0,puVar2,0,0);
    puVar2[1] = 0xd;
    *puVar2 = 0;
    _swift_willThrow();
    return;
  }
  if (*(char *)(lVar9 + lVar7) == '\"') {
    FUN_100536250();
    if (unaff_x21 != 0) {
      return;
    }
    if ((param_4 & 1) == 0) {
      FUN_10050f584(lVar12);
      lVar7 = lVar12;
      (**(code **)(lVar6 + 0x30))(lVar12,1,param_2);
      if ((int)lVar7 != 1) {
        pcVar8 = *(code **)(lVar6 + 0x20);
        (*pcVar8)(lVar10 - uVar5,lVar12,param_2);
        (*pcVar8)(param_1,lVar10 - uVar5,param_2);
        goto LAB_1005349a8;
      }
      (**(code **)(lVar4 + 8))(lVar12,puVar1);
      goto LAB_100534918;
    }
    FUN_10053317c();
    FUN_10050f328(puVar13);
    puVar3 = puVar13;
    (**(code **)(lVar6 + 0x30))(puVar13,1,param_2);
    if ((int)puVar3 != 1) {
      pcVar8 = *(code **)(lVar6 + 0x20);
      (*pcVar8)(lVar10,puVar13,param_2);
      (*pcVar8)(param_1,lVar10,param_2);
LAB_1005349a8:
      (**(code **)(lVar6 + 0x38))(param_1,0,1,param_2);
      return;
    }
    pcVar8 = *(code **)(lVar4 + 8);
    puVar3 = puVar13;
  }
  else {
    FUN_1005341d8(FUN_100535d18);
    if (unaff_x21 != 0) {
      return;
    }
    (**(code **)(param_3 + 0x20))(puVar3);
    puVar13 = puVar3;
    (**(code **)(lVar6 + 0x30))(puVar3,1,param_2);
    if ((int)puVar13 != 1) {
      pcVar8 = *(code **)(lVar6 + 0x20);
      (*pcVar8)(lVar11,puVar3,param_2);
      (*pcVar8)(param_1,lVar11,param_2);
      goto LAB_1005349a8;
    }
    pcVar8 = *(code **)(lVar4 + 8);
  }
  (*pcVar8)(puVar3,puVar1);
LAB_100534918:
  FUN_1005367cc(param_1);
  return;
}

