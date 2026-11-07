// rea decompile_all
// name: FUN_100507ea8
// address: 0x100507ea8
// body: available
// range: 0x100507ea8-0x100507f43 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_100507ea8(ulong *param_1,void *param_2,ulong param_3,long *param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  ulong uVar3;
  ulong uVar4;
  ulong uVar5;
  
  pbVar1 = (byte *)*param_4;
  pbVar2 = pbVar1;
  uVar3 = param_3;
  uVar4 = param_3;
  if (0x7f < param_3) {
    do {
      pbVar2 = pbVar1 + 1;
      *pbVar1 = (byte)uVar3 | 0x80;
      uVar4 = uVar3 >> 7;
      uVar5 = uVar3 >> 0xe;
      pbVar1 = pbVar2;
      uVar3 = uVar4;
    } while (uVar5 != 0);
  }
  pbVar1 = pbVar2 + 1;
  *pbVar2 = (byte)uVar4;
  *param_4 = (long)pbVar1;
  if (param_2 == (void *)0x0) {
    param_3 = 0;
  }
  else if (0 < (long)param_3) {
    _memmove(pbVar1,param_2,param_3);
    pbVar1 = (byte *)*param_4;
  }
  *param_4 = (long)(pbVar1 + param_3);
  *param_1 = param_3;
  return;
}

