// rea decompile_all
// name: FUN_1007a5380
// address: 0x1007a5380
// body: available
// range: 0x1007a5380-0x1007a545f inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1007a5380(undefined8 *param_1)

{
  char *pcVar1;
  uint uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  
  uVar2 = *(uint *)(param_1 + 2);
  if ((int)uVar2 < 1) {
    return;
  }
  cVar3 = *(char *)((long)param_1 + (ulong)uVar2 + 0x14);
  *(uint *)(param_1 + 2) = uVar2 - 1;
  if ((*(char *)((long)param_1 + 0xdd) != '\0') && (*(char *)((long)param_1 + 0xdc) == '\0')) {
    iVar5 = 0x8bc84f;
    (*(code *)*param_1)("\n",1,param_1[1]);
    if (iVar5 != 0) {
      return;
    }
    if (0 < *(int *)(param_1 + 2)) {
      iVar5 = 0;
      do {
        iVar4 = 0x8d758f;
        (*(code *)*param_1)("    ",4,param_1[1]);
        if (iVar4 != 0) {
          return;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < *(int *)(param_1 + 2));
    }
  }
  *(undefined1 *)((long)param_1 + 0xdc) = 0;
  pcVar1 = "]";
  if (cVar3 != '\0') {
    pcVar1 = "}";
  }
                    /* WARNING: Could not recover jumptable at 0x0001007a53f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)*param_1)(pcVar1,1,param_1[1]);
  return;
}

