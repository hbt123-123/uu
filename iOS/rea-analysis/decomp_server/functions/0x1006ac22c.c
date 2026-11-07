// rea decompile_all
// name: FUN_1006ac22c
// address: 0x1006ac22c
// body: available
// range: 0x1006ac22c-0x1006ac30b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006ac22c(undefined8 *param_1,long param_2,undefined8 param_3)

{
  long lVar1;
  ulong uVar2;
  
  lVar1 = param_1[4] + (ulong)(uint)(*(int *)((long)param_1 + 0x1c) << 1);
  if (*(int *)((long)param_1 + 0x1c) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    do {
      *(byte *)(lVar1 + uVar2) = *(byte *)(param_2 + uVar2) ^ 0x5c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)((long)param_1 + 0x1c));
  }
  if ((uint)uVar2 < *(uint *)(param_1 + 3)) {
    uVar2 = uVar2 & 0xffffffff;
    do {
      *(undefined1 *)(lVar1 + uVar2) = 0x5c;
      uVar2 = uVar2 + 1;
    } while (uVar2 < *(uint *)(param_1 + 3));
  }
  (*(code *)param_1[2])(param_1,param_3);
  (*(code *)*param_1)(param_1);
  (*(code *)param_1[1])(param_1,lVar1,*(undefined4 *)(param_1 + 3));
  (*(code *)param_1[1])(param_1,param_3,*(undefined4 *)((long)param_1 + 0x1c));
                    /* WARNING: Could not recover jumptable at 0x0001006ac308. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)param_1[2])(param_1,param_3);
  return;
}

