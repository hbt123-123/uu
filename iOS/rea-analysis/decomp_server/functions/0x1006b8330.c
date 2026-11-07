// rea decompile_all
// name: FUN_1006b8330
// address: 0x1006b8330
// body: available
// range: 0x1006b8330-0x1006b8733 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ushort * FUN_1006b8330(ushort *param_1,ushort *param_2,ushort *param_3,void *param_4,ushort *param_5
                      ,int param_6,int param_7)

{
  ulong *puVar1;
  ulong uVar2;
  ushort uVar3;
  ushort *puVar4;
  uint uVar5;
  ushort *puVar6;
  ushort uVar7;
  int iVar8;
  void *pvVar9;
  ulong uVar10;
  ushort *puVar11;
  long lVar12;
  ulong uVar13;
  ushort *puVar14;
  ushort *puVar15;
  ushort *puVar16;
  
  if (*(int *)param_1 == 0) {
    puVar16 = (ushort *)0xffffffffffffffc4;
  }
  else {
    puVar6 = (ushort *)0x0;
    if ((param_6 != 0) && (*(int *)param_1 == 1)) {
      puVar6 = param_2;
      FUN_1006bbee0(param_2,param_3,param_1 + 0x50,*(long *)(param_1 + 0xc0) + -1,
                    *(int *)(param_1 + 0x98));
      if ((ushort *)0xffffffffffffff88 < puVar6) {
        return puVar6;
      }
      param_3 = (ushort *)((long)param_3 - (long)puVar6);
      param_2 = (ushort *)((long)param_2 + (long)puVar6);
      param_1[0] = 2;
      param_1[1] = 0;
    }
    puVar16 = puVar6;
    if (param_5 != (ushort *)0x0) {
      puVar1 = (ulong *)(param_1 + 0x180);
      pvVar9 = (void *)*puVar1;
      if (pvVar9 == param_4) {
        lVar12 = *(long *)(param_1 + 0x188);
        uVar13 = (ulong)*(uint *)(param_1 + 0x18e);
        uVar10 = (ulong)*(uint *)(param_1 + 0x18c);
      }
      else {
        lVar12 = *(long *)(param_1 + 0x184);
        uVar5 = *(uint *)(param_1 + 0x18c);
        *(uint *)(param_1 + 0x18e) = uVar5;
        uVar10 = (long)pvVar9 - lVar12;
        iVar8 = (int)uVar10;
        *(int *)(param_1 + 0x18c) = iVar8;
        *(long *)(param_1 + 0x188) = lVar12;
        *(ulong *)(param_1 + 0x184) = (long)param_4 - uVar10;
        uVar13 = (ulong)uVar5;
        if (iVar8 - uVar5 < 8) {
          *(int *)(param_1 + 0x18e) = iVar8;
          uVar13 = uVar10;
        }
      }
      uVar2 = (long)param_4 + (long)param_5;
      *puVar1 = uVar2;
      if ((lVar12 + (uVar13 & 0xffffffff) < uVar2) &&
         (param_4 < (void *)(lVar12 + (uVar10 & 0xffffffff)))) {
        iVar8 = (int)uVar10;
        if ((long)(uVar2 - lVar12) <= (long)(uVar10 & 0xffffffff)) {
          iVar8 = (int)(uVar2 - lVar12);
        }
        *(int *)(param_1 + 0x18e) = iVar8;
      }
      if (pvVar9 != param_4) {
        *(int *)(param_1 + 0x192) = (int)uVar10;
      }
      if (*(int *)(param_1 + 0x80) != 0) {
        if (*(void **)(param_1 + 0x144) == param_4) {
          lVar12 = *(long *)(param_1 + 0x14c);
          uVar13 = (ulong)*(uint *)(param_1 + 0x152);
          uVar10 = (ulong)*(uint *)(param_1 + 0x150);
        }
        else {
          lVar12 = *(long *)(param_1 + 0x148);
          uVar5 = *(uint *)(param_1 + 0x150);
          *(uint *)(param_1 + 0x152) = uVar5;
          uVar10 = (long)*(void **)(param_1 + 0x144) - lVar12;
          iVar8 = (int)uVar10;
          *(int *)(param_1 + 0x150) = iVar8;
          *(long *)(param_1 + 0x14c) = lVar12;
          *(ulong *)(param_1 + 0x148) = (long)param_4 - uVar10;
          uVar13 = (ulong)uVar5;
          if (iVar8 - uVar5 < 8) {
            *(int *)(param_1 + 0x152) = iVar8;
            uVar13 = uVar10;
          }
        }
        *(ulong *)(param_1 + 0x144) = uVar2;
        if ((lVar12 + (uVar13 & 0xffffffff) < uVar2) &&
           (param_4 < (void *)(lVar12 + (uVar10 & 0xffffffff)))) {
          iVar8 = (int)uVar10;
          if ((long)(uVar2 - lVar12) <= (long)(uVar10 & 0xffffffff)) {
            iVar8 = (int)(uVar2 - lVar12);
          }
          *(int *)(param_1 + 0x152) = iVar8;
        }
      }
      if (param_6 == 0) {
        FUN_1006bc05c(puVar1,param_1 + 0x9c,param_1 + 0x50,param_4);
        puVar14 = param_1;
        FUN_1006bc1fc(param_1,param_2,param_3,param_4,param_5,0);
      }
      else {
        puVar16 = *(ushort **)(param_1 + 0xbc);
        uVar5 = *(uint *)(param_1 + 0x52);
        if (*(int *)(param_1 + 0x62) != 0) {
          FUN_1006b1404(param_1 + 0xcc,param_4,param_5);
        }
        puVar14 = param_2;
        puVar15 = param_5;
        do {
          uVar3 = 0;
          if (puVar15 <= puVar16) {
            uVar3 = (ushort)param_7 & 1;
          }
          if (param_3 < (ushort *)0x6) {
            return (ushort *)0xffffffffffffffba;
          }
          puVar4 = puVar15;
          if (puVar16 <= puVar15) {
            puVar4 = puVar16;
          }
          pvVar9 = (void *)((long)param_4 + (long)puVar4);
          FUN_1006bc05c(puVar1,param_1 + 0x9c,param_1 + 0x50,param_4,pvVar9);
          if ((uint)(*(int *)(param_1 + 400) + (1 << (ulong)(uVar5 & 0x1f))) <
              (uint)((int)pvVar9 - *(int *)(param_1 + 0x184))) {
            param_1[400] = 0;
            param_1[0x191] = 0;
            param_1[0x1d8] = 0;
            param_1[0x1d9] = 0;
            param_1[0x1da] = 0;
            param_1[0x1db] = 0;
          }
          if (*(uint *)(param_1 + 0x192) < *(uint *)(param_1 + 0x18e)) {
            *(uint *)(param_1 + 0x192) = *(uint *)(param_1 + 0x18e);
          }
          puVar16 = param_1;
          FUN_1006bc1fc(param_1,(long)puVar14 + 3,(long)param_3 - 3,param_4,puVar4,1);
          if ((ushort *)0xffffffffffffff88 < puVar16) {
            return puVar16;
          }
          if (puVar16 == (ushort *)0x1) {
            uVar7 = 2;
            puVar11 = puVar4;
LAB_1006b8578:
            *puVar14 = uVar7 | uVar3 | (ushort)((int)puVar11 << 3);
            *(char *)(puVar14 + 1) = (char)((ulong)puVar11 >> 0xd);
            puVar16 = (ushort *)((long)puVar16 + 3);
          }
          else {
            if (puVar16 != (ushort *)0x0) {
              uVar7 = 4;
              puVar11 = puVar16;
              goto LAB_1006b8578;
            }
            puVar16 = (ushort *)((long)puVar4 + 3);
            if (param_3 < puVar16) {
              return (ushort *)0xffffffffffffffba;
            }
            *puVar14 = uVar3 | (ushort)((int)puVar4 << 3);
            *(char *)(puVar14 + 1) = (char)((ulong)puVar4 >> 0xd);
            _memcpy((void *)((long)puVar14 + 3),param_4,(size_t)puVar4);
            if ((ushort *)0xffffffffffffff88 < puVar16) {
              return puVar16;
            }
          }
          puVar14 = (ushort *)((long)puVar14 + (long)puVar16);
          param_3 = (ushort *)((long)param_3 - (long)puVar16);
          param_1[0x118] = 0;
          param_1[0x119] = 0;
          puVar15 = (ushort *)((long)puVar15 - (long)puVar4);
          param_4 = pvVar9;
          puVar16 = puVar4;
        } while (puVar15 != (ushort *)0x0);
        if ((param_7 != 0) && (param_2 < puVar14)) {
          param_1[0] = 3;
          param_1[1] = 0;
        }
        puVar14 = (ushort *)((long)puVar14 - (long)param_2);
      }
      puVar16 = puVar14;
      if (puVar14 < (ushort *)0xffffffffffffff89) {
        lVar12 = *(long *)(param_1 + 0xc4);
        *(long *)(param_1 + 0xc4) = lVar12 + (long)param_5;
        *(long *)(param_1 + 200) = *(long *)(param_1 + 200) + (long)puVar14 + (long)puVar6;
        puVar16 = (ushort *)0xffffffffffffffb8;
        if (lVar12 + (long)param_5 + 1U <= *(ulong *)(param_1 + 0xc0) ||
            *(ulong *)(param_1 + 0xc0) == 0) {
          puVar16 = (ushort *)((long)puVar14 + (long)puVar6);
        }
      }
    }
  }
  return puVar16;
}

