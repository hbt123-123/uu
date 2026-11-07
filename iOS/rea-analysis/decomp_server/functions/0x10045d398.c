// rea decompile_all
// name: FUN_10045d398
// address: 0x10045d398
// body: available
// range: 0x10045d398-0x10045d57b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Ghidra Listing reports a terminal call at 0x10045d578 to 0x1000094a4 FUN_1000094a4 (external=false, thunk=false, hasNoReturn=false); fallthrough is excluded by Ghidra's flow model. The reason for the terminal flow is not established by this observation.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


undefined8 FUN_10045d398(byte *param_1,byte *param_2)

{
  ulong uVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  
  if ((((((*param_1 ^ *param_2) & 1) == 0) && (((param_1[1] ^ param_2[1]) & 1) == 0)) &&
      (((param_1[2] ^ param_2[2]) & 1) == 0)) && (((param_1[3] ^ param_2[3]) & 1) == 0)) {
    uVar1 = *(ulong *)(param_1 + 8);
    if ((((uVar1 == *(ulong *)(param_2 + 8)) &&
         (*(long *)(param_1 + 0x10) == *(long *)(param_2 + 0x10))) ||
        (__ss27_stringCompareWithSmolCheck__9expectingSbs11_StringGutsV_ADs01_G16ComparisonResultOtF
                   (uVar1,*(long *)(param_1 + 0x10),*(ulong *)(param_2 + 8),
                    *(long *)(param_2 + 0x10),0), (uVar1 & 1) != 0)) &&
       (((param_1[0x18] ^ param_2[0x18]) & 1) == 0)) {
      lVar3 = *(long *)(param_1 + 0x20);
      lVar4 = *(long *)(param_2 + 0x20);
      if ((param_2[0x28] & 1) == 0) {
        if (lVar3 != lVar4) {
          return 0;
        }
      }
      else if (lVar4 < 2) {
        if (lVar4 == 0) {
          if (lVar3 != 0) {
            return 0;
          }
        }
        else if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar4 == 2) {
        if (lVar3 != 2) {
          return 0;
        }
      }
      else if (lVar3 != 3) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x30);
      lVar4 = *(long *)(param_2 + 0x30);
      if ((param_2[0x38] & 1) == 0) {
        if (lVar3 != lVar4) {
          return 0;
        }
      }
      else if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar3 != 2) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x40);
      lVar4 = *(long *)(param_2 + 0x40);
      if ((param_2[0x48] & 1) == 0) {
        if (lVar3 != lVar4) {
          return 0;
        }
      }
      else if (lVar4 == 0) {
        if (lVar3 != 0) {
          return 0;
        }
      }
      else if (lVar4 == 1) {
        if (lVar3 != 1) {
          return 0;
        }
      }
      else if (lVar3 != 2) {
        return 0;
      }
      lVar3 = *(long *)(param_1 + 0x50);
      lVar4 = *(long *)(param_2 + 0x50);
      if ((param_2[0x58] & 1) == 0) {
        if (lVar3 == lVar4) goto LAB_10045d568;
      }
      else if (lVar4 == 0) {
        if (lVar3 == 0) goto LAB_10045d568;
      }
      else if (lVar4 == 1) {
        if (lVar3 == 1) {
LAB_10045d568:
          uVar2 = *(undefined8 *)(param_1 + 0x60);
          FUN_1000094a4(uVar2,*(undefined8 *)(param_1 + 0x68),*(undefined8 *)(param_2 + 0x60),
                        *(undefined8 *)(param_2 + 0x68));
          return uVar2;
        }
      }
      else if (lVar3 == 2) goto LAB_10045d568;
    }
  }
  return 0;
}

