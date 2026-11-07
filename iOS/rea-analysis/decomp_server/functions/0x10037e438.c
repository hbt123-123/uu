// rea decompile_all
// name: FUN_10037e438
// address: 0x10037e438
// body: available
// range: 0x10037e438-0x10037e483 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_10037e438(undefined8 *param_1,char *param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  *(undefined1 *)param_1 = 0;
  cVar1 = *param_2;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x01') {
      *(undefined1 *)param_1 = 1;
      *(undefined4 *)((long)param_1 + 1) = *(undefined4 *)(param_2 + 1);
      *(undefined8 *)((long)param_1 + 5) = *(undefined8 *)(param_2 + 5);
      param_2[5] = '\0';
      param_2[6] = '\0';
      param_2[7] = '\0';
      param_2[8] = '\0';
      param_2[9] = '\0';
      param_2[10] = '\0';
      param_2[0xb] = '\0';
      param_2[0xc] = '\0';
    }
    else if (cVar1 == '\0') goto LAB_10037e454;
    return;
  }
LAB_10037e454:
  uVar3 = *(undefined8 *)(param_2 + 8);
  uVar2 = *(undefined8 *)param_2;
  uVar4 = *(undefined8 *)(param_2 + 0xd);
  *(undefined8 *)((long)param_1 + 0x15) = *(undefined8 *)(param_2 + 0x15);
  *(undefined8 *)((long)param_1 + 0xd) = uVar4;
  param_1[1] = uVar3;
  *param_1 = uVar2;
  return;
}

