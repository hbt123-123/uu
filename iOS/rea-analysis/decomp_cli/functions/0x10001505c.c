// rea decompile_all
// name: FUN_10001505c
// address: 0x10001505c
// body: available
// range: 0x10001505c-0x10001527b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


ulong FUN_10001505c(uint *param_1,uint param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  long lVar7;
  long lVar8;
  uint uVar9;
  long lVar10;
  ulong uVar11;
  ulong uVar12;
  uint uVar13;
  uint uVar14;
  long lVar15;
  long lVar16;
  
  lVar15 = *(long *)(param_3 + 0x10);
  lVar16 = *(long *)(lVar15 + -8);
  uVar9 = *(uint *)(lVar16 + 0x54);
  uVar4 = 0;
  if (uVar9 != 0) {
    uVar4 = uVar9 - 1;
  }
  lVar7 = 0;
  __s10Foundation4DateVMa();
  lVar8 = *(long *)(lVar7 + -8);
  uVar5 = *(uint *)(lVar8 + 0x54);
  uVar2 = uVar4;
  if (uVar4 <= uVar5) {
    uVar2 = uVar5;
  }
  uVar3 = uVar2;
  if (uVar2 < 0x7fffffff) {
    uVar3 = 0x7ffffffe;
  }
  lVar10 = *(long *)(lVar16 + 0x40);
  if (uVar9 == 0) {
    lVar10 = lVar10 + 1;
  }
  if (param_2 == 0) {
    return 0;
  }
  uVar12 = (ulong)*(byte *)(lVar16 + 0x50);
  uVar11 = (ulong)*(byte *)(lVar8 + 0x50);
  if (param_2 < uVar3 || param_2 - uVar3 == 0) goto LAB_1000151b0;
  lVar1 = (uVar11 + 0x28 +
           (lVar10 + 7 + (uVar12 + 1 & (uVar12 ^ 0xffffffffffffffff)) & 0xfffffffffffffff8) &
          (uVar11 ^ 0xffffffffffffffff)) + *(long *)(lVar8 + 0x40);
  uVar13 = (uint)lVar1;
  uVar6 = uVar13 << 3;
  if (uVar13 < 4) {
    uVar14 = ((param_2 - uVar3) + ~(-1 << (ulong)(uVar6 & 0x1f)) >> (ulong)(uVar6 & 0x1f)) + 1;
    if (uVar14 >> 0x10 == 0) {
      if (uVar14 < 0x100) {
        if (uVar14 < 2) goto LAB_1000151b0;
        goto LAB_100015108;
      }
      uVar14 = (uint)*(ushort *)((long)param_1 + lVar1);
    }
    else {
      uVar14 = *(uint *)((long)param_1 + lVar1);
    }
    if (uVar14 != 0) goto LAB_100015150;
  }
  else {
LAB_100015108:
    uVar14 = (uint)*(byte *)((long)param_1 + lVar1);
    if (*(byte *)((long)param_1 + lVar1) != 0) {
LAB_100015150:
      uVar4 = 0;
      if (uVar13 < 4) {
        uVar4 = uVar14 - 1 << (ulong)(uVar6 & 0x1f);
      }
      if (uVar13 == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = 4;
        if (uVar13 < 4) {
          uVar9 = uVar13;
        }
        if ((int)uVar9 < 3) {
          if (uVar9 == 1) {
            uVar9 = (uint)(byte)*param_1;
          }
          else {
            uVar9 = (uint)(ushort)*param_1;
          }
        }
        else if (uVar9 == 3) {
          uVar9 = (uint)(uint3)*param_1;
        }
        else {
          uVar9 = *param_1;
        }
      }
      return (ulong)(uVar3 + (uVar9 | uVar4) + 1);
    }
  }
LAB_1000151b0:
  uVar12 = (ulong)((long)param_1 + uVar12 + 1) & ~uVar12;
  if (uVar4 != uVar3) {
    uVar12 = lVar10 + 7 + uVar12 & 0xfffffffffffffff8;
    if (0x7ffffffe < uVar2) {
      uVar11 = uVar11 + 0x28 + uVar12 & ~uVar11;
                    /* WARNING: Could not recover jumptable at 0x00010001524c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(lVar8 + 0x30))(uVar11,uVar5,lVar7);
      return uVar11;
    }
    uVar11 = *(ulong *)(uVar12 + 0x10);
    if (0xfffffffe < uVar11) {
      uVar11 = 0xffffffff;
    }
    uVar4 = 0;
    if (1 < (uint)uVar11 + 1) {
      uVar4 = (uint)uVar11;
    }
    return (ulong)uVar4;
  }
  if (uVar9 < 2) {
    return 0;
  }
  (**(code **)(lVar16 + 0x30))(uVar12,uVar9,lVar15);
  uVar4 = 0;
  if (1 < (uint)uVar12) {
    uVar4 = (uint)uVar12 - 1;
  }
  return (ulong)uVar4;
}

