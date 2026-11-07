// rea decompile_all
// name: FUN_10069c9a0
// address: 0x10069c9a0
// body: available
// range: 0x10069c9a0-0x10069ca73 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10069c9a0(undefined8 *param_1,long param_2)

{
  char *pcVar1;
  long lVar2;
  char local_48;
  char cStack_47;
  undefined6 uStack_46;
  ulong uStack_40;
  undefined7 local_38;
  byte bStack_31;
  long local_28;
  
  FUN_10069c3b0(&local_48);
  lVar2 = (long)*(char *)(param_2 + 0x17);
  if (lVar2 < 0) {
    lVar2 = *(long *)(param_2 + 8);
  }
  if (local_28 != lVar2) {
    if ((char)bStack_31 < '\0') {
      if (((1 < uStack_40) &&
          (pcVar1 = (char *)CONCAT62(uStack_46,CONCAT11(cStack_47,local_48)), *pcVar1 == '/')) &&
         (pcVar1[1] == '/')) {
        FUN_100384eb8(param_1);
        goto LAB_10069c9e0;
      }
    }
    else if (((1 < bStack_31) && (local_48 == '/')) && (cStack_47 == '/')) {
      param_1[1] = uStack_40;
      *param_1 = CONCAT62(uStack_46,0x2f2f);
      param_1[2] = CONCAT17(bStack_31,local_38);
      goto LAB_10069c9e0;
    }
  }
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
LAB_10069c9e0:
  if ((char)bStack_31 < '\0') {
    operator_delete((void *)CONCAT62(uStack_46,CONCAT11(cStack_47,local_48)));
  }
  return;
}

