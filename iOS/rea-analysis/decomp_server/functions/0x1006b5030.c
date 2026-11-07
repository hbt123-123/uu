// rea decompile_all
// name: FUN_1006b5030
// address: 0x1006b5030
// body: available
// range: 0x1006b5030-0x1006b5153 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006b5030(undefined2 *param_1,ulong param_2,long param_3,ulong param_4,undefined8 param_5)

{
  undefined2 *puVar1;
  ulong uVar2;
  long lVar3;
  undefined2 *puVar4;
  ulong uVar5;
  ulong uVar6;
  
  if ((0x10 < param_2) && (0xb < param_4)) {
    uVar6 = param_4 + 3 >> 2;
    puVar1 = param_1 + 3;
    puVar4 = puVar1;
    FUN_1006b4e7c(puVar1,param_2 - 6,param_3,uVar6);
    if ((puVar4 < (undefined2 *)0xffffffffffffff89) && (puVar4 != (undefined2 *)0x0)) {
      *param_1 = (short)puVar4;
      uVar2 = (long)puVar1 + (long)puVar4;
      uVar5 = uVar2;
      FUN_1006b4e7c(uVar2,(long)param_1 + (param_2 - uVar2),param_3 + uVar6,uVar6,param_5);
      if ((uVar5 < 0xffffffffffffff89) && (uVar5 != 0)) {
        param_1[1] = (short)uVar5;
        lVar3 = param_3 + uVar6 + uVar6;
        uVar2 = uVar2 + uVar5;
        uVar5 = uVar2;
        FUN_1006b4e7c(uVar2,(long)param_1 + (param_2 - uVar2),lVar3,uVar6,param_5);
        if ((uVar5 < 0xffffffffffffff89) && (uVar5 != 0)) {
          param_1[2] = (short)uVar5;
          lVar3 = lVar3 + uVar6;
          FUN_1006b4e7c(uVar2 + uVar5,(long)param_1 + (param_2 - (uVar2 + uVar5)),lVar3,
                        (param_3 + param_4) - lVar3,param_5);
        }
      }
    }
  }
  return;
}

