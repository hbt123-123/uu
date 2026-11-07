// rea decompile_all
// name: FUN_1006bba9c
// address: 0x1006bba9c
// body: available
// range: 0x1006bba9c-0x1006bbedf inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8
FUN_1006bba9c(long *param_1,long param_2,uint *param_3,int param_4,int param_5,int param_6)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  void *pvVar4;
  void *pvVar5;
  int iVar6;
  ulong uVar7;
  void *pvVar8;
  ulong uVar9;
  long lVar10;
  long lVar11;
  void *pvVar12;
  undefined8 uVar13;
  
  if (param_3[6] == 1) {
    lVar3 = 0;
    uVar9 = (ulong)param_3[2];
    if (param_6 != 1) goto LAB_1006bbb00;
LAB_1006bbad0:
    if (param_3[4] != 3) goto LAB_1006bbb00;
    uVar1 = *param_3;
    if (0x10 < uVar1) {
      uVar1 = 0x11;
    }
    uVar7 = (ulong)uVar1;
    if (param_5 != 1) goto LAB_1006bbaf4;
LAB_1006bbb0c:
    param_1[1] = 0;
    *param_1 = 0;
    param_1[3] = 0;
    param_1[2] = 0;
    lVar11 = param_1[1];
    lVar10 = lVar11 + 1;
    *param_1 = lVar10;
    pvVar8 = *(void **)(param_2 + 0x10);
    *(void **)(param_2 + 0x20) = pvVar8;
  }
  else {
    uVar9 = (ulong)param_3[2];
    lVar3 = 4L << ((ulong)param_3[1] & 0x3f);
    if (param_6 == 1) goto LAB_1006bbad0;
LAB_1006bbb00:
    uVar7 = 0;
    if (param_5 == 1) goto LAB_1006bbb0c;
LAB_1006bbaf4:
    lVar10 = *param_1;
    lVar11 = param_1[1];
    pvVar8 = *(void **)(param_2 + 0x10);
  }
  iVar2 = (int)lVar10 - (int)lVar11;
  *(int *)(param_1 + 3) = iVar2;
  *(int *)((long)param_1 + 0x1c) = iVar2;
  iVar6 = (int)uVar7;
  *(int *)((long)param_1 + 0x24) = iVar2;
  *(int *)(param_1 + 5) = iVar6;
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined4 *)((long)param_1 + 0x7c) = 0;
  param_1[0x16] = 0;
  *(void **)(param_2 + 0x18) = pvVar8;
  pvVar4 = (void *)((long)pvVar8 + (4L << (uVar9 & 0x3f)));
  pvVar12 = *(void **)(param_2 + 0x28);
  pvVar5 = pvVar12;
  if (*(uint *)(param_2 + 0x38) < 2) {
    if (*(uint *)(param_2 + 0x38) == 0) {
      *(void **)(param_2 + 0x20) = pvVar8;
      *(void **)(param_2 + 0x28) = (void *)((ulong)pvVar12 & 0xfffffffffffffffc);
      if ((void *)((ulong)pvVar12 & 0xfffffffffffffffc) < pvVar8) goto LAB_1006bbb80;
    }
    else {
      *(ulong *)(param_2 + 0x28) = (ulong)pvVar12 & 0xfffffffffffffffc;
      if (((ulong)pvVar12 & 0xfffffffffffffffc) < *(ulong *)(param_2 + 0x20)) {
LAB_1006bbb80:
        *(ulong *)(param_2 + 0x20) = (ulong)pvVar12 & 0xfffffffffffffffc;
      }
    }
    pvVar5 = (void *)((ulong)pvVar12 & 0xfffffffffffffffc);
    *(undefined4 *)(param_2 + 0x38) = 2;
  }
  if (pvVar12 < pvVar4) {
    *(undefined4 *)(param_2 + 0x30) = 1;
    lVar10 = 4L << (uVar7 & 0x3f);
    param_1[6] = 0;
    pvVar12 = (void *)((long)pvVar8 + lVar3);
    pvVar4 = pvVar8;
    if (pvVar12 <= pvVar5) goto LAB_1006bbbb8;
LAB_1006bbc04:
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[8] = 0;
    lVar3 = 0;
    if (iVar6 != 0) {
      lVar3 = lVar10;
    }
    pvVar8 = (void *)((long)pvVar4 + lVar3);
    pvVar12 = pvVar4;
  }
  else {
    *(void **)(param_2 + 0x18) = pvVar4;
    lVar10 = 4L << (uVar7 & 0x3f);
    param_1[6] = (long)pvVar8;
    pvVar12 = (void *)((long)pvVar4 + lVar3);
    if (pvVar5 < pvVar12) goto LAB_1006bbc04;
LAB_1006bbbb8:
    *(void **)(param_2 + 0x18) = pvVar12;
    param_1[8] = (long)pvVar4;
    lVar3 = 0;
    if (iVar6 != 0) {
      lVar3 = lVar10;
    }
    pvVar8 = (void *)((long)pvVar12 + lVar3);
  }
  if (pvVar5 < pvVar8) {
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[7] = 0;
    return 0xffffffffffffffc0;
  }
  *(void **)(param_2 + 0x18) = pvVar8;
  iVar2 = *(int *)(param_2 + 0x30);
  param_1[7] = (long)pvVar12;
  if (iVar2 != 0) {
    return 0xffffffffffffffc0;
  }
  if (param_4 != 1) {
    pvVar4 = *(void **)(param_2 + 0x20);
    if (pvVar4 < pvVar8) {
      _bzero(pvVar4,(long)pvVar8 - (long)pvVar4);
      pvVar8 = *(void **)(param_2 + 0x18);
      pvVar4 = *(void **)(param_2 + 0x20);
    }
    if (pvVar4 < pvVar8) {
      *(void **)(param_2 + 0x20) = pvVar8;
    }
  }
  if ((param_6 != 1) || (param_3[6] < 7)) goto LAB_1006bbebc;
  if (*(uint *)(param_2 + 0x38) < 2) {
    if (*(uint *)(param_2 + 0x38) == 0) {
      pvVar5 = *(void **)(param_2 + 0x10);
      *(void **)(param_2 + 0x20) = pvVar5;
    }
    else {
      pvVar5 = *(void **)(param_2 + 0x20);
    }
    pvVar4 = (void *)(*(ulong *)(param_2 + 0x28) & 0xfffffffffffffffc);
    *(void **)(param_2 + 0x28) = pvVar4;
    if (pvVar4 < pvVar5) {
      *(void **)(param_2 + 0x20) = pvVar4;
    }
    *(undefined4 *)(param_2 + 0x38) = 2;
    pvVar5 = (void *)((long)pvVar4 + -0x400);
    if (pvVar5 < pvVar8) goto LAB_1006bbe08;
LAB_1006bbd00:
    if (pvVar5 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar5;
    }
    *(void **)(param_2 + 0x28) = pvVar5;
    param_1[9] = (long)pvVar5;
    pvVar4 = (void *)((long)pvVar5 + -0x90);
    if (pvVar8 <= pvVar4) goto LAB_1006bbd24;
LAB_1006bbe28:
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[10] = 0;
    pvVar12 = (void *)((long)pvVar5 + -0xd4);
    pvVar4 = pvVar5;
    if (pvVar12 < pvVar8) goto LAB_1006bbe48;
LAB_1006bbd48:
    if (pvVar12 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar12;
    }
    *(void **)(param_2 + 0x28) = pvVar12;
    param_1[0xb] = (long)pvVar12;
    pvVar5 = (void *)((long)pvVar12 + -0x80);
    if (pvVar8 <= pvVar5) goto LAB_1006bbd6c;
LAB_1006bbe68:
    pvVar5 = pvVar12;
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[0xc] = 0;
    pvVar4 = (void *)((long)pvVar5 - 0x8008);
    if (pvVar4 < pvVar8) goto LAB_1006bbe8c;
LAB_1006bbd94:
    if (pvVar4 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar4;
    }
    *(void **)(param_2 + 0x28) = pvVar4;
    param_1[0xd] = (long)pvVar4;
    pvVar5 = (void *)((long)pvVar4 + -0x1c01c);
    if (pvVar8 <= pvVar5) goto LAB_1006bbdbc;
LAB_1006bbeac:
    pvVar5 = (void *)0x0;
    *(undefined4 *)(param_2 + 0x30) = 1;
  }
  else {
    pvVar5 = (void *)((long)*(void **)(param_2 + 0x28) + -0x400);
    pvVar4 = *(void **)(param_2 + 0x28);
    if (pvVar8 <= pvVar5) goto LAB_1006bbd00;
LAB_1006bbe08:
    pvVar5 = pvVar4;
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[9] = 0;
    pvVar4 = (void *)((long)pvVar5 + -0x90);
    if (pvVar4 < pvVar8) goto LAB_1006bbe28;
LAB_1006bbd24:
    if (pvVar4 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar4;
    }
    *(void **)(param_2 + 0x28) = pvVar4;
    param_1[10] = (long)pvVar4;
    pvVar12 = (void *)((long)pvVar4 + -0xd4);
    if (pvVar8 <= pvVar12) goto LAB_1006bbd48;
LAB_1006bbe48:
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[0xb] = 0;
    pvVar5 = (void *)((long)pvVar4 + -0x80);
    pvVar12 = pvVar4;
    if (pvVar5 < pvVar8) goto LAB_1006bbe68;
LAB_1006bbd6c:
    if (pvVar5 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar5;
    }
    *(void **)(param_2 + 0x28) = pvVar5;
    param_1[0xc] = (long)pvVar5;
    pvVar4 = (void *)((long)pvVar5 - 0x8008);
    if (pvVar8 <= pvVar4) goto LAB_1006bbd94;
LAB_1006bbe8c:
    *(undefined4 *)(param_2 + 0x30) = 1;
    param_1[0xd] = 0;
    pvVar5 = (void *)((long)pvVar5 + -0x1c01c);
    if (pvVar5 < pvVar8) goto LAB_1006bbeac;
LAB_1006bbdbc:
    if (pvVar5 < *(void **)(param_2 + 0x20)) {
      *(void **)(param_2 + 0x20) = pvVar5;
    }
    *(void **)(param_2 + 0x28) = pvVar5;
  }
  param_1[0xe] = (long)pvVar5;
LAB_1006bbebc:
  lVar10 = *(long *)(param_3 + 2);
  lVar3 = *(long *)param_3;
  uVar13 = *(undefined8 *)(param_3 + 3);
  *(undefined8 *)((long)param_1 + 0xcc) = *(undefined8 *)(param_3 + 5);
  *(undefined8 *)((long)param_1 + 0xc4) = uVar13;
  param_1[0x18] = lVar10;
  param_1[0x17] = lVar3;
  uVar13 = 0;
  if (*(int *)(param_2 + 0x30) != 0) {
    uVar13 = 0xffffffffffffffc0;
  }
  return uVar13;
}

