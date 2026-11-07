// rea decompile_all
// name: FUN_1006cdafc
// address: 0x1006cdafc
// body: available
// range: 0x1006cdafc-0x1006cdd13 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined4 FUN_1006cdafc(long param_1,uint param_2,int param_3,long *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  
  lVar3 = *(long *)(param_1 + 0x30);
  lVar4 = *(long *)(param_1 + 8);
  uVar6 = (ulong)*(uint *)(param_1 + 0x24);
  uVar5 = (uint)((long)param_4 - lVar4);
  if (*(uint *)(param_1 + 0x24) < uVar5) {
    lVar7 = *(long *)(param_1 + 0x40);
    uVar2 = ~(-1 << (ulong)(param_2 & 0x1f));
    uVar9 = (ulong)(0x40 - param_3);
    uVar8 = (long)param_4 - lVar4 & 0xffffffff;
    if (param_5 < 7) {
      if (param_5 == 5) {
        do {
          uVar10 = (ulong)(*(long *)(lVar4 + uVar6) * -0x30e4432345000000) >> (uVar9 & 0x3f);
          *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & uVar2) * 4) =
               *(undefined4 *)(lVar3 + uVar10 * 4);
          *(uint *)(lVar3 + uVar10 * 4) = (uint)uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      else if (param_5 == 6) {
        do {
          uVar10 = (ulong)(*(long *)(lVar4 + uVar6) * -0x30e4432340650000) >> (uVar9 & 0x3f);
          *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & uVar2) * 4) =
               *(undefined4 *)(lVar3 + uVar10 * 4);
          *(uint *)(lVar3 + uVar10 * 4) = (uint)uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
      else {
LAB_1006cdbcc:
        do {
          uVar1 = (uint)(*(int *)(lVar4 + uVar6) * -0x61c8864f) >> (ulong)(0x20U - param_3 & 0x1f);
          *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & uVar2) * 4) =
               *(undefined4 *)(lVar3 + (ulong)uVar1 * 4);
          *(uint *)(lVar3 + (ulong)uVar1 * 4) = (uint)uVar6;
          uVar6 = uVar6 + 1;
        } while (uVar6 < uVar8);
      }
    }
    else if (param_5 == 8) {
      do {
        uVar10 = (ulong)(*(long *)(lVar4 + uVar6) * -0x30e44323485a9b9d) >> (uVar9 & 0x3f);
        *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & uVar2) * 4) =
             *(undefined4 *)(lVar3 + uVar10 * 4);
        *(uint *)(lVar3 + uVar10 * 4) = (uint)uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
    else {
      if (param_5 != 7) goto LAB_1006cdbcc;
      do {
        uVar10 = (ulong)(*(long *)(lVar4 + uVar6) * -0x30e44323405a9d00) >> (uVar9 & 0x3f);
        *(undefined4 *)(lVar7 + (ulong)((uint)uVar6 & uVar2) * 4) =
             *(undefined4 *)(lVar3 + uVar10 * 4);
        *(uint *)(lVar3 + uVar10 * 4) = (uint)uVar6;
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar8);
    }
  }
  *(uint *)(param_1 + 0x24) = uVar5;
  if (param_5 < 7) {
    if (param_5 == 5) {
      lVar4 = *param_4;
      uVar6 = 0xbb000000;
    }
    else {
      if (param_5 != 6) {
LAB_1006cdcc0:
        return *(undefined4 *)
                (lVar3 + (ulong)((uint)((int)*param_4 * -0x61c8864f) >> (ulong)(-param_3 & 0x1f)) *
                         4);
      }
      lVar4 = *param_4;
      uVar6 = 0xbf9b0000;
    }
  }
  else if (param_5 == 7) {
    lVar4 = *param_4;
    uVar6 = 0xbfa56300;
  }
  else {
    if (param_5 != 8) goto LAB_1006cdcc0;
    lVar4 = *param_4;
    uVar6 = 0xb7a56463;
  }
  return *(undefined4 *)
          (lVar3 + (lVar4 * (uVar6 | 0xcf1bbcdc00000000) >> ((ulong)(uint)-param_3 & 0x3f)) * 4);
}

