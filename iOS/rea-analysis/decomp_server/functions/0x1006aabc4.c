// rea decompile_all
// name: FUN_1006aabc4
// address: 0x1006aabc4
// body: available
// range: 0x1006aabc4-0x1006aacb7 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aabc4(long param_1,undefined8 param_2,ulong param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  ulong uVar3;
  long lVar4;
  int iVar5;
  long lVar6;
  
  uVar1 = param_2;
  FUN_1006ad34c(param_2,param_3);
  if (PTR_FUN_100aba058 != (undefined *)0x0) {
    lVar6 = 0;
    iVar5 = (int)param_3;
    do {
      lVar4 = param_1;
      (*(code *)PTR_FUN_100aba058)(param_1,iVar5 << 3);
      if ((int)lVar4 == 0) {
        return;
      }
      *(ulong *)(param_1 + -8 + (long)iVar5 * 8) =
           *(ulong *)(param_1 + -8 + (long)iVar5 * 8) &
           0xffffffffffffffffU >> ((long)(short)-(short)uVar1 & 0x3fU);
      if (0 < iVar5) {
        lVar4 = 0;
        uVar3 = 0;
        do {
          uVar3 = *(ulong *)(param_1 + lVar4) | uVar3;
          lVar4 = lVar4 + 8;
        } while ((param_3 & 0xff) * 8 - lVar4 != 0);
        if ((uVar3 != 0) &&
           (uVar2 = param_2, FUN_1006ab988(param_2,param_1,param_3), (int)uVar2 == 1)) {
          return;
        }
      }
      lVar6 = lVar6 + 1;
    } while (lVar6 != 0x40);
  }
  return;
}

