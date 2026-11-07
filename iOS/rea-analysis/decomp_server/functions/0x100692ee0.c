// rea decompile_all
// name: FUN_100692ee0
// address: 0x100692ee0
// body: available
// range: 0x100692ee0-0x100692fff inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


char * FUN_100692ee0(byte *param_1,char *param_2)

{
  ulong uVar1;
  byte bVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  char local_44 [4];
  
  bVar2 = param_1[0x17];
  local_44[0] = '\0';
  local_44[1] = '\0';
  local_44[2] = '\0';
  local_44[3] = '\0';
  uVar1 = *(ulong *)(param_1 + 8);
  if (-1 < (char)bVar2) {
    uVar1 = (ulong)bVar2;
  }
  if (uVar1 != 0) {
    pbVar5 = *(byte **)param_1;
    if (-1 < (char)bVar2) {
      pbVar5 = param_1;
    }
    do {
      bVar2 = *pbVar5;
      if (((byte)(bVar2 - 0x30) < 10 || (byte)((bVar2 & 0xdf) + 0xbf) < 0x1a) ||
         ((uVar3 = bVar2 - 0x20, uVar3 < 0x40 &&
          (((1L << ((ulong)uVar3 & 0x3f) & 0x8000000000006400U) != 0 || ((ulong)uVar3 == 0)))))) {
        std::string::push_back((char)param_2);
      }
      else {
        _snprintf(local_44,4,"%%%02X");
        std::string::append(param_2);
      }
      pbVar5 = pbVar5 + 1;
      uVar1 = *(ulong *)(param_1 + 8);
      pbVar4 = *(byte **)param_1;
      if (-1 < (char)param_1[0x17]) {
        uVar1 = (ulong)param_1[0x17];
        pbVar4 = param_1;
      }
    } while (pbVar5 != pbVar4 + uVar1);
  }
  return param_2;
}

