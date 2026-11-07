// rea decompile_all
// name: FUN_1006aaf60
// address: 0x1006aaf60
// body: available
// range: 0x1006aaf60-0x1006aaffb inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


void FUN_1006aaf60(void *param_1,long param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  
  iVar2 = param_3 + 0xe;
  if (-8 < param_3) {
    iVar2 = param_3 + 7;
  }
  if (0 < (iVar2 << 0x15) >> 0x18) {
    _bzero(param_1,(ulong)((iVar2 >> 3 & 0x7fU) << 3));
  }
  if (0 < param_3) {
    uVar4 = 0;
    cVar3 = '\0';
    do {
      uVar1 = ~uVar4 + param_3 & 0xfffffff8;
      *(ulong *)((long)param_1 + (ulong)uVar1) =
           (ulong)*(byte *)(param_2 + cVar3) << ((~uVar4 + param_3 & 7) << 3) |
           *(ulong *)((long)param_1 + (ulong)uVar1);
      cVar3 = cVar3 + '\x01';
      uVar4 = (uint)cVar3;
    } while ((int)uVar4 < param_3);
  }
  return;
}

