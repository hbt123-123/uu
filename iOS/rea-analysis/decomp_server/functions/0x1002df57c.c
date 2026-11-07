// rea decompile_all
// name: FUN_1002df57c
// address: 0x1002df57c
// body: available
// range: 0x1002df57c-0x1002df7ff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_1002df57c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  ulong *puVar10;
  long lVar11;
  uint uVar12;
  ulong uVar13;
  long lVar14;
  ulong uVar15;
  uint uVar16;
  long lVar17;
  ulong uVar18;
  uint uVar19;
  long lVar20;
  long lVar21;
  
  lVar8 = 0;
  __s10Foundation10URLRequestVMa();
  lVar21 = *(long *)(lVar8 + -8);
  uVar12 = *(uint *)(lVar21 + 0x54);
  uVar6 = 0;
  if (uVar12 != 0) {
    uVar6 = uVar12 - 1;
  }
  lVar9 = 0;
  __s10Foundation3URLVMa();
  lVar11 = *(long *)(lVar9 + -8);
  uVar4 = *(uint *)(lVar11 + 0x54);
  uVar3 = 0;
  if (uVar4 != 0) {
    uVar3 = uVar4 - 1;
  }
  uVar2 = uVar6;
  if (uVar6 <= uVar3) {
    uVar2 = uVar3;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar3 = 0x7ffffffe;
  }
  lVar17 = *(long *)(*(long *)(param_3 + 0x10) + -8);
  uVar13 = *(ulong *)(lVar17 + 0x40);
  lVar20 = *(long *)(*(long *)(param_3 + 0x18) + -8);
  uVar15 = *(ulong *)(lVar20 + 0x40);
  if (uVar15 <= uVar13) {
    uVar15 = uVar13;
  }
  lVar14 = *(long *)(lVar21 + 0x40);
  if (uVar12 == 0) {
    lVar14 = lVar14 + 1;
  }
  lVar1 = 7;
  if (uVar4 == 0) {
    lVar1 = 8;
  }
  if (param_2 == 0) {
LAB_1002df7a0:
    iVar7 = 0;
  }
  else {
    uVar13 = (ulong)*(byte *)(lVar11 + 0x50);
    if (uVar3 <= param_2 && param_2 - uVar3 != 0) {
      uVar18 = (ulong)(*(byte *)(lVar20 + 0x50) | *(byte *)(lVar17 + 0x50));
      lVar17 = uVar15 + (uVar18 + (lVar1 + *(long *)(lVar11 + 0x40) +
                                   (uVar13 + (lVar14 + 7U & 0xfffffffffffffff8) + 8 &
                                   (uVar13 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) + 0x20 &
                        (uVar18 ^ 0xffffffffffffffff)) + 1;
      uVar16 = (uint)lVar17;
      uVar5 = uVar16 << 3;
      if (uVar16 < 4) {
        uVar19 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar5 & 0x1f)) >> (ulong)(uVar5 & 0x1f)) + 1;
        if (uVar19 >> 0x10 == 0) {
          if (uVar19 < 0x100) {
            if (uVar19 < 2) goto LAB_1002df738;
            goto LAB_1002df690;
          }
          uVar19 = (uint)*(ushort *)((long)param_1 + lVar17);
        }
        else {
          uVar19 = *(uint *)((long)param_1 + lVar17);
        }
        if (uVar19 != 0) goto LAB_1002df6d8;
      }
      else {
LAB_1002df690:
        uVar19 = (uint)*(byte *)((long)param_1 + lVar17);
        if (*(byte *)((long)param_1 + lVar17) != 0) {
LAB_1002df6d8:
          uVar6 = 0;
          if (uVar16 < 4) {
            uVar6 = uVar19 - 1 << (ulong)(uVar5 & 0x1f);
          }
          if (uVar16 == 0) {
            uVar12 = 0;
          }
          else {
            uVar12 = 4;
            if (uVar16 < 4) {
              uVar12 = uVar16;
            }
            if ((int)uVar12 < 3) {
              if (uVar12 == 1) {
                uVar12 = (uint)(byte)*param_1;
              }
              else {
                uVar12 = (uint)(ushort)*param_1;
              }
            }
            else if (uVar12 == 3) {
              uVar12 = (uint)(uint3)*param_1;
            }
            else {
              uVar12 = *param_1;
            }
          }
          return uVar3 + (uVar12 | uVar6) + 1;
        }
      }
    }
LAB_1002df738:
    if (uVar6 == uVar3) {
      if (uVar12 < 2) goto LAB_1002df7a0;
      (**(code **)(lVar21 + 0x30))(param_1,uVar12,lVar8);
      uVar6 = (uint)param_1;
    }
    else {
      puVar10 = (ulong *)((ulong)((long)param_1 + lVar14 + 7) & 0xfffffffffffffff8);
      if (uVar2 < 0x7fffffff) {
        uVar15 = *puVar10;
        if (0xfffffffe < uVar15) {
          uVar15 = 0xffffffff;
        }
        if ((int)uVar15 + 1U < 2) {
          return 0;
        }
        return (int)uVar15;
      }
      if (uVar4 < 2) goto LAB_1002df7a0;
      uVar15 = (long)puVar10 + uVar13 + 8 & ~uVar13;
      (**(code **)(lVar11 + 0x30))(uVar15,uVar4,lVar9);
      uVar6 = (uint)uVar15;
    }
    iVar7 = 0;
    if (1 < uVar6) {
      iVar7 = uVar6 - 1;
    }
  }
  return iVar7;
}

