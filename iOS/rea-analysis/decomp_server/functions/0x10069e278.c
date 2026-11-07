// rea decompile_all
// name: FUN_10069e278
// address: 0x10069e278
// body: available
// range: 0x10069e278-0x10069e307 inclusive
// non_contiguous: false
// provider: Ghidra 12.1.4 (ghidra)
// analysis_profile: 066f9d6c56d7a436e2061afaa7f68aa9085572cd83e3172cf52ecd30a6101bae
// limitations: The session serves operations only after Ghidra reports default auto-analysis complete; incomplete analysis does not expose partial results.; The imported Program and temporary project are ephemeral and deleted on close. Annotation operations edit session database metadata; original executable bytes are never written.; Cancelling an active Ghidra request terminates its ephemeral database and discards session annotations. The selected target remains open; the next provider query imports the original artifact again.; Default-space addresses use lowercase 0x-prefixed hexadecimal; other address spaces use <percent-encoded-space>:0x<hex>.; Pseudocode is Ghidra decompiler output, not original source and not text-equivalent to Hopper output.; External functions and functions without an analyzable body return null; other decompiler failures remain explicit.
// pseudocode: provider-specific; not original source


int FUN_10069e278(undefined8 param_1,undefined8 param_2,byte *param_3,byte *param_4,ulong param_5)

{
  long lVar1;
  byte bVar2;
  bool bVar3;
  byte *pbVar4;
  ulong uVar5;
  long lVar6;
  
  if (param_3 <= param_4) {
    pbVar4 = param_3;
    uVar5 = 1;
    do {
      param_3 = pbVar4;
      bVar2 = *param_3;
      if ((char)bVar2 < '\0') {
        if ((bVar2 & 0xe0) == 0xc0) {
          lVar6 = 2;
        }
        else if ((bVar2 & 0xf0) == 0xe0) {
          lVar6 = 3;
        }
        else {
          lVar1 = 5;
          if ((bVar2 & 0xfc) != 0xf8) {
            lVar1 = 6;
          }
          lVar6 = 4;
          if ((bVar2 & 0xf8) != 0xf0) {
            lVar6 = lVar1;
          }
        }
      }
      else {
        lVar6 = 1;
      }
      bVar3 = uVar5 <= param_5;
      pbVar4 = param_3 + lVar6;
      uVar5 = uVar5 + 1;
    } while (param_3 + lVar6 <= param_4 && bVar3);
  }
  return (int)param_3 - (int)param_4;
}

