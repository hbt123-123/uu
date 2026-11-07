// rea decompile_all
// name: FUN_10037ebac
// address: 0x10037ebac
// body: available
// range: 0x10037ebac-0x10037ec2b inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_10037ebac(char *param_1,char *param_2,ulong param_3)

{
  uint uVar1;
  ulong uVar2;
  char cVar3;
  
  cVar3 = *param_2;
  *param_1 = cVar3;
  if (cVar3 == '\x01') {
    uVar2 = *(ulong *)(param_2 + 2);
    if (param_3 <= *(ulong *)(param_2 + 2)) {
      uVar2 = param_3;
    }
    *(ulong *)(param_1 + 2) = uVar2;
    *(undefined8 *)(param_1 + 10) = *(undefined8 *)(param_2 + 10);
    param_1[1] = param_2[1];
    *(undefined8 *)(param_1 + 0x12) = *(undefined8 *)(param_2 + 0x12);
    param_2[0] = '\0';
    param_2[1] = '\0';
    param_2[2] = '\0';
    param_2[3] = '\0';
    param_2[4] = '\0';
    param_2[5] = '\0';
    param_2[6] = '\0';
    param_2[7] = '\0';
  }
  else {
    uVar1 = (uint)(byte)param_2[1];
    if (((uint)param_3 & 0xff) <= (uint)(byte)param_2[1]) {
      uVar1 = (uint)param_3 & 0xff;
    }
    param_1[1] = (char)uVar1;
    _memcpy(param_1 + 2,param_2 + 2,(ulong)uVar1);
  }
  return param_1;
}

