// rea decompile_all
// name: FUN_10045cc10
// address: 0x10045cc10
// body: available
// range: 0x10045cc10-0x10045cd9f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


bool FUN_10045cc10(long *param_1,long *param_2)

{
  long lVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  ushort uVar7;
  
  lVar3 = *param_1;
  lVar2 = param_1[2];
  uVar4 = param_1[4];
  uVar5 = param_1[7];
  if ((uVar5 >> 0x3c & 3) == 0) {
    if ((*(byte *)((long)param_2 + 0x3f) & 0x30) != 0) {
      return false;
    }
    lVar6 = *param_2;
    lVar1 = param_2[2];
    if ((*(uint *)(param_2 + 1) & 1) == 0) {
      if (lVar3 != lVar6) {
        return false;
      }
    }
    else if (lVar6 < 2) {
      if (lVar6 == 0) {
        if (lVar3 != 0) {
          return false;
        }
      }
      else if (lVar3 != 1) {
        return false;
      }
    }
    else if (lVar6 == 2) {
      if (lVar3 != 2) {
        return false;
      }
    }
    else if (lVar3 != 3) {
      return false;
    }
    if ((param_2[3] & 1U) == 0) {
      if (lVar2 != lVar1) {
        return false;
      }
    }
    else if (lVar1 == 0) {
      if (lVar2 != 0) {
        return false;
      }
    }
    else if (lVar1 == 1) {
      if (lVar2 != 1) {
        return false;
      }
    }
    else if (lVar2 != 2) {
      return false;
    }
    FUN_1000094a4(uVar4,param_1[5],param_2[4],param_2[5]);
  }
  else {
    if (((uint)(uVar5 >> 0x3c) & 3) != 1) {
      if ((param_2[7] & 0x3000000000000000U) != 0x2000000000000000) {
        return false;
      }
      return (int)lVar3 == (int)*param_2;
    }
    if ((param_2[7] & 0x3000000000000000U) != 0x1000000000000000) {
      return false;
    }
    uVar7 = NEON_uminv(CONCAT26(-(ushort)(param_1[3] == param_2[3]),
                                CONCAT24(-(ushort)(lVar2 == param_2[2]),
                                         CONCAT22(-(ushort)(param_1[1] == param_2[1]),
                                                  -(ushort)(lVar3 == *param_2)))),2);
    if ((uVar7 & 1) == 0) {
      return false;
    }
    if (uVar4 != param_2[4] || (int)param_1[5] != (int)param_2[5]) {
      return false;
    }
    uVar4 = param_1[6];
    FUN_1000094a4(uVar4,uVar5 & 0xcfffffffffffffff,param_2[6],param_2[7] & 0xcfffffffffffffff);
  }
  if ((uVar4 & 1) == 0) {
    return false;
  }
  return true;
}

