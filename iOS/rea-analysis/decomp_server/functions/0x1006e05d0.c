// rea decompile_all
// name: FUN_1006e05d0
// address: 0x1006e05d0
// body: available
// range: 0x1006e05d0-0x1006e0677 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006e05d0(long *param_1,ulong param_2,uint param_3)

{
  long lVar1;
  ulong uVar2;
  ulong uVar3;
  uint uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
  
  if (param_2 != 0) {
    uVar6 = param_1[1];
    uVar3 = param_1[2];
    uVar2 = uVar6;
    if (uVar6 <= uVar3) {
      uVar2 = uVar3;
    }
    lVar7 = uVar6 * 0xc;
    do {
      uVar6 = uVar6 + 1;
      if (uVar6 - uVar2 == 1) {
        return;
      }
      lVar8 = *param_1;
      lVar1 = lVar8 + lVar7;
      uVar4 = *(uint *)(lVar1 + 4);
      uVar5 = param_2 - uVar4;
      if (param_2 < uVar4 || uVar5 == 0) {
        *(uint *)(lVar1 + 4) = uVar4 - (int)param_2;
        return;
      }
      *(undefined4 *)(lVar1 + 4) = 0;
      uVar4 = *(uint *)(lVar1 + 8);
      param_2 = uVar5 - uVar4;
      if (uVar5 < uVar4) {
        uVar4 = uVar4 - (int)uVar5;
        *(uint *)(lVar8 + lVar7 + 8) = uVar4;
        if (param_3 <= uVar4) {
          return;
        }
        if (uVar6 < uVar3) {
          *(uint *)(lVar8 + lVar7 + 0x10) = *(int *)(lVar8 + lVar7 + 0x10) + uVar4;
        }
        param_1[1] = uVar6;
        return;
      }
      *(undefined4 *)(lVar1 + 8) = 0;
      param_1[1] = uVar6;
      lVar7 = lVar7 + 0xc;
    } while (param_2 != 0);
  }
  return;
}

